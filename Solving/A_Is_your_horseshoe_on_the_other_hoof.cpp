//https://codeforces.com/problemset/problem/228/A


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
    ll s1, s2, s3, s4;
    cin >> s1 >> s2 >> s3 >> s4;
    set<ll> st = {s1, s2, s3, s4};
    cout << 4 - st.size() << nl;
    return 0;
}