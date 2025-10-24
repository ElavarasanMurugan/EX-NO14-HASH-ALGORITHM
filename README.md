# EX-NO14-HASH-ALGORITHM

## AIM:
To implement HASH ALGORITHM

## ALGORITHM:

1. Hash Algorithm is used to convert input data (message) into a fixed-size string, typically a hash value, which uniquely represents the original data.

2. Initialization:
   - Choose a hash function \( H \) (e.g., SHA-256, MD5, etc.).
   - The message \( M \) to be hashed is input.

3. Message Preprocessing:
   - Break the message \( M \) into fixed-size blocks. If necessary, pad the message to make it compatible with the block size required by the hash function.
   - For example, in SHA-256, the message is padded to ensure that its length is a multiple of 512 bits.

4. Hash Calculation:
   - Process the message block by block, applying the hash function \( H \) iteratively to produce an intermediate hash value.
   - For SHA-256, each block is processed through a series of logical operations, bitwise manipulations, and modular additions.

5. Output:
   - After all blocks are processed, the final hash value (digest) is produced, which is a fixed-size output (e.g., 256-bit for SHA-256).
   - The resulting hash is unique to the input message, meaning even a small change in the message will result in a completely different hash.

6. Security: The strength of the hash algorithm lies in its collision resistance, ensuring that it is computationally infeasible to find two different messages that produce the same hash value.


## Program:

```c
#include <stdio.h>
#include <string.h>
// Simple hash function for demonstration
unsigned int simple_hash(const char *message)
{
    unsigned int hash = 0;
    int i;
    for (i = 0; i < strlen(message); i++)
    {
        hash = (hash * 31) + message[i]; // Using a prime number for multiplication
    }
    return hash;
}
int main()
{
    char message[256];
    unsigned int hash_value;
    // Input message from user
    printf("Enter the message to hash: ");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = '\0'; // Remove newline character
    // Generate hash
    hash_value = simple_hash(message);
    printf("Generated hash value: %u\n", hash_value);
    return 0;
}
```

## Output:

![alt text](images/image.png)

## Result:
The program is executed successfully.
