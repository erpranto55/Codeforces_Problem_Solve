// https://codeforces.com/contest/2171/problem/C1

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
        vector<int> b(n);
        for (int i = 0; i < n; i++)
            cin >> b[i];

        int axr = 0, bxr = 0;
        for (int i = 0; i < n; i++)
        {
            axr ^= a[i];
            bxr ^= b[i];
        }

        int aj = 0, m = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i - 1] != b[i - 1])
            {
                if (i % 2 == 1)
                    aj++;
                else
                    m++;
            }
        }

        if (axr == bxr)
            cout << "Tie" << nl;
        else
        {
            if (aj > m)
                cout << "Ajisai" << nl;
            else if (m > aj)
                cout << "Mai" << nl;
            else
            {
                if (m == 0)
                {
                    if (axr > bxr)
                        cout << "Ajisai" << nl;
                    else
                        cout << "Mai" << nl;
                }
                else
                    cout << "Mai" << nl;
            }
        }
    }
    return 0;
}