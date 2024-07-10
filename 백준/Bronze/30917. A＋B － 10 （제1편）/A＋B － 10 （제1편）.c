#include <stdio.h>

int main(void) {
    int a = 1;
    while (1) {
        printf("? A %d\n", a);
        fflush(stdout); 
        int check;
        scanf("%d", &check);
        if (check == 1)
            break;
        a++;
    }

    int b = 1;
    while (1) {
        printf("? B %d\n", b);
        fflush(stdout);
        int check;
        scanf("%d", &check);
        if (check == 1)
            break;
        b++;
    }

    printf("! %d\n", a + b);
    fflush(stdout);
    return 0;
}