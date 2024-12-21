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
    cn(s);
    int l = -1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            l = i;
            break;
        }
    }
    string temp = "";
    if (l == -1)
    {
        cout << "1 " << s.size() << " 1 1" << endl;
        return;
    }
    for (int i = l; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            temp += "1";
        }
        else
        {
            temp += "0";
        }
    }
    // ct(temp);
    vector<ll> v(s.size(), -1);
    // ll po = 1;
    // for (int i = 1; i < temp.size(); i++)
    // {
    //     po *= 2;
    // }
    // // ct(po);
    // unordered_map<int,vector<int>> mp;
    for (int i = 0; i <= l; i++)
    {
        ll count = 0;
        // ll p = po;
        for (int k = 0; k < temp.size(); k++)
        {
            if (temp[k] == s[i + k])
            {
                // count += p;
                count++;
            }
            else
            {
                // v[i] = count;
                break;
            }
            // p /= 2;
        }
        v[i] = count;
        // mp[count].push_back(i);
    }
    // out(v,v.size());
    ll check = LONG_LONG_MIN;
    ll ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (v[i] > check)
        {
            check = v[i];
            ans = i;
        }
    }
    // if(mp[check].size()>1)
    // {

    // }
    cout << "1 " << s.size() << " " << ans + 1 << " " << ans + temp.size() << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(10);
    cout.setf(ios::fixed);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}