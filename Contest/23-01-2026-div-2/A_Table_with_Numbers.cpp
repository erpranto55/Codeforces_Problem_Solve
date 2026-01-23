// https://codeforces.com/contest/2189/problem/A

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
        int n, h, l;
        cin >> n >> h >> l;
        int r = 0, c = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x <= h && x <= l)
                b++;
            else if (x <= h)
                r++;
            else if (x <= l)
                c++;
        }
        int tot = b + r + c;
        int ans = min({r + b, c + b, tot / 2});
        cout << ans << nl;
    }
    return 0;
}