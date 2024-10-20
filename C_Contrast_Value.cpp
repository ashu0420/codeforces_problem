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
    vector<int> a(n);
    in(a, n);
    int count = 2;
    auto last = unique(a.begin(), a.end());
    a.erase(last, a.end());


    // vector<int> b;
    // out(a, a.size());
    // b.push_back(a[0]);
    // fr(int, 1, n)
    // {
    //     if (a[i] != a[i - 1])
    //     {
    //         b.push_back(a[i]);
    //     }
    // }
    // if (b.size() < 3)
    // {
    //     ct(b.size());
    //     return;
    // }
    // fr(int, 1, b.size() - 1)
    // {
    //     if ((b[i] > b[i - 1]) && (b[i] > b[i + 1]) || (b[i] < b[i - 1]) && (b[i] < b[i + 1]))
    //     {
    //         count++;
    //     }
    // }
    if (a.size() < 3)
        {
            ct(a.size());
            return;
        }
        fr(int, 1, a.size() - 1)
        {
            if ((a[i] > a[i - 1]) && (a[i] > a[i + 1]) || (a[i] < a[i - 1]) && (a[i] < a[i + 1]))
            {
                count++;
            }
        }
        ct(count);
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