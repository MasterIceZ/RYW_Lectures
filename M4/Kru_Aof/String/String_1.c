#include<stdio.h>
#include<string.h>
char s[1010];
int main (){
  scanf(" %s",s);
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;++i){
    printf("%c",s[i%strlen(s)]);
  }
  printf("\n");
  return 0;
}
