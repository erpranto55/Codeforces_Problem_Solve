//https://codeforces.com/problemset/problem/1352/A

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
        vector<int> parts;
        int place = 1;
        while (n > 0)
        {
            int digit = n % 10;
            if (digit != 0)
            {
                parts.push_back(digit * place);
            }
            n /= 10;
            place *= 10;
        }
        cout << parts.size() << nl;
        for (int x : parts)
            cout << x << " ";
        cout << nl;
    }
    return 0;
}