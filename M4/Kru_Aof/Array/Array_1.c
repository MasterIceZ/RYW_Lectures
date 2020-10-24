#include<stdio.h>
int a[10];
int main (){
  int n = 5;
  for(int i=0;i<n;++i){
    int x;
    scanf("%d",&x);
    a[i]+=x;
  }
  for(int i=0;i<n;++i){
    int x;
    scanf("%d",&x);
    a[i]+=x;
  }
  for(int i=0;i<n;++i){
    printf("%d ",a[i]);
  }
  return 0;
}
