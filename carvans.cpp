/* 
|-------------------------------------------------------|
|author: dev_preet                                      |
|                                                       |
|                                                       |
|                                                       |
|-------------------------------------------------------|

https://www.codechef.com/LRNDSA01/problems/CARVANS/

Input:
3
1
10
3
8 3 6
5
4 5 1 2 3

Output:
1
2
2

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
	int t=getn(),n,fs,cs,ans=0;
    while(t--){
        n=getn();
        fs=INT_MAX;
        while(n--){
            cs=getn();
            if(fs>=cs){
                ans++;
                fs=cs;
            }
        }
        cout<<ans<<"\n";
        ans=0;
    }
    return 0;
}


