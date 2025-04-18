#include <stdio.h>
#include "operations.h"

void afficher_cle() {
    unsigned char cle_hash[] = {
        0x12, 0x1C, 0x01, 0x2E, 0x17, 0x07, 0x61, 0x03, 0x65, 0x0A,
        0x05, 0x65, 0x00, 0x07, 0x0A, 0x19, 0x66, 0x0A, 0x16, 0x65,
        0x1B, 0x13, 0x19, 0x64, 0x01, 0x28
    };
    unsigned char cle[27];
    unsigned char key = 0x55;

    for (int i = 0; i < 26; i++) {
        cle[i] = cle_hash[i] ^ key;
    }
    cle[26] = '\0';

    printf("Voici ta clé : %s\n", cle);
}

int main() {
    int a = 5, b = 3;
    printf("Addition : %d + %d = %d\n", a, b, addition(a, b));
    printf("Soustraction : %d - %d = %d\n", a, b, soustraction(a, b));
    afficher_cle();
    return 0;
}
