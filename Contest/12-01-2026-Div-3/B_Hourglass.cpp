//https://codeforces.com/contest/2184/problem/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define all(x) x.begin(), x.end()
#define HA cout << "YES" << '\n';
#define NA cout << "NO" << '\n';
#define nl '\n'
#define mod 1000000007
#define N 500005
ll fx[] = {0, 0, 1, -1, 1, 1, -1, -1};
ll fy[] = {1, -1, 0, 0, -1, 1, -1, 1};

int main()
{
    FAST;
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll s, k, m;
        cin >> s >> k >> m;

        ll r = m % k;

        if (s <= k)
        {
            ll tim = m % k;
            ll rem = s - tim;
            cout << max(0ll, rem) << nl;
        }
        else
        {
            ll idx = m / k;
            ll tim = m % k;
            ll str = 0;
            if (idx % 2 == 0)
            {
                str = s;
            }
            else
                str = k;

            cout << str - tim << nl;
        }
    }
    return 0;
}