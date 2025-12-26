//https://codeforces.com/problemset/problem/520/A


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
    string s;
    cin >> s;

    vector<bool> seen(26, false);

    for (char c : s)
    {
        c = tolower(c);
        seen[c - 'a'] = true;
    }

    for (bool letter : seen)
    {
        if (!letter)
        {
            NA return 0;
        }
    }

    HA return 0;
}