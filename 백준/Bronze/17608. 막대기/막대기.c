#include<stdio.h>
int main(void){
  int n, h[100000]={0,}, cnt=0, max=-999;
  scanf("%d", &n);
  for(int i=0; i<n; i++){
    scanf("%d", &h[i]);
  }
  for(int j=n-1; j>=0; j--){
    if(h[j] > max){
      max = h[j];
      cnt++;
    }
  }
  printf("%d", cnt);
  return 0;
}