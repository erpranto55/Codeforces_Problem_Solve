//https://codeforces.com/contest/2185/problem/D


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
        int n, m, h;
        cin >> n >> m >> h;
        vector<ll> a(n + 1), org(n + 1, 0), cng(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        ll cur = 0;
        while (m--)
        {
            ll b, c;
            cin >> b >> c;
            if (cng[b] != cur)
            {
                org[b] = 0;
                cng[b] = cur;
            }

            if (a[b] + org[b] + c > h)
            {
                cur++;
            }
            else
            {
                org[b] += c;
            }
        }

        for (int i = 1; i <= n; i++)
        {
            ll val = a[i];
            if (cng[i] == cur)
            {
                val += org[i];
            }
            cout << val << " ";
        }
        cout << nl;
    }
    return 0;
}