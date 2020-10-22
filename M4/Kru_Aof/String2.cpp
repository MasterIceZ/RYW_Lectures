//2
#include<stdio.h>
#include<string.h>
char s[1010];
int main (){
    scanf(" %s",s);
    int n = strlen(s);
    for(int i=0;i<n;++i){
        if(s[i]!=s[i+1]&&s[i-1]!=s[i]){
            printf("%c%c",s[i],s[i]);
            continue;
        }
        printf("%c",s[i]);
    }
    printf("\n");
    return 0;
}
