#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<fstream>
using namespace std;

void solve();
string extractTokenAtKey(string str,int key)
{
    char *s = strtok((char *)str.c_str()," ");

    while(key>1)
    {
        s = strtok(NULL," ");
        key--;
    }

    return (string)s;
}
int toint(string s)
{
    int ans = 0;
    int p = 1 ;

    for(int i= s.length()-1;i >=0 ; i--)
    {
        ans+=((s[i]-'0')*p);
        p*=10;
    }

    return ans;
}
bool numericCompare(pair <string,string> s1,pair<string,string> s2)
{
   string  key1 = s1.second;
  string key2 = s2.second;

    return toint(key1) < toint(key2);
}
bool lexicoCompare(pair <string,string> s1,pair<string,string> s2)
{
    string key1 = s1.second;
  string key2 = s2.second;

    return key1 < key2;
}
void dras227()
{
#ifndef dras2272000
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
void count_101()
{
    cout << "\n\n\n\n\n\n\nIts dras227 and its try no. ";
    ifstream in("count.txt");
    int n;
    in >> n;
    cout << n; // get int from the file
    ofstream myfile;
    myfile.open ("count.txt");
    n = n+1;
    myfile << n;
}

int32_t  main()
{
   dras227();
    solve();
    count_101 ();
    return 0;

}
void solve()
{
    int n;
    cin >> n;

    cin.get();

    string a[100];
    for(int i=0;i<n;i+=1)
    {
        getline(cin,a[i]);
    }

    int key;
    string ordering,reversal;

    cin >> key >> reversal >> ordering;

    pair< string,string > strPair[100];

    for (int i = 0; i < n; ++i)
    {
        strPair[i].first = a[i];
        strPair[i].second = extractTokenAtKey(a[i],key);
    }

    if(ordering == "numeric")
    {
        sort(strPair,strPair+n,numericCompare);
    }
    else{
        sort(strPair,strPair+n,lexicoCompare);
    }

    if(reversal=="true")
    {
        for (int i = 0; i<n/2; ++i)
        {
            swap(strPair[i],strPair[n-i-1]);
        }
    }

    for (int i = 0; i < n; ++i)
    {
        cout << strPair[i].first << endl;
    }
}

/*intput.txt
output.txt*/