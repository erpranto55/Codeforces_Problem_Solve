//https://codeforces.com/contest/2171/problem/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define nl '\n'

int main()
{
    FAST;
    int tc = 1;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int ans = 0;
        if (a[0] != -1 && a[n - 1] != -1)
            ans = abs(a[n - 1] - a[0]);

        vector<int> b = a;
        for (int i = 0; i < n; i++)
        {
            if (b[i] == -1)
            {
                if (i == 0 && b[n - 1] != -1)
                    b[i] = b[n - 1];
                else if (i == n - 1 && b[0] != -1)
                {
                    b[i] = b[0];
                }
                else
                    b[i] = 0;
            }
        }

        if (a[0] != -1)
            b[0] = a[0];
        if (a[n - 1] != -1)
            b[n - 1] = a[n - 1];

        cout << ans << nl;
        for (int i = 0; i < n; i++)
            cout << b[i] << " ";
        cout << nl;
    }
    return 0;
}