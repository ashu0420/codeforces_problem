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
    string s;
    int n;
    cn(n);
    cn(s);
    reverse(s.begin(), s.end());
    // method1
    ll count=0;
    ll j=0;
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            ans+=count;
            cout<<ans<<" ";
            j++;
        }
        else
        {
            count++;
        }
    }
    for(j;j<n;j++)
    {
        cout<<"-1 ";
    }
    cout<<endl;

    //method 2
    // vector<pair<ll, ll>> p(n);
    // ll count = 0;
    // ll sum1 = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     if (s[i] == '1')
    //     {
    //         count++;
    //         sum1 += i;
    //     }
    //     p[i] = {sum1, count};
    // }
    // vector<pair<ll, ll>> s0;
    // int k = 0;
    // s0.push_back({0, -1});
    // for (int i = 0; i < n; i++)
    // {
    //     if (s[i] == '0')
    //     {
    //         s0.push_back({s0[k].first + i, i});
    //         k++;
    //     }
    // }
    // // for (int i = 0; i < n; i++)
    // // {
    // //     // cout<<p[i].first<<" ";
    // // }
    // // cout << endl;
    // vector<ll> ans(n);
    // int j = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     while (s0[j].second <= i && j < s0.size())
    //     {
    //         j++;
    //     }
    //     if (j == s0.size() && p[i].second != 0)
    //     {
    //         ans[i] = -1;
    //     }
    //     else if (j - 1 + p[i].second < s0.size())
    //         ans[i] = s0[j - 1 + p[i].second].first - s0[j - 1].first - p[i].first;
    //     else
    //         ans[i] = -1;
    // }
    // out(ans, n);
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