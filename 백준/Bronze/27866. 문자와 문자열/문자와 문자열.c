#include<stdio.h>
int main(){
    char a[1000]={0,};
    int i;
    scanf("%s", &a);
    scanf("%d", &i);
    printf("%c", a[i-1]);
    return 0;
}