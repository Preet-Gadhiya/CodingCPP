/* 
|-------------------------------------------------------|
|author: dev_preet                                      |
|                                                       |
|                                                       |
|                                                       |
|-------------------------------------------------------|

https://www.codechef.com/LRNDSA01/problems/FCTRL/
Sample Input:

6
3
60
100
1024
23456
8735373
Sample Output:

0
14
24
253
5861
2183837

*/
#include <bits/stdc++.h>
#define ll long long
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL)
#define cases ll t; cin>>t; while(t--)
#define nl "\n"
//Take input
inline int getn(){
	int n=0, c=getchar_unlocked();
	while(c < '0' || c > '9') c = getchar_unlocked();
	while(c >= '0' && c <= '9')
		n = (n<<3) + (n<<1) + c - '0', c = getchar_unlocked();
	return n;
}
using namespace std;

signed main() {
    faster;
    cases{
        ll n,i,p,cnt=0,sum=0;
        cin>>n;
        p=n;
        while(p!=0)
        {
             p=p/5;
            sum+=p;
        }
        cout<<sum<<"\n";
  }

    return 0;
}
