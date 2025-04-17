#include <stdio.h>
#include "operations.h"

void afficher_cle() {
    unsigned char cle_hash[] = {
        0x12, 0x1c, 0x01, 0x7b, 0x17, 0x07, 0x11, 0x09, 0x3b, 0x0f,
        0x10, 0x07, 0x3b, 0x19, 0x1a, 0x00, 0x3b, 0x17, 0x10, 0x1d,
        0x19, 0x1d, 0x00
    };
    unsigned char cle[24];
    unsigned char key = 0x55;
    for (int i = 0; i < 23; i++) {
        cle[i] = cle_hash[i] ^ key;
    }
    cle[23] = '\0';
    printf("Voici ta clé : %s\n", cle);
}

int main() {
    int a = 5, b = 3;
    printf("Addition : %d + %d = %d\n", a, b, addition(a, b));
    printf("Soustraction : %d - %d = %d\n", a, b, soustraction(a, b));
    afficher_cle();
    return 0;
}
