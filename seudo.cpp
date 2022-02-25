#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
#include<sstream>
#include<cstring>
#include<climits>
#include<iomanip>
#include<map>
#include<list>
#include<queue>
using namespace std;
#define int long long
#define endl "\n"
#define MOD 1000000007
#define rep(i,n) for (i = 0; i < n; ++i)
#define repr(i,k,n) for (i = k; i <= n; ++i)
#define IOS  ios_base::sync_with_stdio(false)
#define prDouble(x) cout << fixed << setprecision(10) << x;
int i, j,cnt; void pA(int *a, int s, int e) {cout << endl; repr(i, s, e) cout << a[i] << " "; return;}
int convertString(string data) {return atoi(data.c_str());}

string convertString(int data) {stringstream ss; ss << data; return ss.str();}
void Dungeon_Master() {freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);} void solve();
#define NN 100000001
int32_t  main() {IOS; cin.tie(NULL); solve(); return 0;}
//                      TEMPLATE
//                        ENDS
//                        HERE

void solve ()
{
	Dungeon_Master(); cout << "@Dras227\n\n\n";

	// int m = 0;
	// int a[4] = {3,2,1,4};
	// for(int j=2;j<3;j++)
	// {
	// 	m = a[j] ;
	// }

	// cout << m;
	// ans - 1 

	// int p=9,q=5,r=8;

	// if(6<p)
	// {
	// 	p = 3+q;

	// 	if((r+q) < (q-r))
	// 	{
	// 		r = r+p;
	// 	}

	// 	p = (10+5)+r;
	// }

	// cout << p+q+r;

	// int j = 1,m=1;

	// int a[3] = {0,1,0};

	// if(a[0] > 0)
	// {
	// 	a[j] = 5;
	// 	if(a[2] < 2)	
	// 	{
	// 		a[0] = 5;
	// 	}
	// }

	// cout << m +a[j] + a[0];

	// int pp = 9,qq= 8,rr = 9;

	// for(rr=5;rr<=7;rr++)
	// {
	// 	if((qq+rr) < (pp+qq))
	// 		continue;

	// 	pp = qq+qq;
	// 	pp = 1&1 + pp;
	// }

	// cout << pp+qq;

	// int p =1,q=5,r=5;

	// r = p+q;

	// if(p>r || (p+9) > ( q-p))
	// {
	// 	q= 19+p;
	// 	p = 16+r;
	// }

	// else
	// {
	// 	r = r+r+p;
	// 	q = 23 + p;
	// }

	// cout << p+q+r; 

	 // int c=8,b=4,a=1;

	 // c = 2&c;
	 // c = b+c;
	 // c = b+c;
	 // if(c > a && ((4&c)  < pow(a,4)))
	 // {
	 // 	a = c+a;
	 // }

	 // b = 12&a;
	 // cout << a +b+c;

	// int j=1,m=1;

	// int a[3] = {0,1,0};

	// cout<< m + a[j]+a[0];

	// int  m =1;
	// int j;
	// int a[4] = { 3,1,3,4};

	// if(a[2] < a[1] && a[1] < 4)
	// {
	// 	m = m+1;
	// }

	// if(a[3] + a[1] - a[1] > 0)
	// {
	// 	m = m+1;
	// }

	// cout << m;
	// ans  -2

	// int a=5 ,b= 8,c=7;


	// for(c=4;c<=8;c++)
	// {
	// 	a = (a+5) + c;
	// 	if((b&a&c) < (a+c-b))
	// 	{
	// 		continue;
	// 	}
	// 	else c = 2+b;
	// }

	// cout << a+b;
	// ans - 68

	// int a= 8,b = 4,c=9;

	// for(c = 5;c<=7;c++)
	// {
	// 	a = 3+b;

	// 	if(5 < a)
	// 	{
	// 		a = c+3+b;
	// 	}
	// }

	// cout << a+b;
	// ans - 18

	// int j,m=0;

	// int a[4] = {1,3,4,2};

	// for(j=1;j<=3;j++)
	// {
	// 	if(a[j] > 4)
	// 		m = m+1;

	// 	m = m-1;
	// }

	// cout << m;
	// ans - -3

	// int p = 9,q= 4,r =4;

	// p  = r+r+q;

	// q = (r&10) + q;

	// p = (4^12)+q;

	// p = 9&p;
	// q = q+p;

	// cout << p + q+r;
	// ans - 24

	// int pp =1,qq = 4,rr= 4;

	// rr = qq+11+qq;

	// if(qq< rr)
	// {
	// 	qq = rr+ pp;
	// 	pp = pp+6+qq;
	// 	rr= (11+5)^rr;

	// }

	// cout << pp + qq+rr;
	// ans - 50

	// int a = 5,b= 3,c =5;

	// for(c = 5;c<9;c++)
	// {
	// 	if((b+c) < (10-b))
	// 	{
	// 		continue;
	// 	}

	// 	b = (c^a) +c;
	// 	b = (b+a) &b;
	// }

	// cout << a+b;

	// int a=0,b =8, c= 5;

	// for(c = 4;c<6;c++)
	// {
	// 	b = (b+c) ^ 6;
	// 	b = (b+c) ^ a;
	// }

	// a = 12 ^ a;

	// for( c = 5;c<7;c++)
	// {
	// 	a = b+c;
	// }

	// cout << a+b;
	// ans = 58

// 	int p = 9, q=6, r = 9;

// 	if( (r&6) < q|| r> p)
// 	{
// 		q = (p+p) &p;
// 	}
// else
// {
// 	r = (p+8) &r;
// }


// cout << p+q+r;

// int p = 6,q = 2, r=  5;

// r  =  (10+5) ^q;

// if((q+r) > (r-q) || r > q)
// {
// 	 p = p +p;
// }

// cout << p + q+ r;
	
	// int a=0,b=2,c=8;c= 11&a;
	// c = a&a;

	// if((4^8^c) < (5^a))
	// {
	// 	c = (b^2)^c;

	// 	c=  10+c;

	// 	c= b^c;

	// }
	// cout << (a+b+c);

	// int p = 5,q= 6, r =5;

	// for( r = 5;r<=6;r++)
	// {
	// 	if((q+p) > (p-q))
	// 	{
	// 		break;
	// 	}

	// 	q = (r^p) &r;

	// 	 p = 1+q;
	// }

	// cout << p +q;

	// int p=1,q = 5, r = 8;

	// if((r&9&q) < (7 &r))
	// {
	// 	p = 12 +r;
	// }

	// cout << p +q + r;

	// int p= 4,q= 2,r = 4;

	// if( 1)
	// {
	// 	p = r&p;
	// 	r = 16+ r;

	// }

	// cout

	// int a= 6, b = 2,c = 4;

	// a = a+12+c;

	// a = b + a;

	// for(int c = 5;c<=6;c++)
	// {
	// 	a = (c+10) + a;

	// 	if(6 < b || (b+8) > (a -b))
	// 	{
	// 		a = c+a;
	// 		continue;
	// 	}
	// }

	//cout << a +b;
	// int pp = 6, qq = 2, rr = 7;

	// for( rr = 5;rr< 7; rr++)
	// {
	// 	qq = (1 &6) +rr;

	// 	if((rr-pp) > (pp -rr))
	// 	{
	// 		 qq = pp + pp;
	// 	}
	// 	else break;

	// 	pp = (qq + 7) ^pp;
	// }

	// cout << pp + qq;

	//.................
}
