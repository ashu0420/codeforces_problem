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
    int n;
    cn(n);
    vector<li> v((n * (n - 1)) / 2);
    for (li i = 0; i < (n * (n - 1)) / 2; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    li i = 0;
    li c = n - 1;
    while (i != ((n * (n - 1)) / 2) - 1)
    {
        cout << v[i] << " ";
        i += (c--);
        // c--;
    }
    cout << v[i] << " ";
    cout << v[i] << " \n";
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}