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