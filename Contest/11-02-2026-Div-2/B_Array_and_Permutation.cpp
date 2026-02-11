// /https://codeforces.com/contest/2197/problem/B

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
        int n;
        cin >> n;
        vector<ll> p(n), a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<vector<ll>> pos(n + 1);
        for (int i = 0; i < n; i++)
        {
            pos[a[i]].push_back(i);
        }
        bool flag = true;
        int r = -1;
        for (int i = 0; i < n; i++)
        {
            ll x = p[i];
            if (pos[x].empty())
                continue;
            int l = pos[x].front(), rr = pos[x].back();
            if (l < r)
            {
                flag = false;
                break;
            }
            r = rr;
        }
        if (flag)
            HA else NA
    }
    return 0;
}