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

using namespace std;

void solve()
{
    // Your code here
    int n;
    cn(n);
    if (n % 2 == 1)
    {
        ct(n);
        for (int i = 2; i < n - 2; i++)
        {
            cout << i << " ";
        }
        cout << "1 " << n - 2 << " " << n - 1 << " " << n << endl;
        return;
    }
    else
    {
        int k = log(n) / log(2);
        int l = pow(2, k);
        vector<int> v(n + 1, 0);
        v[1] = 1;
        // v[3] = 1;
        v[l] = 1;
        v[l - 1] = 1;
        v[l - 2] = 1;
        int p = pow(2, k + 1) - 1;
        ct(p);
        int i = 2;
        int r = 0;
        while (i <= n)
        {
            if (v[i] == 0)
            {
                if (i % 2 == 1 && r == 0)
                {
                    r = i;
                    i++;
                    continue;
                }
                cout << i << " ";
            }
            i++;
        }
        // ct("hi");
        cout <<r<< " 1 " << l - 2 << " " << l - 1 << " " << l << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10);
    cout.setf(ios::fixed);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}