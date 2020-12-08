#include<stdio.h>
int main (){
    int n,m,q;
    scanf("%d %d %d",&n,&m,&q);
    while(q--){
        int now = n;
        int mark = 0;
        for(int i=0,x;i<m;++i){
            scanf("%d",&x);
            if(mark){
                continue;
            }
            now += x?1:-1;
            if(now < 0 || now > 2*n){
                mark = 1;
            }
        }
        mark?printf("0"):printf("1");
        printf("\n");
    }
}
