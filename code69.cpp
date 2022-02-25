#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
#define int long long
void dras227()
{
#ifndef dras2272000
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int32_t  main()
{
    dras227(); 
    
    int N;
    int a[100000],choice,item,count=-1;
    cin >> N;
    int i = 0,b[10000];

    while(N--)
    {
        cin >> choice;
        int max= -1;
        switch(choice)
        {
            case 1:cin >> item;
                    count+=1;
                    a[count] = item;
                    break;
            case 2:count-=1;
                    break;
            
            case 3:for(i=0;i<=count;i+=1)
                    {
                        if(a[count]>max)
                        {
                            max = a[count];
                        }
                    }
                    cout<<max << " ";
                    break;
                    
        }
        
    }
    
    return 0;
}