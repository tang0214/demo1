#include<bits/stdc++.h>
using namespace std;
struct P
{
    int admin;
    int license;
    int idx;

    /*int operator<(const struct P src)
    {
        if(idx == src.idx)
        {
            return admin < src.admin;
        }
        return idx < src.idx;
    }*/
};

bool cmp(const struct P a ,const struct P b)
{
    if(a.admin != b.admin)
    {
        return a.admin < b.admin;
    }
    else if(a.license != b.license)
        return a.license < b.license;
    else
        return a.idx < b.idx;
}

int main()
{

    struct P p[100005];

    int n;
    scanf("%d" ,&n);

    for(int i=0 ; i<n ; i++)
    {
        scanf("%d %d",&p[i].admin,&p[i].license);
        p[i].idx=i+1;
    }
   /* for(int i=0 ; i<n ; i++)
    {
        printf("%d " ,p[i].idx);
    }
    printf("\n");*/
    sort(p ,p+n ,cmp);

    if(n >= 2)
    {
        for(int i=0 ; i<=(n-2) ; i++)
        {
            //printf("%d:" ,i);
            printf("%d ",p[i].idx);
        }
    }

    printf("%d\n" ,p[n-1].idx);

   /* for(int i=0 ; i<n ; i++)
    {
        printf("%d " ,p[i].idx);
    }*/


    return 0;
}
