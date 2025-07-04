#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define cn(n) cin >> n
#define ct(c) cout << c << endl
#define fr(dt, a, b) for (dt i = a; i < b; i++)
#define in(a, n) fr(ll, 0, n) { cin >> a[i]; }

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve()
{
    int n;
    cn(n);
    vector<pair<int, int>> vp(n);
    for (auto &i : vp) {
        cin >> i.first >> i.second;
    }

    sort(vp.begin(), vp.end(), [](const auto &a, const auto &b) {
        return a.second < b.second;
    });

    ll ans = 0;
    ordered_set<int> s;

    for (auto &[a, b] : vp)
    {
        // Number of elements >= a is total size - number of elements < a
        int dis = s.size() - s.order_of_key(a);
        s.insert(a);
        ans += dis;
    }

    ct(ans);
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
