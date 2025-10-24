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
    ll tc = 1;
    cin >> tc;
    while (tc--)
    {
        ll n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        while (q--)
        {
            ll a;
            cin >> a;
            int pos = 0;
            ll cnt = 0;
            while (a > 0)
            {
                if (s[pos] == 'B')
                {
                    a /= 2;
                    cnt++;
                    pos = (pos + 1) % n;
                }
                else
                {
                    int k = 0;
                    int tmp = pos;
                    while (s[tmp] == 'A')
                    {
                        k++;
                        tmp = (tmp + 1) % n;
                        if (k >= a)
                            break;
                    }
                    if (k >= a)
                    {
                        cnt += a;
                        a = 0;
                    }
                    else
                    {
                        cnt += k;
                        a -= k;
                        pos = (pos + k) % n;
                    }
                }
            }
            cout << cnt << nl;
        }
    }
    return 0;
}