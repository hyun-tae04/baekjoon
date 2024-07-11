#include<stdio.h>
int main(){
    int n, m;
    int b1, b2, change;
    int k[100] = {0,};
    scanf("%d %d", &n, &m);
    for(int i=0; i<n; i++){
        k[i] = i+1;
    }
    for(int j=0; j<m; j++){
        scanf("%d %d", &b1, &b2);
        change = k[b1-1];
        k[b1-1] = k[b2-1];
        k[b2-1] = change;
    }
    for(int p=0; p<n; p++){
        printf("%d ", k[p]);
    }
    return 0;
}