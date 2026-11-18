#include <stdio.h>

// Eng kichik son
int kichikSon(int a, int b, int c) {
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    return min;
}

int main() {
    int x, y, z;
    printf("Uchta son kiriting: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("Eng kichigi: %d\n", kichikSon(x, y, z));
    return 0;
}
