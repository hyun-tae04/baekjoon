#include<stdio.h>
int main(){
    int n, m, cnt=0, askinum = 0, check = 0;
    int pic[10000];
    char aski[10000][10000];
    scanf("%d %d", &n, &m);
    for(int i=0; i<n; i++){
        cnt = 1;
        askinum = 0;
        for(int j=0; j<m*3; j++){
            scanf("%d", &pic[j]);
            if(cnt % 3 == 0){
                check = (pic[j-2] * 2126) + (pic[j-1] * 7152) + (pic[j] * 722);
                if(check >= 0 && check < 510000){
                    aski[i][askinum] = '#';
                }
                else if(check >= 510000 && check < 1020000){
                    aski[i][askinum] = 'o';
                }
                else if(check >= 1020000 && check < 1530000){
                    aski[i][askinum] = '+';
                }
                else if(check >= 1530000 && check < 2040000){
                    aski[i][askinum] = '-';
                }
                else{
                    aski[i][askinum] = '.';
                }
                askinum++;
            }
            cnt++;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            printf("%c", aski[i][j]);
        }
        printf("\n");
    }
    return 0;
}