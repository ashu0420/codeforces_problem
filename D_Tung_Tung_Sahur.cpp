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
#define X ct('X')
#define sort(a) sort(a.begin(), a.end());
#define vin(a, n)    \
    vector<ll> a(n); \
    in(a, n);
const int MOD = 1e9 + 7;

using namespace std;

void solve()
{
    // Your code here
    string p, s;
    cin >> p >> s;
    int i = 1, j = 1;
    int k1 = 1, k2 = 1;
    vector<pair<int, char>> pb, sb;
    for (i; i < p.size(); i++)
    {
        if (p[i - 1] != p[i])
        {
            pb.push_back({i, p[i]});
        }
    }
    for (j; j < s.size(); j++)
    {
        if (s[j - 1] != s[j])
        {
            sb.push_back({j, s[j]});
        }
    }
    pb.push_back({p.size(),p[p.size()-1]});
    sb.push_back({s.size(),s[s.size()-1]});
    if (pb.size() != sb.size())
    {
        pn;
        return;
    }
    // ct(pb.size());
    // ct(sb.size());
    int lp = 0, ls = 0;
    for (int i = 0; i < pb.size(); i++)
    {
        if (pb[i].second != sb[i].second)
        {
            pn;
            return;
        }
    }
    for (int i = 0; i < pb.size(); i++)
    {
        if (pb[i].first - lp > sb[i].first - ls || 2 * (pb[i].first - lp) < (sb[i].first - ls))
        {
            pn;
            return;
        }
        lp = pb[i].first;
        ls = sb[i].first;
    }
    py;
    // while (i < p.size() || j < s.size())
    // {
    //     int k1 = 1, k2 = 1;
    //     if (i > j )
    //     {
    //         pn;
    //         // cout<<i<<" "<<j<<endl;|| p.size() - i > s.size() - j || (p.size() - i) <= 2 * (s.size() - j)
    //         return;
    //     }
    //     for (i; i < p.size(); i++)
    //     {
    //         if (p[i - 1] != p[i])
    //         {
    //             i++;
    //             break;
    //         }
    //         else
    //         {
    //             k1++;
    //         }
    //     }
    //     for (j; j < s.size(); j++)
    //     {
    //         if (s[j - 1] != s[j])
    //         {
    //             j++;
    //             break;
    //         }
    //         else
    //         {
    //             k2++;
    //         }
    //     }
    // if (k2 > 1 && i == p.size())
    // {
    //     pn;
    //     return;
    // }

    // if (k1 > k2 || k2 > 2 * k1)
    // {
    //     pn;
    //     // cout<<k1<<" "<<k2<<endl;
    //     return;
    // }
}

// // cout << i << " " << j << endl;
// if(p[i-1]==s[j-1])
// py;
// else
// pn;
// int k1 = 1, k2 = 1;
// for (int i = p.size() - 1; i >= 0; i--)
// {
//     if (p[i - 1] != p[i])
//     {
//         i++;
//         break;
//     }
//     else
//     {
//         k1++;
//     }
// }
// for (int j = s.size() - 1; j >= 0; j--)
// {
//     if (s[j - 1] != s[j])
//     {
//         j++;
//         break;
//     }
//     else
//     {
//         k2++;
//     }
// }
// }

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