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
    string s = "";
    bool rev = 0;
    while (s.size() < n && rev == 0)
    {
        int flag;
        string temp = s;
        temp += '1';
        cout << "? " << temp << endl;
        cin >> flag;
        if (flag)
        {
            s += '1';
        }
        else
        {
            temp = s;
            temp += '0';
            cout << "? " << temp << endl;
            cin >> flag;
            if (flag)
            {
                s += '0';
            }
            else
            {
                rev = 1;
            }
        }
        cout << endl;
    }
    while (s.size() < n)
    {
        int flag;
        string temp = s;
        temp = '1' + s;
        cout << "? " << temp << endl;
        cin >> flag;
        if (flag)
        {
            s = '1' + s;
        }
        else
        {
            s = '0' + s;
        }
        cout << "\n";
        cout.flush();
    }
    cout << "! " << s << endl<<"\n";
    
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