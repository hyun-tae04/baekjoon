#include<stdio.h>
int main(){
    int r, c;
    char boong[15];
    scanf("%d%d", &r, &c);
    for(int i = 0; i < r; i++){
        scanf("%s", &boong);
        for(int j = c-1; j >= 0; j--){
            printf("%c", boong[j]);
        }
        printf("\n");
    }
    return 0;
}