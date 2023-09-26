#include<stdio.h>
int main(){
    int x, so=1, mo=1, cha = 1;
    scanf("%d", &x);
    while(x>1){
        if(cha == 1){
            if(so==1){
                mo++;
                cha = 0;
            }
            else{
                mo++;
                so--;
            }
        }
        else{
            if(mo==1){
                so++;
                cha = 1;
            }
            else{
                so++;
                mo--;
            }
        }
        x--;
    }
    printf("%d/%d", so, mo);
    return 0;
}