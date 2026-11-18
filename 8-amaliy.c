#include <stdio.h>

// Boluvchilar soni
int boluvchilar(int son) {
    int k = 0;
    for (int i = 1; i <= son; i++) {
        if (son % i == 0) {
            k++;
        }
    }
    return k;
}

int main() {
    int n;
    printf("Son kiriting: ");
    scanf("%d", &n);
    printf("Boluvchilar soni: %d\n", boluvchilar(n));
    return 0;
}
