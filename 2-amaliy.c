#include <stdio.h>

// Tortburchak yuzi
int yuza(int uzunlik, int kenglik) {
    return uzunlik * kenglik;
}

int main() {
    int a, b;
    printf("Uzunlikni kiriting: ");
    scanf("%d", &a);
    printf("Kenglikni kiriting: ");
    scanf("%d", &b);
    printf("Yuzasi: %d\n", yuza(a, b));
    return 0;
}
