//https://codeforces.com/contest/2195/problem/C

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
        vector<int> dp(7, N),dp2(7);
        for (int i = 1; i <= 6; ++i)
        {
            if (a[0] == i)
                dp[i] = 0;
            else
                dp[i] = 1;
        }

        for (int i = 1; i < n; i++)
        {
            for (int x = 1; x <= 6; x++)
            {
                dp2[x] = N;
            }
            for (int j = 1; j <= 6; j++)
            {
                for (int k = 1; k <= 6; k++)
                {
                    if (k == j)
                        continue;
                    if (k == 7 - j)
                        continue;

                    int cost = (a[i] == k ? 0 : 1);
                    dp2[k] = min(dp2[k], dp[j] + cost);
                }
            }
            dp = dp2;
        }

        int ans = N;
        for (int x = 1; x <= 6; x++)
        {
            ans = min(ans, dp[x]);
        }
        cout << ans << nl;
    }
    return 0;
}