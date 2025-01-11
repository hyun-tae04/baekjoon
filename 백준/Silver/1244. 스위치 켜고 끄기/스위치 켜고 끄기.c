#include<stdio.h>
int main(){
  int a, swich[100], P, s, number;
  scanf("%d", &a);

  for(int i=0; i<a; i++){
    scanf("%d", &swich[i]);
  }

  scanf("%d", &P);

  while(P > 0){
    scanf("%d %d", &s, &number);
    if(s == 1){
      for(int j=1; j<=a; j++){
        if(j % number == 0)
          swich[j-1] = !swich[j-1];
      }
    }
    else{
      for(int j=0; j<number-1; j++){
        if(number - j - 2 < 0 || number + j>=a)
          break;
        if(swich[number-j-2] == swich[number+j]){
          swich[number-j-2] = !swich[number-j-2];
          swich[number+j] = !swich[number+j];
        }
        else{
          break;
        }
      }
      swich[number-1] = !swich[number-1];
    }
    P--;
  }

  for(int i=1; i<=a; i++){
    printf("%d ", swich[i-1]);
    if(i % 20 == 0)
      printf("\n");
  }
  return 0;
} 