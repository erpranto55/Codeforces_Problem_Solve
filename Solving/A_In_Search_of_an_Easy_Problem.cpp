//https://codeforces.com/problemset/problem/1030/A

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
    vector<int> a(n);
    bool flag = false;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
            flag = true;
    }
    if (flag)
        cout << "HARD" << nl;
    else
        cout << "EASY" << nl;
    return 0;
}