#include<bits/stdc++.h>
int main()
{
    int N=54;
    char mp[5]={'S','H','C','D','J'};
    int start[N+1],end[N+1],next[N+1];
    int K;
    scanf("%d",&K);
    for(int i=1;i<=54;i++)
    {
        start[i]=i;
    }
    for(int i=1;i<=54;i++)
    {
        scanf("%d",&next[i]);
    }
    for(int j=0;j<K;j++)
    {
        for(int i=1;i<=54;i++)
        {
            end[next[i]]=start[i];
        }
        for(int i=1;i<=N;i++)
        {
            start[i]=end[i];
        }
    }
    for(int i=1;i<=54;i++)
    {
        if(i!=1)
        printf(" ");
        printf("%c%d",mp[(start[i]-1)/13],(start[i]-1)%13+1);
    }
    system("pause");
    return 0;
}