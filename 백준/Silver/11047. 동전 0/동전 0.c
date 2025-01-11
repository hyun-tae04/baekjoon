#include<stdio.h>
int main(){
    int n, k, a[1000000], cnt = 0;
    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = n - 1; i >= 0 && k > 0; i--) {
        if (a[i] <= k) {
            cnt += k / a[i];
            k %= a[i];
        }
    }
    printf("%d\n", cnt);
    return 0;
}
