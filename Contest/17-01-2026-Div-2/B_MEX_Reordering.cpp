//https://codeforces.com/contest/2191/problem/B

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
        map<ll, int> cnt;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            cnt[a[i]]++;
        }
        int mex = 0;
        while (cnt[mex] > 0)
        {
            mex++;
        }

        if (mex == 0)
        {
            NA
        }
        else if (mex == 1)
        {
            if (cnt[0] == 1)
                HA else NA
        }
        else
        {
            HA
        }
    }
    return 0;
}