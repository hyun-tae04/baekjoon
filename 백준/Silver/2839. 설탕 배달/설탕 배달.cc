#include<stdio.h>
int main(){
    int su, cnt=0;
    scanf("%d", &su);
    if(su == 3 || su == 5){
        printf("1");
        return 0;
    }
    else if(su == 4 || su == 7){
        printf("-1");
        return 0;
    }

    while(su - 5 >= 0){
        su -= 5;
        cnt++;
    }

    if(su == 1 || su == 3){
        printf("%d", cnt + 1);
    }
    else if(su == 2 || su == 4){
        printf("%d", cnt + 2);
    }
    else{
        printf("%d", cnt);
    }

    return 0;
}