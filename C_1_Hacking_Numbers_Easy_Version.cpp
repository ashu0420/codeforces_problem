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
void solve() {
    int n;
    cin >> n;

    cout << "digit" << endl;
    int x;
    cin >> x;

    cout << "digit" << endl;
    cin >> x;

    for (int i = 8; i >= 1; i /= 2) {
        cout << "add " << -i << endl;
        cin >> x;
    }

    cout << "add " << n - 1 << endl;
    cin >> x;

    cout << "!" << endl;
    cin >> x;
    assert(x == 1);
}

// void solve()
// {
//     // Your code here
//     int n;
//     cn(n);
//     int y;
//     ct("digit");
//     cn(y);
//     // cout.flush();
//     // cn(y);
//     ct("digit");
//     // cout.flush();
//     cn(y);
//      ct("digit");
//     // cout.flush();

//     // cout << "add " << -8 << endl;
//     // // cout.flush();
//     // cn(y);
//     // cout << "add " << -4 << endl;
//     // // cout.flush();
//     // cn(y);
//     // cout << "add " << -2 << endl;
//     // // cout.flush();
//     // cn(y);
//     // cout << "add " << -1 << endl;
//     // cout.flush();
//     // cn(y);
//     // cout << "add " << -10 << endl;
//     // cout.flush();
//     cn(y);
//     cout << "add " << -5 << endl;
//     // cout.flush();
//     cn(y);
//     if (y)
//     {
//         cout << "div " << 2 << endl;
//         // cout.flush();
//         cn(y);
//         cout << "div " << 2 << endl;
//         // cout.flush();
//         cn(y);
//     }
//     else
//     {
//         cout << "add " << -3 << endl;
//         // cout.flush();
//         cn(y);
//         if (y)
//         {
//             cout << "div " << 2 << endl;
//             // cout.flush();
//         }
//         else
//         {
//             cout << "add " << -2 << endl;
//             // cout.flush();
//         }
//         cn(y);
//     }
//     cout << "add " << n - 1 << endl;
//     // cout.flush();
//     cn(y);
//     ct("!");
//     // cout.flush();
//     cn(y);
//     // assert(y == 1);
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