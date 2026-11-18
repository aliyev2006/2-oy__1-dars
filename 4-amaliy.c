#include <stdio.h>

// Oxirgi raqam
int oxirgiRaqam(int son) {
    return son % 10;
}

int main() {
    int n;
    printf("Son kiriting: ");
    scanf("%d", &n);
    printf("Oxirgi raqam: %d\n", oxirgiRaqam(n));
    return 0;
}
