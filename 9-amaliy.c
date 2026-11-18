#include <stdio.h>

// Sonni teskari qilish
int teskari(int son) {
    int natija = 0;
    while (son > 0) {
        natija = natija * 10 + son % 10;
        son = son / 10;
    }
    return natija;
}

int main() {
    int n;
    printf("Son kiriting: ");
    scanf("%d", &n);
    printf("Teskarisi: %d\n", teskari(n));
    return 0;
}
