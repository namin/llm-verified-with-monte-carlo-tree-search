import os
import re

def dfy_annotation_iterator(base_path="Clover/dataset/Dafny/textbook_algo/"):
    # Walk through all subdirectories of the given base path
    for root, dirs, files in os.walk(base_path):
        # Filter and process only files that end with '_annotation.dfy'
        for file in files:
            if file.endswith('_annotation.dfy') and not file.endswith('_no_sig_annotation.dfy'):
                file_path = os.path.join(root, file)
                # Open and read the content of the file
                with open(file_path, 'r', encoding='utf-8') as f:
                    content = f.read()
                    to_trim = r'{[^{}]*}'
                    content = "### Spec: In Dafny, complete the following method.\n```dafny\n" + re.sub(to_trim, '{', content)
                    # Clean whitespace from end of prompt:
                    content = content.rstrip()
                    # Yield the content of the file
                    yield content

def get_groundtruth(base_path="Clover/dataset/Dafny/textbook_algo/"):
    '''
    Loads each ground-truth Dafny example.
    '''
    for root, dirs, files in os.walk(base_path):
        for file in files:
            if file.endswith('_strong.dfy'):
                file_path = os.path.join(root, file)
                with open(file_path, 'r', encoding='utf-8') as f:
                    content = f.read()
                    yield content.strip()

if __name__ == "__main__":
    #print(next(dfy_annotation_iterator()))
    print(next(get_groundtruth()))
