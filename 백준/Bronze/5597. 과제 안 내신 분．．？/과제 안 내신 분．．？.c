#include<stdio.h>
int main(){
    int stu[100]={0}, cnt;
    for(int i=1; i<=28; i++){
        scanf("%d", &stu[i]);
    }
    for(int i=1; i<=30; i++){
        cnt=0;
        for(int j=1; j<=30; j++){
            if(stu[j]==i){
                cnt++;
                break;
            }
            if(j==30 && cnt==0){
                printf("%d\n", i);
            }
        }
    }
    return 0;
}