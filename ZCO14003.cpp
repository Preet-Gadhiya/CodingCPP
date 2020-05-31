/*

https://www.codechef.com/LRNDSA01/problems/ZCO14003/
user: dev_preet


Sample Input 1
4
30
20
53
14

Sample Output 1
60


Sample Input 2
5
40
3
65
33
21

Sample Output 2
99

*/

#include <bits/stdc++.h>
#define ll long long
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL)
#define cases ll t; cin>>t; while(t--)
#define nl "\n"
using namespace std;

int main() {
    faster;
	ll int n,temp,z=0,max=0;
	cin>>n; //4
	ll int a[n]; 
	for(int i=0;i<n;i++)
	    cin>>a[i]; //30 20 53 14
	/*for(int i=0;i<n-1;i++) {
	    for(int j=i+1;j<n;j++) {
	        if(a[i]>a[j]) {
	            temp=a[j];
	            a[j]=a[i];
	            a[i]=temp;
	        }
	    }
	}*/
    sort(a, a+n); // 14 20 30 53
	for(int i=0;i<n;i++)
	{
        //cout << a[i] << nl;
	    z=a[i]*(n-i);
	    if(z>max)
	    max=z;
	}
	cout<<max;
	return 0;
}


