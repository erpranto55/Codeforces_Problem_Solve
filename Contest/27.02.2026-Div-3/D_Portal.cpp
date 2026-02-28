//https://codeforces.com/contest/2200/problem/D

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
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> p(n);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        vector<int> a, b, c;
        for (int i = 0; i < x; i++)
        {
            a.push_back(p[i]);
        }
        for (int i = x; i < y; i++)
        {
            b.push_back(p[i]);
        }
        for (int i = y; i < n; i++)
        {
            c.push_back(p[i]);
        }

        int val = b[0], idx = 0;
        for (int i = 1; i < b.size(); i++)
        {
            if (b[i] < val)
            {
                val = b[i];
                idx = i;
            }
        }

        vector<int> b1;
        for (int i = idx; i < b.size(); ++i)
        {
            b1.push_back(b[i]);
        }
        for (int i = 0; i < idx; ++i)
        {
            b1.push_back(b[i]);
        }
        vector<int> S;
        for (int v : a)
        {
            S.push_back(v);
        }
        for (int v : c)
        {
            S.push_back(v);
        }

        int ins = S.size();
        for (int i = 0; i < S.size(); ++i)
        {
            if (S[i] > b1[0])
            {
                ins = i;
                break;
            }
        }

        vector<int> ans;
        for (int i = 0; i < ins; ++i)
        {
            ans.push_back(S[i]);
        }
        for (int val : b1)
        {
            ans.push_back(val);
        }
        for (int i = ins; i < S.size(); ++i)
        {
            ans.push_back(S[i]);
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << nl;
    }
    return 0;
}