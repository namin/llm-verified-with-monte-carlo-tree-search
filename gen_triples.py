import json
from clover_loader import get_groundtruth 

def extract_negative_texts(file_path):
    with open(file_path, 'r') as file:
        content = file.read()
    
    # Splitting the file content into sections based on "SCORE" marker
    sections = content.split('SCORE\n')
    
    # Shifting the first line of the proceeding section to the last line of the previous section
    for i in range(len(sections) - 1):  # Skip the last section
        lines = sections[i + 1].split('\n', 1)  # Split the next section by the first newline
        if lines:  # If there are lines to shift
            sections[i] += lines[0]  # Add the first line of the next section to the current section
            sections[i + 1] = lines[1] if len(lines) > 1 else ''  # Remove the first line from the next section

    negative_texts = []
    for section in sections:
        #print("!!!!!!! A section: {}".format(section))
        # Checking if the section ends with -1.0 indicating a negative section
        if section.strip().endswith('-1.0'):
            # Extracting text chunks between "TEXT" and "}\n\n" markers
            start_indices = [i + 5 for i in range(len(section)) if section.startswith('TEXT', i)]
            end_indices = [i for i in range(len(section)) if section.startswith('}\n\n', i)]
            
            for start, end in zip(start_indices, end_indices):
                if start < end:
                    text_chunk = section[start:end+3].strip()
                    # Finding the text after "dafny\n" marker
                    dafny_index = text_chunk.find('```dafny\n')
                    if dafny_index != -1:
                        # Extracting text after "```dafny\n"
                        text_chunk = text_chunk[dafny_index + len('```dafny\n'):].strip()
                        method_name_start = text_chunk.find('method ') + len('method ')
                        method_name_end = method_name_start
                        while method_name_end < len(text_chunk) and text_chunk[method_name_end].isalnum():
                            method_name_end += 1
                        method_name = text_chunk[method_name_start:method_name_end]
                        negative_texts.append({'method_name': method_name,'negative': text_chunk})
    
    # Saving the negative texts to a jsonl file
    with open('datasets/negative_tmps.jsonl', 'w') as outfile:
        for item in negative_texts:
            json.dump(item, outfile)
            outfile.write('\n')

def extract_positive_texts(file_path):
    with open(file_path, 'r') as file:
        content = file.read()

    # Splitting the file content into sections based on "SCORE" marker
    sections = content.split('SCORE\n')

    # Shifting the first line of the proceeding section to the last line of the previous section
    for i in range(len(sections) - 1):  # Skip the last section
        lines = sections[i + 1].split('\n', 1)  # Split the next section by the first newline
        if lines:  # If there are lines to shift
            sections[i] += lines[0]  # Add the first line of the next section to the current section
            sections[i + 1] = lines[1] if len(lines) > 1 else ''  # Remove the first line from the next section

    positive_texts = []
    for section in sections:
        if section.strip().endswith('1.0') and not section.strip().endswith('-1.0'):
            # Extracting text chunks between "TEXT" and "}\n\n" markers
            start_indices = [i + 5 for i in range(len(section)) if section.startswith('TEXT', i)]
            end_indices = [i for i in range(len(section)) if section.startswith('}\n\n', i)]

            for start, end in zip(start_indices, end_indices):
                if start < end:
                    text_chunk = section[start:end+3].strip()
                    # Finding the text after "dafny\n" marker
                    dafny_index = text_chunk.find('```dafny\n')
                    if dafny_index != -1:
                        # Extracting text after "```dafny\n"
                        text_chunk = text_chunk[dafny_index + len('```dafny\n'):].strip()
                        method_name_start = text_chunk.find('method ') + len('method ')
                        method_name_end = method_name_start
                        while method_name_end < len(text_chunk) and text_chunk[method_name_end].isalnum():
                            method_name_end += 1
                        method_name = text_chunk[method_name_start:method_name_end]
                        method_name = text_chunk[method_name_start:method_name_end]
                        positive_texts.append({'method_name': method_name,'positive': text_chunk})

    with open('datasets/positive_tmps.jsonl', 'w') as outfile:
        if positive_texts:
            for item in positive_texts:
                json.dump(item, outfile)
                outfile.write('\n')
        for text_chunk in get_groundtruth():
            method_name_start = text_chunk.find('method ') + len('method ')
            method_name_end = method_name_start
            while method_name_end < len(text_chunk) and text_chunk[method_name_end].isalnum():
                method_name_end += 1
            method_name = text_chunk[method_name_start:method_name_end]
            method_name = text_chunk[method_name_start:method_name_end]
            item = {'method_name': method_name,'positive': text_chunk}
            json.dump(item, outfile)
            outfile.write('\n')

def read_jsonl_file(file_path):
    """Reads a JSONL file and returns a dictionary with method_name as keys and entries as values."""
    entries_dict = {}
    with open(file_path, 'r') as file:
        for line in file:
            entry = json.loads(line)
            method_name = entry.get('method_name')
            if method_name in entries_dict:
                entries_dict[method_name].append(entry)
            else:
                entries_dict[method_name] = [entry]
    return entries_dict

def find_matching_pairs(positive_file_path, negative_file_path):
    """Finds and returns pairs of entries with matching method_names from two JSONL files."""
    positive_entries = read_jsonl_file(positive_file_path)
    negative_entries = read_jsonl_file(negative_file_path)
    matching_pairs = []

    for method_name in positive_entries:
        if method_name in negative_entries:
            # Create pairs for all combinations of positive and negative entries with the same method_name
            for positive_entry in positive_entries[method_name]:
                for negative_entry in negative_entries[method_name]:
                    matching_pairs.append((positive_entry, negative_entry))

    return matching_pairs

def find_matching_pairs_half_method_names(positive_file_path, negative_file_path):
    """Finds and returns pairs of entries with matching method_names from two JSONL files,
    but only for half of the method names in the positive file."""
    positive_entries = read_jsonl_file(positive_file_path)
    negative_entries = read_jsonl_file(negative_file_path)
    matching_pairs = []

    # Sort the method names and select the first half
    sorted_method_names = sorted(positive_entries.keys())
    half_method_names = sorted_method_names[:len(sorted_method_names) // 2]

    for method_name in half_method_names:
        if method_name in negative_entries:
            for positive_entry in positive_entries[method_name]:
                for negative_entry in negative_entries[method_name]:
                    matching_pairs.append((positive_entry, negative_entry))

    return matching_pairs, half_method_names



if __name__ == "__main__":
    file_path = 'clover_logs02.txt'  # Replace this with the path to your data file
    extract_negative_texts(file_path)
    extract_positive_texts(file_path)
    positive_file_path = 'datasets/positive_tmps.jsonl'
    negative_file_path = 'datasets/negative_tmps.jsonl'
    matching_pairs, method_names = find_matching_pairs_half_method_names(positive_file_path, negative_file_path)
    print(f"Found {len(matching_pairs)} matching pairs from {len(method_names)} method names.")
    print(f"Example matching pair: {matching_pairs[3]}")

