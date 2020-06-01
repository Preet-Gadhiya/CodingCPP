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
        int n,div, min=INT_MIN,ans;  cin >> n;
        int s[n],p[n],v[n];
        for(int i =0 ; i< n; i++) {
            cin >> s[i] >> p[i] >> v[i];
        }
        for(int i = 0; i < n; i++) {
            s[i] += 1;
            div = p[i]/s[i];
            //cout << "div" << div <<nl;
            ans = div * v[i];
            //cout << "ans" << ans <<nl;
            
            if(ans>=min) {
                min=ans;
            } 
            //cout << "min" << min <<nl;
        }
        cout << min << nl;
    }
    return 0;
}
