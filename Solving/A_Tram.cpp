// /https://codeforces.com/problemset/problem/116/A



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
    int n = 1;
    cin >> n;

    int cur = 0;
    int mx = 0;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        cur -= a;
        cur += b;
        if (cur > mx)
        {
            mx = cur;
        }
    }
    cout << mx << endl;

    return 0;
}