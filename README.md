# Run-Length Encoding (RLE) Compression in C

## Introduction

Run-Length Encoding (RLE) is simple lossless data compression technique that reduces data size by replacing consecutive repeated characters with their count and the character itself.


## What Was Explored

- How RLE compresses repeated characters.
- How to implement RLE using loops and conditions in C.
- Also the time and space complexity of the algorithm.
- When RLE is effective and when it is not that effective.

### Example

**Original:**
```
AAAABBBCC
```

**Compressed:**
```
4A3B2C
```

The original string has 9 characters, while the compressed version has 6, hence reducing the character count by approximately 33%.

## Interesting Discoveries

1. **RLE is lossless:** The original data can be reconstructed without losing information.
2. **Compression isn't always beneficial:** For strings like `ABCDEF`, RLE produces `1A1B1C1D1E1F`, which is larger than the original so not in useful in all the cases.
3. **Time complexity is O(n):** RLE processes each character once, making it efficient even for large inputs.
4. **Space complexity is O(1):** My C implementation uses constant auxiliary memory because it prints the compressed output directly.

## Running the Program

Compile:
```bash
gcc rle.c -o rle
```

Run:
```bash
./rle
```

## Conclusion

I learned that data compression does not always guarantee smaller files. RLE is most effective when data contains long sequences of repeated values. Its simplicity and efficiency make it a useful introduction to lossless compression algorithms.Copy and paste your work, or start typing.

## Additional Resources

1. [**Run-Length Encoding – GeeksforGeeks**](https://www.geeksforgeeks.org/dsa/run-length-encoding/)  
   Explains how RLE works, with examples and code implementations.

2. [**Lossless and Lossy Data Compression – GeeksforGeeks**](https://www.geeksforgeeks.org/dsa/lossless-and-lossy-data-compression/)  
   Explains the differences between lossless and lossy compression and how they affect data.

3. [**Run-Length Encoding – AQA Teaching Guide**](https://filestore.aqa.org.uk/resources/computing/AQA-8525-TG-RLE.PDF)
   Explains RLE compression, its limitations, and applications in images.

