//https://codeforces.com/contest/2189/problem/B


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
        ll n, x;
        cin >> n >> x;
        ll cur = 0;
        ll mx = -2e18;

        for (int i = 0; i < n; ++i)
        {
            ll a, b, c;
            cin >> a >> b >> c;
            cur += a * (b - 1);
            ll eff = a * b - c;

            if (eff > mx)
            {
                mx = eff;
            }
        }

        if (cur >= x)
        {
            cout << 0 << nl;
            continue;
        }

        if (mx <= 0)
        {
            cout << -1 << nl;
            continue;
        }
        ll nd = x - cur;
        ll ans = (nd + mx - 1) / mx;

        cout << ans << nl;
    }
    return 0;
}