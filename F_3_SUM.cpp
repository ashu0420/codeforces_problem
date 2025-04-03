#include <bits/stdc++.h>
#define ll long long
#define li long
#define cn(n) cin >> n
#define py cout << "YES" << endl
#define pn cout << "NO" << endl
#define ct(c) cout << c << endl
#define fr(dt, a, b) for (dt i = a; i < b; i++)
#define in(a, n) \
    fr(ll, 0, n) { cn(a[i]); }
#define out(a, n)                         \
    fr(ll, 0, n) { cout << a[i] << " "; } \
    cout << endl;
#define X ct('X')
#define sort(a) sort(a.begin(), a.end());
#define vin(a, n)    \
    vector<ll> a(n); \
    in(a, n);
const int MOD = 1e9 + 7;

using namespace std;

void solve()
{
    // Your code here
    int n;
    cn(n);
    vector<int> v, f(10, 0);
    for (int i = 0; i < n; i++)
    {
        int x;
        cn(x);
        x %= 10;
        v.push_back(x);
        f[x]++;
    }
    sort(v);
    for (int i = 0; i < 10; i++)
    {
        if (f[i] > 0)
            for (int j = 0; j < 10; j++)
            {
                if ((j == i && f[j] < 2))
                {
                    continue;
                }
                else if (f[j] > 0)

                    for (int k = 0; k < 10; k++)
                    {
                        if (k == i && f[k] < 2 || k == j && f[k] < 2 || i == j == k && f[k] < 3)
                        {
                            continue;
                        }
                        else if (f[k] > 0 && (i + j + k) % 10 == 3)
                        {
                            py;
                            return;
                        }
                    }
            }
    }
    pn;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10);
    cout.setf(ios::fixed);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}