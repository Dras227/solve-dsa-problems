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
	
	int t;
    cin >> t;
    
    while(t--)
    {
        string s;
        cin >> s;
        int flag =99;
        int i=-1,top=-1;
        char stack[100000];
        while(s[++i]!='\0')
        {
        	char item = s[i];
        	

        	if(item == '{' || item== '[' || item=='(')
        	{
        		stack[++top] = item;
        	}
        	if(item == ']' || item == '}'|| item == ')')
        	{

        		if(stack[top]=='[' && item==']'|| stack[top]=='{' && item=='}' || stack[top]=='(' &&item==')')
        		{
        			cout<<"matched "<<stack[top]<<item<<"\n";
        		}
        		else{
        			flag = 0;
        			cout<<" Not matched "<<stack[top]<<item<<"\n";
        			break;
        		}

        		top-=1;
        	}
        }

        if(flag) cout<<"YES";
        	else cout << "NO";
    }
    
    return 0;
}