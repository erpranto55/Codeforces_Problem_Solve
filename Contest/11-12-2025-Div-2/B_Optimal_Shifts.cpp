//https://codeforces.com/contest/2176/problem/B

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
        string s;
        cin >> s;
        vector<int> one;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                one.push_back(i);
        }
        int zeros = 0, k = one.size();
        for (int i = 0; i < k - 1; i++)
        {
            int cur = one[i + 1] - one[i] - 1;
            zeros = max(zeros, cur);
        }
        if (k > 0)
        {
            int gap = n - one.back() + one.front() - 1;
            zeros = max(zeros, gap);
        }
        cout << zeros << nl;
    }
    return 0;
}