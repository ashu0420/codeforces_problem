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
    // cn(n);
    string s;
    cn(s);
    n = s.size();
    unordered_set<int> sto;
    for (int i = 0; i < n - 3; i++)
    {
        if (s.substr(i, 4) == "1100")
        {
            sto.insert(i);
        }
    }
    int q;
    cn(q);
    while (q--)
    {
        int x;
        char v;
        cin >> x >> v;
        x--;
        if (s.size() < 4)
        {
            pn;
            continue;
        }
        if (s[x] == v)
        {
            if (sto.empty())
            {
                pn;
            }
            else
            {
                py;
            }
            continue;
        }
        if (s[x] == '0')
        {
            if (!sto.empty())
                if (x > 1 && sto.find(x - 2) != sto.end())
                {
                    sto.erase(sto.find(x - 2));
                }
                else if (x > 2 && sto.find(x - 3) != sto.end())
                {
                    sto.erase(sto.find(x - 3));
                }
            s[x] = '1';
            // ct(x);
            if (n > x + 3 && s.substr(x, 4) == "1100")
            {
                sto.insert(x);
            }
            else if (x > 0 && n > x + 2 && s.substr(x - 1, 4) == "1100")
            {
                sto.insert(x - 1);
            }
        }
        else
        {
            if (!sto.empty())
                if (sto.find(x) != sto.end())
                {
                    sto.erase(sto.find(x));
                }
                else if (x > 0 && sto.find(x - 1) != sto.end())
                {
                    sto.erase(sto.find(x - 1));
                }
            s[x] = '0';
            // ct(x);
            if (x > 1 && n > x + 1 && s.substr(x - 2, 4) == "1100")
            {
                sto.insert(x - 2);
            }
            else if (x > 2 && n > x && s.substr(x - 3, 4) == "1100")
            {
                sto.insert(x - 3);
            }
        }
        if (sto.empty())
        {
            pn;
        }
        else
        {
            py;
        }
        // continue;
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