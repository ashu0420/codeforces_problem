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
    string s;
    cn(s);
    s = "0" + s;
    int i;
    int n = s.size();
    bool flag = 0;
    for (i = 1; i < n; i++)
    {
        if (s[i] > '4')
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        s.erase(0, 1);
        ct(s);
        return;
    }
    if (s[i - 1] != '4' && flag)
    {
        s[i - 1]++;

        if (i - 1 == 0)
        {
            cout << s[i - 1];
            for (int k = 1; k < n; k++)
            {
                cout << '0';
            }
            cout << endl;
        }
        else
        {

            for (int j = 1; j < n; j++)
            {
                if (j < i)
                    cout << s[j];
                else
                    cout << '0';
            }
            cout << endl;
        }
        return;
    }
    else
    {
        int j = i - 1;
        for (j; j >= 0; j--)
        {
            if (s[j] != '4')
            {
                break;
            }
        }
        s[j]++;
        // ct(s[j]);
        if (j == 0)
        {
            // ct("h");
            cout << s[j];
            for (int k = 1; k < n; k++)
            {
                cout << '0';
            }
            cout << endl;
        }
        else
        {

            for (int l = 1; l < n; l++)
            {
                if (l <= j)
                    cout << s[l];
                else
                    cout << '0';
            }
            cout << endl;
        }
        return;
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