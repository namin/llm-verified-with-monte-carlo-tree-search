import json

def extract_negative_texts(file_path):
    with open(file_path, 'r') as file:
        content = file.read()
    
    # Splitting the file content into sections based on "SCORE" marker
    sections = content.split('SCORE\n')
    
    negative_texts = []
    for section in sections:
        # Checking if the section ends with -1.0 indicating a negative section
        if section.strip().endswith('-1.0'):
            # Extracting text chunks between "TEXT" and "}\n\n" markers
            start_indices = [i + 5 for i in range(len(section)) if section.startswith('TEXT', i)]
            end_indices = [i for i in range(len(section)) if section.startswith('}\n\n', i)]
            
            for start, end in zip(start_indices, end_indices):
                if start < end:
                    text_chunk = section[start:end].strip()
                    negative_texts.append({'negative': text_chunk})
    
    # Saving the negative texts to a jsonl file
    with open('datasets/negative_tmps.jsonl', 'w') as outfile:
        for item in negative_texts:
            json.dump(item, outfile)
            outfile.write('\n')

if __name__ == "__main__":
    file_path = 'clover_logs02.txt'  # Replace this with the path to your data file
    extract_negative_texts(file_path)

