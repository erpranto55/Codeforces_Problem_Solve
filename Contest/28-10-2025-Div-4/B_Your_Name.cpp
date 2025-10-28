//https://codeforces.com/contest/2167/problem/B

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
        string s, t;
        cin >> s >> t;
        map<char, int> mp1, mp2;
        for (int i = 0; i < n; i++)
        {
            mp1[s[i]]++;
            mp2[t[i]]++;
        }
        bool flag = true;
        for (auto p : mp1)
        {
            char ch = p.first;
            if (mp1[ch] != mp2[ch])
            {
                flag = false;
                break;
            }
        }
        if (flag)
            HA else NA
    }
    return 0;
}