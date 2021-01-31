#include<bits/stdc++.h>
int main()
{
    char a[70],b[70],c[70],d[70];
    char ch1,ch2;
    int ch3;
    bool c1=false;
    scanf("%s%s%s%s",a,b,c,d);
    for(int i=0;i<70;i++)
    {
        if(a[i]>='A'&&a[i]<='G'&&a[i]==b[i]&&c1==false)
        {                     
            ch1=a[i];
            c1=true;
            continue;
        }
         if(((a[i]>='A'&&a[i]<='N')||(a[i]>='0'&&a[i]<='9'))&&a[i]==b[i]&&c1==true)
        {                     
            ch2=a[i];
            break;
        }
    }
    for(int i=0;i<70;i++)
    {
        if(c[i]==d[i]&&((c[i]>='A'&&c[i]<='Z')||(c[i]>='a'&&c[i]<='z')))
        {
            ch3=i;
            break;
        }
    }
    char day[7][4]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
    printf("%s ",day[ch1-'A']);
    printf("%02d:%02d",(ch2>='0'&&ch2<='9')?(ch2-'0'):(ch2-'A'+10),ch3);
    return 0;
}