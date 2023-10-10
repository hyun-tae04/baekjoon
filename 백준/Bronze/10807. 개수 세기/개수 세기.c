#include<stdio.h>
int main(){
    int n, v, cnt=0;
    int num[1000];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &num[i]);
    }
    scanf("%d", &v);
    for(int j=0; j<n; j++){
        if(num[j]==v){
            cnt++;
        }
    }
    printf("%d", cnt);
    return 0;
}