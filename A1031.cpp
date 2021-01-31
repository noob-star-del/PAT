#include<bits/stdc++.h>
int main()
{
    char str[100];
    gets(str);
    int n1,n2,n3;
    int N=strlen(str);
    n1=(N+2)/3;
    n3=n1;
    n2=N+2-n1-n3;
    for(int i=0;i<n1;i++)
    {
        if(i!=n1-1)
        {
            printf("%c",str[i]);
            for(int j=0;j<n2-2;j++)
            {
                printf(" ");
            }
            printf("%c\n",str[N-1-i]);
        }
        else
        {
            for(int j=i;j<n2+i;j++)
            {
                printf("%c",str[j]);
            }
        }
        
    }
    system("pause");
    return 0;
}