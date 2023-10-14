#include <stdio.h>

int main() {
    int t, h, w, n, floor, number, room[100];
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%d %d %d", &h, &w, &n);
        floor = n % h;
        if (floor == 0) {
            floor = h;
        }
        number = (n - 1) / h + 1;
        room[i] = floor * 100 + number;
    }

    for(int i=0; i<t; i++){
        printf("%d\n", room[i]);
    }
    return 0;
}
