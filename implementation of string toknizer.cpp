#include<bits/stdc++.h>
#include<stdio.h>
#include<string.h>
#include<algorithm>
#include<fstream>
using namespace std;
#define int long long
void solve();
char *mystrtok(char *str,char delim);
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
char *mystrtok(char *str,char delim){

    //in order to stop while loop after extracting the final token
    static char *input = NULL;
  

    //

    if(str!=NULL){
        input=str;
    }
       if(input == NULL) return NULL;
    char *output = new char[strlen(input)+1];
    int i=0;
    for(;input[i]!='\0';i++)
    {
        if(input[i]!=delim){ output[i] = input[i];}

        else {
            output[i] = '\0';
            input = input + i + 1;
            return output;
        }
    }

    //corner cases
    output[i] = '\0';
    input = NULL;
    return output;
}
void solve()
{
    char s[100] = "Today is a moody day!";

    char *ptr = mystrtok(s,' ');

    cout << ptr<<endl;
    
    while(ptr!=NULL)
    {
        ptr = mystrtok(NULL,' ');
        cout << ptr << "\n";
    }
    return;
}

/*intput.txt
output.txt*/