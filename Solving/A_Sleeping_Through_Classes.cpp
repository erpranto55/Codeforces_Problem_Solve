//https://codeforces.com/problemset/problem/2173/A

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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int sleep = 0, cool = 0;
        for (auto c : s)
        {
            if (c == '1')
                cool = k;
            else
            {
                if (cool > 0)
                    cool--;
                else
                    sleep++;
            }
        }
        cout << sleep << nl;
    }
    return 0;
}