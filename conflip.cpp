/* 
|-------------------------------------------------------|
|author: dev_preet                                      |
|                                                       |
|                                                       |
|                                                       |
|-------------------------------------------------------|                  


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
        int g,i,q;
        cin >> g;
        ll int n;
        while(g--) {
            cin >> i >> n >> q;
            //i=1 head, i=2 tail face up
            //q=1 head guess, q=2 tail guess
            if(i==1 && (n%2==0) && q==1) {
                cout<<n/2<<nl;
            }
            else if (i==1 && (n%2!=0) && q==1) {
                cout<<n/2<<nl;
            }
            else if (i==2 && (n%2==0) && q==1) {
                cout<<n/2<<nl;
            }
            else if (i==2 && (n%2!=0) && q==1) {
                cout<<(n/2)+1<<nl;
            }
            else if (i==1 && (n%2==0) && q==2) {
                cout<<n/2<<nl;
            }
            else if (i==1 && (n%2!=0) && q==2) {
                cout<<(n/2)+1<<nl;
            }
            else if (i==2 && (n%2==0) && q==2) {
                cout<<n/2<<nl;
            }
            else if (i==2 && (n%2!=0) && q==2) {
                cout<<n/2<<nl;
            }
        }
    }
    return 0;
}
