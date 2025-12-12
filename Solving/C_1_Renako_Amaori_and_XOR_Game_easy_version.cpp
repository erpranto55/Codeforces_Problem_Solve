//https://codeforces.com/problemset/problem/2171/C1


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
        vector<ll> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            s ^= a[i] ^ b[i];
        }

        if (s == 0)
        {
            cout << "Tie" << nl;
            continue;
        }

        int last = -1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] != b[i])
            {
                last = i + 1;
                break;
            }
        }

        if (last % 2 == 1)
            cout << "Ajisai" << nl;
        else
            cout << "Mai" << nl;
    }
    return 0;
}