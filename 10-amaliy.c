#include <stdio.h>

// Kopaytirish jadvali
void jadval(int son) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", son, i, son * i);
    }
}

int main() {
    int n;
    printf("Son kiriting: ");
    scanf("%d", &n);
    jadval(n);
    return 0;
}
