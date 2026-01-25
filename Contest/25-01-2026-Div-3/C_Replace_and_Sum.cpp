//https://codeforces.com/contest/2193/problem/C

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
        int n, q;
        cin >> n >> q;
        vector<ll> a(n), b(n), c(n), suf(n, 0), pref(n + 1, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            c[i] = max(a[i], b[i]);
        }

        suf[n - 1] = c[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            suf[i] = max(c[i], suf[i + 1]);
        }
        for (int i = 0; i < n; i++)
        {
            pref[i + 1] = pref[i] + suf[i];
        }

        while (q--)
        {
            ll l, r;
            cin >> l >> r;
            ll ans = pref[r] - pref[l - 1];
            cout << ans << " ";
        }
        cout << nl;
    }
    return 0;
}