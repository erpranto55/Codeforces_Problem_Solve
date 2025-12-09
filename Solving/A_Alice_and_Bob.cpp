// https://codeforces.com/problemset/problem/2169/A

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
        ll a;
        cin >> n >> a;
        vector<ll> v(n);
        int left = 0;
        int right = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
            if (v[i] < a)
            {
                left++;
            }
            else if (v[i] > a)
            {
                right++;
            }
        }
        if (left > right)
        {
            cout << a - 1 << "\n";
        }
        else
        {
            cout << a + 1 << "\n";
        }
    }
    return 0;
}