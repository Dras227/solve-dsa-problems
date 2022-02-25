#include <stdio.h>
#include<stdbool.h>
void Dungeon_Master() {freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);} void solve();
bool isNotTrackedAlready(int, int[]);

#include <stdio.h>
#include<stdbool.h>
bool isNotTrackedAlready(int, int[]);

int main()
{
    Dungeon_Master(); 
    int arr[1000], a[1000],b[1000],n,a1,b1,i,ast[1000],ca=0,cb=0;
    bool flag=true;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        a[i]=-1;
        ast[i]=10000;
    }
    scanf("%d%d",&a1,&b1);
    while(a1!=-1 && isNotTrackedAlready(a1,a))
    {
        a[a1]=0;
        a1=arr[a1];
        ast[a1]=ca;
        ca++;
    }
    while(b1!=-1 || isNotTrackedAlready(b1,b))
    {
        if(!isNotTrackedAlready(b1,a))
        {
            ast[b1]+=cb;
            cb++;
            flag=false;
        }
        b[b1]=0;
        b1=arr[b1];
    }
    int min=10000,mini;
    for(i=0;i<n;i++)
    {
        if(ast[i]<min)
        {
            min=ast[i];
            mini=i;
        }
    }
    if(!flag)
    printf("%d",mini);
    else
    printf("-1");
    return 0;
}    
    
bool isNotTrackedAlready(int p, int t[1000])
{
    if(t[p]==0)
    return false;
    else
    return true;
}