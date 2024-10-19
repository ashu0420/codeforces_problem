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
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    in(v, n);
    string s;
    cn(s);
    vector<int> check(n - 1, 0);
    set<int> sec;
    for (int i = 0; i < n - 1; i++)
    {
        while (!sec.empty() && *sec.begin() <= i + 1)
        {
            sec.erase(sec.begin());
        }
        if (v[i] <= i + 1 && sec.empty())
        {
            check[i] = 1;
        }
        else
        {
            sec.insert(v[i]);
            // break;
        }
    }
 
    unordered_set<int> qw;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'L' && s[i + 1] == 'R' and check[i] == 0)
        {
            qw.insert(i);
        }
    }
    for (int i = 0; i < q; i++)
    {
        int x;
        cn(x);
        bool flag = 1;
        if (s[x - 1] == 'L')
        {
            s[x - 1] = 'R';
            if (qw.find(x - 1) != qw.end())
            {
                qw.erase(qw.find(x - 1));
                if (s[x - 2] == 'L' && x - 2 >= 0 && check[x - 2] == 0)
                    qw.insert(x - 2);
            }
            else
            {
                if (s[x - 2] == 'L' && x - 2 >= 0&& check[x - 2] == 0)
                    qw.insert(x - 2);
            }
        }
        else
        {
            s[x - 1] = 'L';
            if (qw.find(x - 2) != qw.end())
            {
                qw.erase(qw.find(x - 2));
                if (s[x] == 'R' && x < n&& check[x - 1] == 0)
                    qw.insert(x - 1);
            }
            else
            {
                if (s[x] == 'R' && x < n&& check[x - 1] == 0)
                    qw.insert(x - 1);
            }
        }
        if(qw.empty())
        {
            py;
        }
        else
        {
            pn;
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