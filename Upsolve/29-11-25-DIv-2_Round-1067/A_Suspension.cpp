//https://codeforces.com/contest/2158/problem/A

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
        int y, r;
        cin >> y >> r;
        if (r < n)
        {
            int ans = r;
            n = n - ans;
            int rem = (y / 2);
            rem = min(rem, n);
            ans += rem;
            cout << ans << nl;
        }
        else
            cout << n << nl;
    }
    return 0;
}