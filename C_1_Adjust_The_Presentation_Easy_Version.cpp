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
    int n, m, q;
    cin >> n >> m >> q;
    vector<int> a(n), b(m);
    in(a, n);
    in(b, m);
    vector<int> v(n + 1, 0);
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            j++;
            v[a[i]] = 1;
            if (i < n - 1)
            {
                i++;
            }
        }
        else if (v[b[j]] == 1)
        {
            j++;
        }
        else
        {
            break;
        }
    }
    if (j == m)
    {
        ct("YA");
        return;
    }
    else
    {
        ct("TIDAK");
        return;
    }
    while (q--)
    {
        int s, t;
        cin >> s, t;
        b[s] = t;
        while (i < n && j < m)
        {
            if (a[i] == b[j])
            {
                j++;
                v[a[i]] = 1;
                if (i < n - 1)
                {
                    i++;
                }
            }
            else if (v[b[j]] == 1)
            {
                j++;
            }
            else
            {
                break;
            }
        }
        if (j == m)
        {
            ct("YA");
            return;
        }
        else
        {
            ct("TIDAK");
            return;
        }
    }
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