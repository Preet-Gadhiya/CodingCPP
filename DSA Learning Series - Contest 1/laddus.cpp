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
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
#define cases \
    ll t;     \
    cin >> t; \
    while (t--)
#define nl "\n"
//Take input
inline int getn()
{
    int n = 0, c = getchar_unlocked();
    while (c < '0' || c > '9')
        c = getchar_unlocked();
    while (c >= '0' && c <= '9')
        n = (n << 3) + (n << 1) + c - '0', c = getchar_unlocked();
    return n;
}
using namespace std;

signed main()
{
    faster;
    cases
    {
        int activity;
        string origin;
        cin >> activity >> origin;
        int laddu = 0;
        while (activity--)
        {
            string s;
            cin >> s;
            if (s == "CONTEST_WON")
            {
                int rank;
                cin >> rank;
                laddu += 300;
                if (rank <= 20)
                {
                    laddu += (20 - rank);
                }
            }
            else if (s == "TOP_CONTRIBUTOR")
            {
                laddu += 300;
            }
            else if (s == "BUG_FOUND")
            {
                int sev;
                cin >> sev;
                laddu += sev;
            }
            else if (s == "CONTEST_HOSTED")
            {
                laddu += 50;
            }
            else
            {
                assert(false); // this is run_time error
            }
        }
        int months = 0;
        if (origin == "INDIAN")
        {
            months = laddu / 200;
        }
        else
        {
            months = laddu / 400;
        }

        cout << months << endl;
    }

    return 0;
}
