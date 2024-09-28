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
    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    in(a, n);
    vector<ll> qu(q);
    in(qu, q);
    vector<ll> r(n - 1);
    int curr = n;
    for (int i = 0; i < n - 1; i++)
    {
        ll temp =  1LL*curr * i ;
        r[i] = temp;
        // for(int j=0;j<i;j++)
        // {
        //     r[i]+=curr;
        // }
        r[i] += --curr;
    }
    map<ll, ll> mp;
    int c = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (i == 0)
        {
            mp[r[i]] = a[i + 1] - a[i];
        }
        else
        {
            mp[r[i]]++;
            mp[r[i] - c] += a[i + 1] - a[i] - 1;
        }
        if (i == n - 2)
        {
            mp[r[i] - c]++;
        }
        c++;
    }
    for (int i = 0; i < q; i++)
    {
        cout << mp[qu[i]] << " ";
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