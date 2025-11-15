//https://codeforces.com/problemset/problem/96/A

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define FAST ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define all(x) x.begin(), x.end()
#define input(n) \
    int n;       \
    cin >> n;
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
    string s;
    cin >> s;
    int n = s.size();
    bool flag = false;
    if (n > 6)
    {
        for (int i = 0; i + 7 < n; i++)
        {
            if ((s[i] == '1' && s[i + 1] == '1' && s[i + 2] == '1' && s[i + 3] == '1' && s[i + 4] == '1' && s[i + 5] == '1' && s[i + 6] == '1') || (s[i] == '0' && s[i + 1] == '0' && s[i + 2] == '0' && s[i + 3] == '0' && s[i + 4] == '0' && s[i + 5] == '0' && s[i + 6] == '0'))
            {
                flag = true;
            }
        }
    }
    if (flag)
        HA else NA return 0;
}