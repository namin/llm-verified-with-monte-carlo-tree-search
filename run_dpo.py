import huggingface_generate
from datasets import load_dataset
from peft import LoraConfig
from transformers import TrainingArguments
from trl import DPOTrainer

def main():

    data_files = "datasets/clover_triples_symm.jsonl"
    eval_data_files = "datasets/clover_triples.jsonl"
    train_dataset = load_dataset("json", data_files=data_files, split="train")
    eval_dataset = load_dataset("json", data_files={"test": eval_data_files}, split="test")

    _, model, tokenizer = huggingface_generate.load_model()
    _, model_ref, _ = huggingface_generate.load_model()

    training_args = TrainingArguments(
        per_device_train_batch_size=1, #4
        max_steps=400, #1000
        remove_unused_columns=False,
        gradient_accumulation_steps=1,
        learning_rate=1e-3,
        evaluation_strategy="steps",
        logging_first_step=True,
        logging_steps=10,
        eval_steps=500,
        output_dir="./test",
        optim="rmsprop",
        warmup_steps=150,
        report_to="wandb",
        bf16=True,
        gradient_checkpointing=False,
    )

    peft_config = LoraConfig(
        r=64,
        lora_alpha=16,
        bias="none",
        task_type="CAUSAL_LM",
    )

    dpo_trainer = DPOTrainer(
        model,
        model_ref,
        #loss_type="kto_pair",#"ipo",
        args=training_args,
        beta=0.5, #0.1
        train_dataset=train_dataset,
        eval_dataset=eval_dataset,
        tokenizer=tokenizer,
        max_length=512,
        max_target_length=128,
        max_prompt_length=128,
        generate_during_eval=True,
        peft_config=peft_config,
    )

    dpo_trainer.train()

    dpo_trainer.save_model("my_dpo_model")

if __name__ == "__main__":
    main()
