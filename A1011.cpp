#include<bits/stdc++.h>
int main()
{
    double num=1.0;
    double max,a;
    int max_result;
    char result[3]={'W','T','L'};
    for(int i=0;i<3;i++)
    {
        max=0.0;
        for(int j=0;j<3;j++)
        {
            
            scanf("%lf",&a);
            if (a>max)
            {
                max=a;
                max_result=j;
            
            }
        }
        printf("%c ",result[max_result]);
        num*=max;
    }
    printf("%.2f",(num*0.65-1)*2);
    return 0;
}