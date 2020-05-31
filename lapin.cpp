#include <bits/stdc++.h>
using namespace std;

string solve() {
    vector<int> vec(26,0);
    string str; cin>> str;
    bool isOdd = str.size()&1;
    int mid = str.size()>>1;
    if(!isOdd) mid--;

    for(int i=0;i<str.size();i++){
        if(i==mid and isOdd){
            continue;
        }
        else if(i<=mid){
            vec[str[i]-'a']++;
        }
        else{
             vec[str[i]-'a']--;
        }
    }


    for(int i=0;i<26;i++){
        if(vec[i]){
            return "NO";
        }
    }
    return "YES";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t; cin>> t;
    while(t--){
       cout <<  solve()<<"\n";
    }
    return 0;
}