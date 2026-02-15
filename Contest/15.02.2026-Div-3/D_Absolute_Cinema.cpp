//https://codeforces.com/contest/2195/problem/D

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
        vector<ll> a(n + 1), f(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> f[i];
        }

        if (n == 2)
        {
            cout << f[1] << " " << f[0] << nl;
            continue;
        }
        
        for (int i = 1; i < n - 1; ++i)
        {
            a[i] = (f[i - 1] + f[i + 1] - 2 * f[i]) / 2;
        }
        
        ll sa1 = 0;
        for (int i = 1; i < n - 1; ++i)
        {
            sa1 += a[i] * (ll)(n - (i + 1));
        }

        a[0] = (f[n - 1] - sa1) / (n - 1);

        ll san = 0;
        for (int i = 1; i < n - 1; ++i)
        {
            san += a[i] * (ll)i;
        }
        a[n - 1] = (f[0] - san) / (n - 1);
        for (int i = 0; i < n; ++i)
        {
            cout << a[i] << " ";
        }
        cout << nl;
    }
    return 0;
}