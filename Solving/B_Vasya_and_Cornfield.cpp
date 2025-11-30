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

bool check(int x, int y, int n, int d)
{
    bool cond1 = (x + y >= d) && (x + y <= 2 * n - d);
    bool cond2 = (x - y >= -d) && (x - y <= d);
    return cond1 && cond2;
}

int main()
{
    FAST;
    int n, d;
    cin >> n >> d;
    int m;
    cin >> m;
    while (m--)
    {
        int x, y;
        cin >> x >> y;
        if (check(x, y, n, d))
            HA else NA
    }
    return 0;
}