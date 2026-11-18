#include <stdio.h>

// Yoshni aniqlash
int yosh(int tugilganYil) {
    return 2026 - tugilganYil;
}

int main() {
    int yil;
    printf("Tugilgan yilingizni kiriting: ");
    scanf("%d", &yil);
    printf("Yoshingiz: %d\n", yosh(yil));
    return 0;
}
