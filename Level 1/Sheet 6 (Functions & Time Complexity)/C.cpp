#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <queue>
#include <stack>
#include <list>
#include <set>
#include <map>
#define ll long long
using namespace std;
void Islam()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
void solve(string x,string y)
{
    for (size_t i = 0; i < x.length(); i++)
    {
        if(islower(x[i])) x[i]=toupper(x[i]);
        if(islower(y[i])) y[i]=toupper(y[i]);

    }
    if(x<y) cout<<-1;
    else if(y<x) cout<<1;
    else cout<<0;
}
int main()
{
    Islam(); 
    ll x,y=0,c=0,d=0;
    string a,b;
    cin>>a>>b;
    solve(a,b);
    
}