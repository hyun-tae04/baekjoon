#include <stdio.h>
int path(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 4;

    return path(n - 1) + path(n - 2) + path(n - 3);
}

int main() {
    int T, n;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d", &n);
        printf("%d\n", path(n));
    }

    return 0;
}