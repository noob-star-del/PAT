/*
3
CS301111 15:30:28 17:00:10
SC3021234 08:00:00 11:25:25
CS301133 21:45:00 21:58:40
Sample Output:
SC3021234 CS301133
*/
#include<bits/stdc++.h>
struct record{
    char id[20];
    int hh,mm,ss;
}temp,early,later;
bool compare(record temp,record ans)
{
    if(temp.hh!=ans.hh)
    return temp.hh>ans.hh;
    if(temp.mm!=ans.mm)
    return temp.mm>ans.mm;
    if(temp.hh!=ans.hh)
    return temp.ss>ans.ss;
    
}
int main()
{
    int m;
    scanf("%d",&m);
    early.hh=24;
    early.mm=60;
    early.ss=60;
    later.hh=0;
    later.ss=0;
    later.mm=0;
    for(int i=0;i<m;i++)
    {
        scanf("%s %d:%d:%d",temp.id,&temp.hh,&temp.mm,&temp.ss);
        if(compare(temp,early)==false)
        early=temp;
        scanf("%d:%d:%d",&temp.hh,&temp.mm,&temp.ss);
        if(compare(temp,later)==true)
        later=temp;
    }
    printf("%s %s",early.id,later.id);
    return 0;
}