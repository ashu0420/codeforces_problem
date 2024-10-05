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
bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    if (a.first != b.first)
    {
        return a.first > b.first;
    }
    return a.second < b.second;
}

void solve()
{
    // Your code here
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v(n);
    fr(int, 0, n)
    {
        int x;
        cn(x);
        if (x % k != 0)
            v[i].first = x % k;
        else
            v[i].first = k;
        v[i].second = i + 1;
    }
    // sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
    //     // Sort by first element in descending order
    //     if (a.first != b.first) {
    //         return a.first > b.first; // Descending
    //     }
    //     // If first elements are equal, sort by second element in ascending order
    //     return a.second < b.second; // Ascending
    // });
    sort(v.begin(), v.end(), cmp);
    fr(int, 0, n)
    {
        cout << v[i].second << " ";
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