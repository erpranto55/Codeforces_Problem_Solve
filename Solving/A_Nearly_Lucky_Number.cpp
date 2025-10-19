#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define nl "\n"
bool isLucky(ll n)
{
    if (n == 0)
        return false;
    while (n > 0)
    {
        int d = n % 10;
        if (d != 4 && d != 7)
            return false;
        n /= 10;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    int cnt = 0;
    while (n > 0)
    {
        ll x = n % 10;
        if (x == 7 || x == 4)
            cnt++;
        n /= 10;
    }
    if (isLucky(cnt))
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}