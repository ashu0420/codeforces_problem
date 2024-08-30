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
    li n;
    cn(n);
    string s;
    cn(s);
    // sort(s.begin(),s.end());
    // vector<char> ans(n);
    // li j=0;
    // // ct(s);
    // for(li i=0;i<n;i+=2)
    // {
    //     ans[i]+=s[j];
    //     j++;
    // }

    // for(li i=1;i<n;i+=2)
    // {
    //     ans[i]+=s[j];
    //     j++;
    // }
    // for(li i=0;i<n;i++)
    // {
    //     cout<<ans[i];
    // }
    // cout<<endl;

    map<char, li> mp;
    for (li i = 0; i < n; i++)
    {
        mp[s[i]]++;
    }
    string ans = "";
    auto it = mp.begin();
    auto itb = mp.end();
    prev(itb);
    while (ans.size() != n)
    {
        if (it == mp.end())
        {
            it = mp.begin();
        }
        if (it->second > 0)
        {
            ans += it->first;
            it->second--;
        }
        it++;
        // if (itf != mp.end() && itf->second > 0)
        // {
        //     ans += itf->first;
        //     itf->second--;
        //     if (itf->second == 0)
        //     {
        //         itf++;
        //     }
        // }

        // // Add from the back of the map
        // if (ans.size() < n && itb != mp.end() && itb->second > 0)
        // {
        //     ans += itb->first;
        //     itb->second--;
        //     if (itb->second == 0)
        //     {
        //         if (itb != mp.begin())
        //         {
        //             itb--;
        //         }
        //     }
        // }
    }
    ct(ans);
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