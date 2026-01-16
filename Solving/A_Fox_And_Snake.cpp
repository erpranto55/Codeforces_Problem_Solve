//https://codeforces.com/problemset/problem/510/A

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
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            for (int j = 0; j < m; j++)
                cout << "#";
        }
        else
        {
            if ((i / 2) % 2 == 1)
            {
                for (int j = 0; j < m - 1; j++)
                    cout << ".";
                cout << "#";
            }
            else
            {
                cout << "#";
                for (int j = 0; j < m - 1; j++)
                    cout << ".";
            }
        }
        cout << nl;
    }
    return 0;
}