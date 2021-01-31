#include<bits/stdc++.h>
int main()
{
    int N,b;
    scanf("%d%d",&N,&b);
    int num[100];
    int length=0;
    do{
        num[length++]=N%b;
        N=N/b;
    }while(N!=0);
    int high=length-1;
    int low=0;
    while(low<high)
    {
        if(num[low]!=num[high])
        {
            printf("No\n");
            break;
        }
        low++;
        high--;
    }
    if(low>=high)
    printf("Yes\n");
    for(int i=length-1;i>=0;i--)
    {
        if(i!=length-1)
        printf(" ");
        printf("%d",num[i]);
    }
   system("pause");
   return 0;
}