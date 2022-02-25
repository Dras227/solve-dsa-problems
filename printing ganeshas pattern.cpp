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
    int n;
    cin >> n;
    
    //first component
        //first star compulsory
        cout<<"*";

        //printing (n-3)/2 spaces
        for(int i=1;i<=((n-3)/2);i+=1)
            cout<<" ";

        //printing remaining (n+1)/2 stars
        for(int i=1;i<=(n+1)/2;i+=1)
            cout<<"*";

    //going to next line 
        cout<<endl;

    //second comoponent
        for(int i=1;i<=(n-3)/2;i+=1)
        {
            //printing first star
                cout<<"*";

            //printing (n-3)/2 spaces
            for(int i=1;i<=(n-3)/2;i+=1)
                cout<<" ";
            
            //printing 2nd star and ending line
                cout<<"*"<<endl;
        }

    //Third component printing n stars 
        for (int i = 1; i <=n; ++i)
           {
               cout<<"*";
           }   

    cout<<endl;

    //Foourth component
        for(int i=1;i<=(n-3)/2;i+=1)
        {
            //printing (n-3)/2+1 spaces
            for(int i=1;i<=((n-3)/2)+1;i+=1)
                    cout<<" ";
            //printing first star
                cout<<"*";

            //printing (n-3)/2 spaces
            for(int i=1;i<=(n-3)/2;i+=1)
                cout<<" ";

            //printing 2nd star and ending line
                cout<<"*"<<endl;
        }

    //Fourth component

        for (int i = 1; i <=(n+1)/2; ++i)
        {
            //printing (n-3)/2+1 stars 
            cout<<"*";
        }

        //printing (n-3)/2 spaces
            for(int i=1;i<=(n-3)/2;i+=1)
                cout<<" ";

        //printing last star
            cout<<"*";







    return 0;
}
