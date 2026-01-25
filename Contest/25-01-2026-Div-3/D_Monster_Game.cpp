//https://codeforces.com/contest/2193/problem/D

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
        vector<ll> a(n), b(n), pref(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(all(a));
        for (int i = 1; i <= n; i++)
        {
            pref[i] = pref[i - 1] + b[i - 1];
        }
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ll x = a[i];
            ll usable = n - i;
            int k = upper_bound(pref.begin(), pref.end(), usable) - pref.begin() - 1;

            ans = max(ans, x * k);
        }
        cout << ans << nl;
    }
    return 0;
}