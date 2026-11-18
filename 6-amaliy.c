#include <stdio.h>

// Sonning raqamlari soni
int raqamlarSoni(int son) {
    int k = 0;
    while (son > 0) {
        k++;
        son = son / 10;
    }
    return k;
}

int main() {
    int n;
    printf("Son kiriting: ");
    scanf("%d", &n);
    printf("Raqamlar soni: %d\n", raqamlarSoni(n));
    return 0;
}
