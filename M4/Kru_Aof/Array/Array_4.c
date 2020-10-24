#include<stdio.h>
int dp[5][5];
int main (){
  const int n = 3;
  for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
      int x;
      scanf("%d",&x);
      dp[i][j] += x;
     }
  }
  for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
      int x;
      scanf("%d",&x);
      dp[i][j] += x;
     }
  }
  for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
      printf("%d ",dp[i][j]);
     }
     printf("\n");
  }
  return 0;
}
