#include<stdio.h>
int a[10];
int main (){
  int sum = 0;
  for(int i=0;i<5;++i){
    scanf("%d",&a[i]);
    sum += a[i];
  }
  double avr = (int)sum/5;
  int ans = 0;
  for(int i=0;i<5;++i){
    if((int)avr < a[i]){
      ans += a[i];
    }
  }
  printf("%d",ans);
  return 0;
}
