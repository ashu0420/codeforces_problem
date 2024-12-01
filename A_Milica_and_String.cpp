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
    int n, k;
    string s;
    cin >> n >> k >> s;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            count++;
        }
    }
    if (count > k)
    {
        int temp = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                temp++;
            }
            if (temp == count - k)
            {
                ct("1");
                cout << i + 1 << " A" << endl;
                return;
            }
        }
    }
    else if (count < k)
    {
        int temp = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'A')
            {
                temp++;
            }
            if (temp == k - count)
            {
                ct("1");
                cout << i + 1 << " B" << endl;
                return;
            }
        }
    }
    else
    {
        ct("0");
        return;
    }
    return;
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