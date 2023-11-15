#!/bin/bash

# Define the paths
IN_DIR="test"
EXPECTED_DIR="test"

lake exe cache get > /dev/null
lake build

# Iterate over each .in file in the test directory
for infile in $IN_DIR/*.in; do
    # Extract the base filename without the extension
    base=$(basename "$infile" .in)

    # Define the path for the expected output file
    expectedfile="$EXPECTED_DIR/$base.expected.out"

    # Check if the expected output file exists
    if [[ ! -f $expectedfile ]]; then
        echo "Expected output file $expectedfile does not exist. Skipping $infile."
        continue
    fi

    # Run the command and store its output in a temporary file
    tmpfile=$(mktemp)
    lake env ../../build/bin/repl < "$infile" > "$tmpfile" 2>&1

    # Compare the output with the expected output
    if diff "$tmpfile" "$expectedfile"; then
        echo "$base: PASSED"
        # Remove the temporary file
        rm "$tmpfile"
    else
        echo "$base: FAILED"
        # Remove the temporary file
        rm "$tmpfile"
        exit 1
    fi

done

