//https://codeforces.com/contest/2185/problem/B

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

ll sol(vector<ll> &a)
{
    ll sum = 0;
    int cur = 0;
    for (int x : a)
    {
        cur = max(cur, x);
        sum += cur;
    }
    return sum;
}

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
        ll ans = sol(a);
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                swap(a[i], a[j]);
                ans = max(ans, sol(a));
                swap(a[i], a[j]);
            }
        }
        cout << ans << nl;
    }
    return 0;
}