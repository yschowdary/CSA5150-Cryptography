#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
const int initial_permutation_table[64] = {58, 50, 42, 34, 26, 18, 10, 2,
                                           60, 52, 44, 36, 28, 20, 12, 4,
                                           62, 54, 46, 38, 30, 22, 14, 6,
                                           64, 56, 48, 40, 32, 24, 16, 8,
                                           57, 49, 41, 33, 25, 17, 9, 1,
                                           59, 51, 43, 35, 27, 19, 11, 3,
                                           61, 53, 45, 37, 29, 21, 13, 5,
                                           63, 55, 47, 39, 31, 23, 15, 7};
void des_encrypt(const uint8_t *plain_text, uint8_t *cipher_text, const uint64_t *key) {   
    printf("Simplified DES encryption is not implemented yet.\n");
}
int main() {
    uint8_t plain_text[8] = {0x01, 0x23, 0x45, 0x67, 0x89, 0xAB, 0xCD, 0xEF}; // Example plaintext
    uint8_t cipher_text[8];
    uint64_t key = 0x133457799BBCDFF1; 
    des_encrypt(plain_text, cipher_text, &key);
    printf("Encrypted text: ");
    for (int i = 0; i < 8; i++) {
        printf("%02X", cipher_text[i]);
    }
    printf("\n");
    return 0;
}