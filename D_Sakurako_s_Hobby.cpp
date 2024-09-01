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
    int n;
    cn(n);
    vector<int> p(n);
    in(p, n);
    string s;
    cn(s);
    vector<int> f(n, 0);
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        bool flag = 0;
        for (int j = i; j < n;)
        {
            if (j == i && flag)
            {
                break;
            }
            flag = 1;
            if (f[j] != 0)
            {
                count = f[j];
                break;
            }
            if (s[p[j] - 1] == '0')
            {

                count++;
            }
            j = p[j] - 1;
        }

        f[i] = count;
    }
    out(f, n);
    cout<<endl;
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