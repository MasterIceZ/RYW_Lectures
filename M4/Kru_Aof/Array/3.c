#include<stdio.h>
#include<string.h>
char s[1010];
int main (){
  scanf(" %s",s);
  for(int i=0,j=strlen(s)-1;++i,--j){
    if(s[i]!=s[j]){
      printf("No\n");
      return 0;
    }
  }
  printf("Yes\n");
  return 0;
}
