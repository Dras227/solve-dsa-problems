#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<fstream>
using namespace std;

void solve();
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
//                      TEMPLATE 
//                        ENDS
//                        HERE  
int32_t  main()
{
   dras227();
    solve();
    count_101 ();
    return 0;

}
int converttoint(string s)
{
    
    int ans=0,p=1;
    for(int i=s.length()-1;i>=0;i--)
    {
        ans+=(s[i]-'0')*p;
        p*=10;
    }

    //cout <<endl<<s<<" is successfully converted to"<< ans<<endl;

    return ans;
}
int checkcb(string s)
{
    int arr[10] = {2,3,5,7,11,13,17,19,23,29};

    int number = converttoint(s);
   //cout <<endl <<  number << endl;
    for(int i=0;i<10;i+=1)
    {
        if(number == arr[i]) return 1;
    }
    for(int i=0;i<10;i+=1){
        if(number == 0||number == 1) return 0;
        if(number%arr[i] == 0) return 0;
    }


    return 1;
}

int is_valid(int x[],int i,int j)
{
    for(int p=i;p<j;p+=1)
    {
        if(x[i] == 1) return 0;
    }

    return 1;
}
void solve()
{
    int n;

    cin >> n;

    string s;
    int flag =1,count=0;
    cin >> s;
    int x[n];for (int i = 0; i < n; ++i) x[i] =0;
  
    for(int i=0;i<n;i+=1)
    {
        for(int j=i;j<n;j+=1)
        {
            //first give me substring 

            string str = s.substr(i,j);

           // cout << endl << s.substr(i,j) << endl;
           // cout <<endl<< str <<endl; 
               //check that substring is cb number


           int check = checkcb(str); 
           //check the cb number includes other cb numbers
           
           if(check && is_valid(x,i,j))
           {
            cout << endl << str <<" is a cb number\n"; 
             count+=1;

              for(int p=i;p<j;p+=1)
                {
                    x[p] = 1;
                }
             

            




           }


        }
    }
    cout << count<<endl;

    
}
    

/*intput.txt
output.txt*/