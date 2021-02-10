#include<bits/stdc++.h>
using namespace std;

int na[110],mb[110];

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    //input
    for(int i = 0; i < n; i++)
    {
        scanf("%d",&na[i]);
    }
    for(int i = 0; i < m; i++)
    {
        scanf("%d",&mb[i]);
    }
    int sum1 = 0,sum2 = 0,sum3 = 0;
    int sw;
    for(int i = 0; i<n-1; i++)
    {
        if(na[i]>na[i+1])
        {
            sw = na[i+1];
            na[i+1] = na[i];
            na[i] = sw;
            i*=0;
        }
        else
        {
            continue;
        }
    }
    for(int i = 0; i<m-1; i++)
    {
        if(mb[i]>mb[i+1])
        {
            sw = mb[i+1];
            mb[i+1] = mb[i];
            mb[i] = sw;
            i*=0;
        }
        else
        {
            continue;
        }
    }
    sum1 = na[0] + na[1];
    sum2 = mb[0] + mb[1];
    sum3 = na[0] + mb[0] + 100;

    if(sum1 < sum2 && sum1 < sum3){
        printf("%d",sum1);
    }
    if(sum2 < sum1 && sum2 < sum3){
        printf("%d",sum2);
    }
    if(sum3 < sum1 && sum3 < sum2){
        printf("%d",sum3);
    }
    return 0;
}