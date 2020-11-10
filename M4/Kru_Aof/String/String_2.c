#include<stdio.h>
#include<string.h>
char s[1010];
int main (){
  scanf(" %s",s);
  for(int i=0;i<strlen(s);++i){
    if(s[i]!=s[i+1] && s[i]!=s[i-1]){
      printf("%c%c",s[i],s[i]);
    }
    else{
      printf("%c",s[i]);
    }
  }
  printf("\n");
  return 0;
}
