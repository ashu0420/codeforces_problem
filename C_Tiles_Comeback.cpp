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
#define out(a, n) \
    fr(ll, 0, n) { cout << a[i] << " "; }

using namespace std;

void solve()
{
    // Your code here
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    in(v, n);
    if (k == 1)
    {
        py;
        return;
    }
    int cS = 1, cB = 1;
    int count = 2;
    if (v[0] == v[n - 1])
    {
        if (count == k)
        {
            py;
            return;
        }
        for (int i = 1; i < n - 1; i++)
        {
            if (count == k)
            {
                py;
                return;
            }
            if (v[i] == v[0] && count < k)
            {
                count++;
            }
        }
        if (count == k)
        {
            py;
            return;
        }
    }
    else
    {
        if (cS == k && cB == k)
        {
            py;
            return;
        }
        for (int i = 1; i < n - 1; i++)
        {
            if (cS == k && cB == k)
            {
                py;
                return;
            }
            if (v[i] == v[0] && cS < k)
            {
                cS++;
            }
            if (v[i] == v[n - 1] && cS == k && cB < k)
            {
                cB++;
            }
        }
        if (cS == k && cB == k)
        {
            py;
            return;
        }
        // ct(cS);
        // ct(cB);
    }

    pn;
    return;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}