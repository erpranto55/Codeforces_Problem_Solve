//https://codeforces.com/contest/2167/problem/C

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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool same = true;
        int parity = v[0] % 2;
        for (int i = 1; i < n; i++)
        {
            if ((v[i] % 2) != parity)
            {
                same = false;
                break;
            }
        }
        if (same)
        {
            for (int i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << nl;
        }
        else
        {
            sort(all(v));
            for (int i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << nl;
        }
    }
    return 0;
}
