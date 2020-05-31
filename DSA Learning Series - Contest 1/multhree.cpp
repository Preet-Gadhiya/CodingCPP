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
        ll k;
        int d0, d1;
        cin >> k >> d0 >> d1;
        int s = d0+d1;
        int c = ((2*s)%10) + ((4*s)%10) + ((8*s)%10) + ((6*s)%10);
        ll num_cycle = (k-3) / 4;
        ll tot=0;

        if(k==2)
            tot=s;
        else {
            tot = s + (s%10) + (c * num_cycle);
            int left_over = (k-3) - (num_cycle * 4);
            int p = 2;
            for(int i = 1; i <=left_over; i++) {
                tot += ((p*s) % 10);
                p = ((p*2) % 10);
            }
        }

        if(tot%3==0)            cout<<"YES"<<nl;
        else                    cout<<"NO"<<nl;
    }
    return 0;
}
