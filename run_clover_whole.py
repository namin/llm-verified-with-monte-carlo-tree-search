import llm
from clover_config import TRAIN_PROMPTS
from clover_loader import dfy_annotation_iterator

from lang import score_func as uncached_score_func

from common_cache import create_cached_func
score_func, cache_stats, reset_cache = create_cached_func(uncached_score_func)

def eval_clover(n=10, verbose=False):
    '''
    By default performs pass@n evaluation on clover dataset.
    Returns pass@n rate as a float number decimal.
    '''
    solved = 0
    total = 0
    for prompt in dfy_annotation_iterator():
        method_name_start = prompt.find('method ') + len('method ')
        method_name_end = method_name_start
        while method_name_end < len(prompt) and prompt[method_name_end].isalnum():
            method_name_end += 1
        method_name = prompt[method_name_start:method_name_end]

        if method_name in TRAIN_PROMPTS:
            continue
        
        if verbose:
            print(f"-----------Prompt: {total}")

        for i in range(n):
            if verbose:
                print(f"----Candidate: {i}")
                print(f"THE PROMPT:\n{prompt}")
            candidate = llm.generate_full(prompt, do_sample=True, top_p=0.9, top_k=7, temperature=0.8)
            score = score_func(candidate)
            if score and score > 0:
                solved += 1
                break
        total += 1
    return solved/total
    

if __name__ == "__main__":
    """
    prompt = '''Please create 10 variations of the body of this method that are also correct. You can add comments and change loop variable names to create different methods that are still functionally equivalent:
        ```dafny
        method arraySum(a: array<int>, b: array<int>) returns (c: array<int> )
            requires a.Length==b.Length
            ensures c.Length==a.Length
            ensures forall i:: 0 <= i< a.Length==> a[i] + b[i]==c[i]
            {
            c:= new int[a.Length];
            var i:=0;
            while i<a.Length
                invariant 0<=i<=a.Length
                invariant forall j:: 0 <= j< i==> a[j] + b[j]==c[j]
            {
                c[i]:=a[i]+b[i];
                i:=i+1;
                }
            }```
            1.```dafny
        method arraySum(a: array<int>, b: array<int>) returns (c: array<int> )
            requires a.Length==b.Length
            ensures c.Length==a.Length
            ensures forall i:: 0 <= i< a.Length==> a[i] + b[i]==c[i]
            {
            c:= new int[a.Length];
            var k:=0;
            while k<a.Length
                invariant 0<=i<=a.Length
                invariant forall j:: 0 <= j< k==> a[j] + b[j]==c[j]
            {
                c[k]:=a[k]+b[k];
                k:=k+1;
                }
            }```
        '''
    prompt = '''
Please fix this error: Error: Expected 'to' or 'downto'```dafny
method replace(arr: array<int>, k: int)
  modifies arr
  ensures forall i :: 0 <= i < arr.Length ==> (((old(arr[i]) > k) ==> arr[i] == -1) && ((old(arr[i]) <= k) ==> arr[i] == old(arr[i])))
{
    for i in 0 .. arr.Length - 1
        if arr[i] > k
            arr[i] := -1;
}
```
    '''
    print(llm.generate_full(prompt, do_sample=True, top_p=0.9, top_k=7, temperature=0.8))
    """
    print(eval_clover(verbose=True))
