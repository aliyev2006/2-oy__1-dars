#include <stdio.h>

// Sonni tekshirish
int musbatmi(int son) {
    if (son > 0) {
        return 1;
    }
    return 0;
}

int main() {
    int n;
    printf("Son kiriting: ");
    scanf("%d", &n);
    printf("Natija: %d\n", musbatmi(n));
    return 0;
}
