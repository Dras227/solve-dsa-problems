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
	//Dungeon_Master();cout << "Hii,I am @iron_manu22 \n\n\n";

	int t;
	cin >> t;

	while(t--)
	{
		int N,D;

		cin >> N >> D;

		int riskAged=0,correctAged=0;
		int item;int i;
		rep(i,N)
		{
			cin >> item;

			if(item <=9 or item >=80)
				riskAged++;
			else 
				correctAged++;
		}
		//cout << riskAged << " " << correctAged << endl;//continue;
		// corner cases
		if(D == 1) 
		{
			cout << N << endl ;
			continue;
		}
		//cout << "hii";
		int riskDays = riskAged / D;

		if(riskAged%D!=0) riskDays+=1;

		int correctDays = correctAged/D;

		if(correctAged%D!=0) correctDays+=1;

		cout << (riskDays+correctDays) << endl;

	}

}






















































































/*intput.txt
output.txt*/