//https://codeforces.com/problemset/problem/705/A


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
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            if (i % 2 == 1)
                cout << "I hate";
            else
                cout << "I love";
        }
        else
        {
            if (i % 2 == 1)
                cout << " that I hate";
            else
                cout << " that I love";
        }
    }
    cout << " it";
    return 0;
}