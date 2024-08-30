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
    int n, k;
    cin >> n >> k;
    // map<li,li> mp;
    // for(li i=0;i<n;i++)
    // {
    //     li x,f;
    //     cin>>x;
    //     mp[x]=i;
    // }
    // sort(mp.begin(),mp.end());
    // auto it=prev(mp.end());
    // li mele= it->first;
    // for(auto it:mp)
    // {
    //     it.first/=(2*k);
    // }
    vector<pair<li, li>> v;
    li mele = 0;
    li melei = 0;
    for (li i = 0; i < n; i++)
    {
        li x, f;
        cin >> x;
        if (mele < x)
        {
            mele = x;
            melei = i;
        }
        v[i].first = x / (2 * k);
        v[i].second = i;
    }
    sort(v.begin(), v.end());
    for (li i = 0; i < n - 1; i++)
    {
        v[i].first = v[n - 1].first - v[i].first;
    }
    bool flagl = 0, flagu = 0;
    for (li i = 0; i < n - 1; i++)
    {
        if (v[i].first > 0 && v[i].first <= k)
        {
            flagl = 1;
        }
        else if ((v[i].first > k && v[i].first < 2 * k) || v[i].first == 0)
        {
            flagu = 1;
        }
    }
    sort(v.begin(), v.end());
    if (flagl ^ flagu )
    {
        if(melei!=v[n-1].second)
        {
            
        }
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
}