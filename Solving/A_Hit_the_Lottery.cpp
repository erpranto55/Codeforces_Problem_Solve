//https://codeforces.com/problemset/problem/996/A


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
    ll n;
    cin >> n;
    ll bills = 0;
    int denom[] = {100, 20, 10, 5, 1};
    for (int d : denom)
    {
        bills += n / d;
        n %= d;
    }
    cout << bills << nl;
    return 0;
}