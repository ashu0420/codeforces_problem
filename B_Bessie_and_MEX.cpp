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
    vector<int> v(n);
    in(v, n);
    map<int, int> curr;
    for (int i = 0; i < n; i++)
    {
        curr[i] = 1;
    }
    int i = 0;
    int j = 0;
    while (j < n)
    {

        if (curr[i] != 0)
        {
            if (v[j] > 0)
            {

                cout << i << " ";
                curr[i] = 0;

                i++;
            }
            else
            {
                curr[i + abs(v[j])] = 0;

                cout << (i + abs(v[j])) << " ";
            }
            j++;
        }
        else
        {
            i++;
        }
    }
    cout << endl;
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