//https://codeforces.com/contest/2184/problem/C

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

void solve()
{
    int n, k;
    cin >> n >> k;

    if (k > n)
    {
        cout << -1 << nl;
        return;
    }
    for (int i = 0; i < 32; i++)
    {
        ll p = (1LL << i);

        ll flr = n / p;
        ll cil = (n + p - 1) / p;

        if (flr == k || cil == k)
        {
            cout << i << nl;
            return;
        }

        if (cil < k)
        {
            cout << -1 << nl;
            return;
        }
    }
    cout << -1 << nl;
}

int main()
{
    FAST;
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}