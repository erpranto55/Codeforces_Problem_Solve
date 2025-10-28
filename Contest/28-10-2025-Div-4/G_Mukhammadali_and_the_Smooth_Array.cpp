//https://codeforces.com/contest/2167/problem/G

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
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<ll> a(n), c(n);
        ll cost = 0;

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
            cost += c[i];
        }
        ll mx = 0;
        vector<ll> dp(n, 0);
        for (int i = 0; i < n; i++)
        {
            dp[i] = c[i];
            for (int j = 0; j < i; j++)
            {
                if (a[j] <= a[i])
                {
                    dp[i] = max(dp[i], dp[j] + c[i]);
                }
            }
            mx = max(mx, dp[i]);
        }
        cout << cost - mx << nl;
    }
    return 0;
}