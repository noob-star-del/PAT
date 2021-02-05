#include<bits/stdc++.h>
using namespace std;
struct student{
    char id[7];
    int grade_c,grade_m,grade_e,grade_a;//C,M,E,A
    int rank[4];//A,C,M,E
}stu[2001];
bool cmp1(student a,student b)
{
    return a.grade_a>b.grade_a;
}
bool cmp2(student a,student b)
{
    return a.grade_c>b.grade_c;
}
bool cmp3(student a,student b)
{
    return a.grade_m>b.grade_m;
}
bool cmp4(student a,student b)
{
    return a.grade_e>b.grade_e;
}
int main()
{
    int n,m;
    char r[4]={'A','C','M','E'};
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%s%d%d%d",stu[i].id,&stu[i].grade_c,&stu[i].grade_m,&stu[i].grade_e);
        stu[i].grade_a=(stu[i].grade_c+stu[i].grade_m+stu[i].grade_e)/3;
    }
    sort(stu,stu+n+1,cmp1);
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            stu[i].rank[0]=1;
        }
        if(stu[i].grade_a==stu[i-1].grade_a)
        stu[i].rank[0]=stu[i-1].rank[0];
        else
        {
            stu[i].rank[0]=i+1;
        }
    }
    sort(stu,stu+n+1,cmp2);
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            stu[i].rank[1]=1;
        }
        if(stu[i].grade_c==stu[i-1].grade_c)
        stu[i].rank[1]=stu[i-1].rank[1];
        else
        {
            stu[i].rank[1]=i+1;
        }
    }
    sort(stu,stu+n+1,cmp3);
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            stu[i].rank[2]=1;
        }
        if(stu[i].grade_m==stu[i-1].grade_m)
        stu[i].rank[2]=stu[i-1].rank[2];
        else
        {
            stu[i].rank[2]=i+1;
        }
    }
    sort(stu,stu+n+1,cmp4);
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            stu[i].rank[3]=1;
        }
        if(stu[i].grade_e==stu[i-1].grade_e)
        stu[i].rank[3]=stu[i-1].rank[3];
        else
        {
            stu[i].rank[3]=i+1;
        }
    }
    char cur[7];
    int s,p;
    bool flag;
    for(int i=0;i<m;i++)
    {
        flag=false;
        s=3000;
        scanf("%s",cur);
        for(int j=0;j<n;j++)
        {
            if(strcmp(stu[j].id,cur)==0)
            {
                for(int k=0;k<4;k++)
                {
                    if(stu[j].rank[k]<s)
                    {
                        s=stu[j].rank[k];
                        p=k;
                    }
                }
                printf("%d %c",s,r[p]);
                flag=true;
                break;
            }
         
        }
        if(flag==false)
        printf("N/A");
        printf("\n");
    }
    return 0;
    system("pause");
}