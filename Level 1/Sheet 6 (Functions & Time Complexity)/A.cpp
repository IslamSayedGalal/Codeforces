#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>
#include<queue>
#include<stack>
#include<list>
#include<set>
#include<map>
#define ll long long
using namespace std;
void Islam() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
void st(int x,string a)
{
    ll c=0,d=0;
    for (size_t i = 0; i < x; i++)
    {
        if(a[i]=='A') c++;
        else if(a[i]=='D') d++;
    }
    
    if(c>d) cout<<"Anton";
    else if(d>c) cout<<"Danik";
    else cout<<"Friendship";
}
int main()
{
    Islam(); 
    ll x,y=0,c=0,d=0;
    string a,b;
    cin>>x>>a;
    st(x,a);
    
    
}