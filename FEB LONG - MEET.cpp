#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
#include<algorithm>
#include<vector>
#include<sstream>
#include<cstring>
#include<climits>
using namespace std;
#define int long long
#define endl "\n"
#define MOD 1000000007
#define rep(i,n) for (i = 0; i < n; ++i)
#define repr(i,k,n) for (i = k; i <= n; ++i)
#define IOS  ios_base::sync_with_stdio(false)
int i, j; void pA(int *a, int s, int e) {cout << endl; repr(i, s, e) cout << a[i] << " "; return;}
int convertString(string data) {return atoi(data.c_str());}

string convertString(int data) {stringstream ss; ss << data; return ss.str();}
void Dungeon_Master() { freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);} void solve();
#define NN 100000001
int32_t  main() {IOS; cin.tie(NULL); solve(); return 0;}
//                      TEMPLATE
//                        ENDS
//                        HERE
struct timee
{
	int start_hour;
	int start_min;
	float start_time;
	string start_ampm;

	int end_hour;
	int end_min;
	float end_time;
	string end_ampm;
};
timee get_time(char s[100])
{
	timee t;
	string s_h="",s_min="",s_ampm="",e_h="",e_min="",e_ampm="";

	s_h += s[0];
	s_h += s[1];
	t.start_hour = convertString(s_h);

	s_min += s[3];
	s_min += s[4];
	t.start_min = convertString(s_min);

	if(s[5] == 'P')
	{
	 t.start_ampm = "PM";
	 if(t.start_hour!=12q)
	  t.start_hour = (12 + t.start_hour)%24;
	 }
	else
	{
		t.start_ampm = "AM";
		if(t.start_hour == 12) t.start_hour = 0;
	}
	t.start_time = t.start_hour + ((t.start_min)/100.0);

	e_h += s[7];
	e_h += s[8];
	t.end_hour = convertString(e_h);

	e_min += s[10];
	e_min += s[11];
	t.end_min = convertString(e_min);

	if(s[12] == 'P') 
	{

		t.end_ampm = "PM";
		if(t.end_hour!=12)
		t.end_hour = (12 + t.end_hour)%24;
	}
	else
	{
		t.end_ampm = "AM";
		if(t.end_hour == 12) t.end_hour = 0;
	}
	t.end_time = t.end_hour + ((t.end_min)/100.0);

	return t;


}
void solve ()
{
	Dungeon_Master(); cout << "Hii,I am @iron_manu22 \n\n\n";

	int t;

	cin >> t;

	while(t--)
	{
		char sp[100];
		
		rep(i,7) cin >> sp[i];
		//extracting chefs time
		string p = "";
		p+=sp[0];
		p+=sp[1];
		
		int ph = convertString(p); 
		p = "";
		p+=sp[3];
		p+=sp[4];
		int pmin = convertString(p);
		string p_ampm;
		if(sp[5] == 'P')
		{
			p_ampm = "PM";
			if(ph!=12)
			ph = (ph + 12)%24;

		}
		else
		{
		 p_ampm = "AM";
		 if(ph == 12) ph = 0;
		}
		//cout << ph << ":" << pmin << endl;
		int n;
		cin >> n;

		float phh = ph + (pmin/100.0);
		//cout << phh << endl;
		rep(i,n)
		{
			char s[14];
			j=0;
			rep(j,14) cin >> s[j];
			j=0;
			timee t = get_time(s);

			cout << t.start_time << " - " << phh << " - " << t.end_time <<"\t"  << endl << endl;; ;
			/*if(t.start_time <= phh and t.end_time >= phh)
			{
				cout << "1" ;
				continue;
			}

			else  cout << "0";*/
			
			//cout << endl << endl;
		}

		cout << endl;


	}
	// problem link:
}
/*
debugged history

*/