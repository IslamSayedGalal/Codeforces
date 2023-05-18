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
int main()
{
    Islam();
    int t;
	cin >> t;
	while(t--) 
    {
		ll m,a,b;cin>>a>>b;
        m=(a+b)/4;
        cout<<min(min(a,b),m)<<endl;
	}	

}