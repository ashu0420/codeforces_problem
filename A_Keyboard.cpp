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
    char c;
    string s;
    cin >> c >> s;

    // qwertyuiop
    // asdfghjkl;
    // zxcvbnm, ./
    string key = "qwertyuiopasdfghjkl;zxcvbnm,./";
    for (int i = 0; i < s.size(); i++)
    {
        // ct("j");
        for (int j = 0; j < key.size(); j++)
        {
            if (s[i] == key[j])
            {
                if (c == 'R')
                    cout << key[j - 1];
                if (c == 'L')
                    cout << key[j + 1];
                break;
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
    // cin >> t;
    t=1;
    while (t--)
    {
        solve();
    }
    return 0;
}