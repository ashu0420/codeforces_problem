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
    bool flag = 0;
    if (n % 2 == 1)
    {
        if (n < 27)
        {
            ct("-1");
            return;
        }
        int j = 3;
        for (int i = 1; i <= n; i++)
        {
            if (i == 1 || i == 10 || i == 26)
            {
                cout << "1 ";
            }
            else if (i == 23 || i == 27)
            {
                cout << "2 ";
            }
            else
            {
                if (flag == 0)
                {
                    cout << j << " ";
                    flag = 1;
                }
                else
                {
                    cout << j << " ";
                    flag = 0;
                    j++;
                }
            }
        }
    }
    else
    {
        int j = 3;
        for (int i = 1; i <= n; i++)
        {

            if (flag == 0)
            {
                cout << j << " ";
                flag = 1;
            }
            else
            {
                cout << j << " ";
                flag = 0;
                j++;
            }
        }
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