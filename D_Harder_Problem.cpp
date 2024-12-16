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
    unordered_map<int, int> mp;
    int j = 0;
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        if (mp[v[i]] == 0)
        {
            cout << v[i] << " ";
            j++;
            mp[v[i]]++;
        }
    }
    for(int i=1;i<=n&&j<n;i++)
    {
        if(mp[i]==0)
        {
            cout<<i<<" ";
            j++;
        }
    }
    // sort(v.begin(), v.end());
    // vector<int> rest;
    // for (int i = 0; i < n; i++)
    // {
    //     if (v[i] == k)
    //     {
    //         k++;
    //     }
    //     else if (v[i] < k)
    //     {
    //         continue;
    //     }
    //     else if (v[i] > k)
    //     {
    //         rest.push_back(k);
    //         k++;
    //     }
    // }
    // for (auto it : rest)
    // {
    //     cout << it << " ";
    //     j++;
    // }
    // for (j; j < n; j++)
    // {
    //     cout << k++ << " ";
    // }
    cout << endl;
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