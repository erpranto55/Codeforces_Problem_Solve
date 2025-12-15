//https://codeforces.com/problemset/problem/318/A


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
    ll n, k;
    cin >> n >> k;

    ll cnt = (n + 1) / 2;

    if (k <= cnt)
    {
        cout << 2 * k - 1 << nl;
    }
    else
    {
        ll p = k - cnt;
        cout << 2 * p << nl;
    }
    return 0;
}