#include <stdio.h>

// Sonlar yigindisi
int yigindi(int n) {
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s += i;
    }
    return s;
}

int main() {
    int n;
    printf("N ni kiriting: ");
    scanf("%d", &n);
    printf("1 dan %d gacha yigindi: %d\n", n, yigindi(n));
    return 0;
}
