#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
#define rep(i,n) for (i = 0; i < n; ++i) 
#define repr(i,k,n) for (i = k; i <= n; ++i) 
#define IOS  ios_base::sync_with_stdio(false)
int convertString(string data){return atoi(data.c_str());}
string convertString(int data){stringstream ss;ss<<data;return ss.str();}
void Dungeon_Master(){ freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);}void solve();
int32_t  main(){IOS;cin.tie(NULL);solve();return 0;}
//                      TEMPLATE 
//                        ENDSa
//                        HERE  
void solve ()
{
	Dungeon_Master();cout << "Hii,I am @iron_manu22 \n\n\n";	

	int d1,v1,d2,v2,p;

	cin >> d1 >> v1 >> d2 >> v2 >> p;

	if(p <=0)
	{
		cout << "0";

		return ;
	}
	pair<int,int> D1 = make_pair(d1,v1); 
	pair<int,int> D2 = make_pair(d2,v2); 
	

	pair<int,int>start = D1.first >= D2.first ? D2:D1;
	pair<int,int>end = D2.first > D1.first ? D2:D1;

	int days_wasted_at_first = start.first - 1;
	if(start.first == end.first)
	{
		int vaccines = start.second + end.second;


		int total_days = days_wasted_at_first+ p/vaccines;

		if(p%vaccines > 0 ) total_days +=1;

		cout << total_days ;

		return;
	}
	//cout << start.first << end.first ;


	

	int gap_between_two_companies = end.first - start.first;


	

	int vaccines_using_A_only = 0;

	

	int total_days = days_wasted_at_first;

	for(int i=1;i<=gap_between_two_companies;i++)
	{
		vaccines_using_A_only+=(start.second);
		if(vaccines_using_A_only >= p)
		{
			total_days +=i;

			cout << total_days << endl;

			return;
		}
	}
	total_days = days_wasted_at_first + gap_between_two_companies;
	vaccines_using_A_only = start.second*gap_between_two_companies;
	int total_vaccines = vaccines_using_A_only;
	int remaining_vaccines = p - vaccines_using_A_only;
	int per_day_vaccines = start.second + end.second;

	total_days += remaining_vaccines/per_day_vaccines; 

	if(remaining_vaccines%per_day_vaccines > 0) total_days +=1;

	cout << total_days;
	//cout << start ;
}






















































































/*intput.txt
output.txt*/