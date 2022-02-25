#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
#define int long long
void solve();
int convertoint(string s)
{
    int ans = 0;

    int p =1;
    cout<<"hello converted to int";
    for (int i = s.length()-1; i >=0; i--)
    {
        ans+=((s[i]-'0')*p);

        p=p*10;
    }

    return ans;
}
bool numeric_compare(pair<string,string> s1,pair<string,string> s2)
{
    string key1,key2;

    key1 = s1.second;
    key2 = s2.second;

    return convertoint(key1)<convertoint(key2);
}

bool lexico(pair<string,string> s1,pair<string,string> s2)
{
    string key1,key2;

    key1 = s1.second;
    key2 = s2.second;

    return key1<key2;
}
string extract(string str,int key)
{
    char *s = strtok((char *)str.c_str()," ");

    while(key>1)
    {
        s = strtok(NULL," ");
        key--;
    }

    return (string)s;
}
void dras227()
{
#ifndef dras2272000
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif
}
int32_t  main()
{
    dras227();
    solve();
    cout<<"hello";
    return 0;
}



void solve()
{

    int n; 

    cin>>n;

    string a[100];

    for (int i = 0; i < n; ++i)
    {
   
    	getline(cin,a[i]);
    }

    int key;

    string reversal,ordering;

    cin >> key >> reversal >> ordering;

    pair<string,string> strPair[100];

    for(int i=0;i<n;i++)
    {
        strPair[i].first = a[i];
        strPair[i].second = extract(a[i],key);
    }


    if(ordering == "numeric")
        sort(strPair,strPair+n,numeric_compare);
    else
        sort(strPair,strPair+n,lexico);

    if(reversal=="true"){
        for (int i = 0; i < n/2; ++i)
        {
            swap(strPair[i],strPair[n-i-1]);
        }
    }

    for(int i=0;i<n;i++){
        cout<< strPair[i].first<<" "<<endl;
    }

}