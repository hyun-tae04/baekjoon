#include<stdio.h>
#include<string.h>
int main(){
    int t;
    char alpha[10][1000];
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        scanf("%s", &alpha[i]);
    }
    for(int i=0; i<t; i++){
        printf("%c%c\n", alpha[i][0], alpha[i][strlen(alpha[i])-1]);
    }
    return 0;
}