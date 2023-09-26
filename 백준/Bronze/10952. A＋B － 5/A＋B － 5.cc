#include <stdio.h>
int main()
{
    int n, a, b, i=0;
    int k[1000];
    while(1){
        scanf("%d %d", &a, &b);
        if(a==0 && b==0){
            break;
        }
        k[i] = a + b;
        i++;
    }
    for (int j = 0; j < i; j++)
    {
        printf("%d\n", k[j]);
    }
    return 0;
}