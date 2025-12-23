//https://codeforces.com/contest/2179/problem/B

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
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n <= 1)
        {
            cout << 0 << nl;
            continue;
        }
        ll sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            sum += abs(a[i] - a[i + 1]);
        }
        ll ans = sum;
        ans = min(ans, sum - abs(a[0] - a[1]));
        ans = min(ans, sum - abs(a[n - 1] - a[n - 2]));

        for (int i = 0; i < n ; i++)
        {
            ll cur = sum;
            if (i == 0)
            {
                cur -= abs(a[0] - a[1]);
            }
            else if (i == n - 1)
            {
                cur -= abs(a[n - 1] - a[n - 2]);
            }
            else
            {
                cur -= abs(a[i] - a[i - 1]);
                cur -= abs(a[i + 1] - a[i]);
                cur += abs(a[i - 1] - a[i + 1]);
            }
            ans = min(ans, cur);
        }
        cout << ans << nl;
    }
    return 0;
}