//https://codeforces.com/problemset/problem/580/A


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
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 0)
    {
        cout << 0 << nl;
        return 0;
    }

    int mx = 1;
    int cur = 1;

    for (int i = 1; i < n; i++)
    {
        if (a[i] >= a[i - 1])
        {
            cur++;
        }
        else
        {
            cur = 1;
        }
        mx = max(mx, cur);
    }

    cout << mx << nl;
    return 0;
}