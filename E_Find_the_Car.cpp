// #include <bits/stdc++.h>
// #define ll long long
// #define li long
// #define cn(n) cin >> n
// #define py cout << "YES" << endl
// #define pn cout << "NO" << endl
// #define ct(c) cout << c << endl
// #define fr(dt, a, b) for (dt i = a; i < b; i++)
// #define in(a, n) \
//     fr(ll, 0, n) { cn(a[i]); }
// #define in1(a, n) \
//     fr(ll, 1, n + 1) { cn(a[i]); }
// #define out(a, n)                         \
//     fr(ll, 0, n) { cout << a[i] << " "; } \
//     cout << endl;
// #define out1(a, n)                            \
//     fr(ll, 1, n + 1) { cout << a[i] << " "; } \
//     cout << endl;
// #define X ct('X')
// #define srt(a) sort(a.begin(), a.end());
// #define rev(a) reverse(a.begin(), a.end());
// #define vin(a, n)    \
//     vector<ll> a(n); \
//     in(a, n);
// #define vin1(a, n)       \
//     vector<ll> a(n + 1); \
//     in1(a, n);
// const int MOD = 1e9 + 7;

// using namespace std;

// void solve()
// {
//     // Your code here
//     int n, k, q;
//     cin >> n >> k >> q;
//     vin1(a, k);
//     vin1(b, k);
//     a[0] = 0;
//     b[0] = 0;
//     // vector<int> dis(n + 1);

//     // for (int i = 1; i <= k; i++)
//     // {
//     //     float sp = static_cast<float>(a[i] - a[i - 1]) / (b[i] - b[i - 1]);
//     //     // ct(sp);
//     //     int curr = 0;
//     //     // out(a,k);
//     //     for (int j = a[i - 1]; j <= a[i]; j++, curr++)
//     //     {
//     //         int ctd = curr / sp;
//     //         dis[j] = dis[a[i - 1]] + ctd;
//     //         // ct(ctd);
//     //         // X;
//     //     }
//     // }
//     // out(dis,n+1);
//     while (q--)
//     {
//         int d;
//         cn(d);
//         int st = 0;
//         int en = k;
//         int mid;
//         bool f = 0;
//         while (st<=en)
//         {
//             mid = (st + en) / 2;
//             // if (a[mid] == d)
//             // {
//             //     cout << b[mid] << " ";
//             //     f = 1;
//             //     break;
//             // }
//             if (a[mid] > d)
//             {
//                 en = mid-1;
//             }
//             else
//             {
//                 st = mid+1;
//             }
//         }
//         if(a[en] == d)
//         {
//             cout << b[en] << " ";
//             continue;
//         }
//         long long ans = b[en] + (d-a[en])*(b[en+1]-b[en])/(a[en+1]-a[en]);
//         cout << ans << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     cout.tie(nullptr);
//     cout.precision(10);
//     cout.setf(ios::fixed);
//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }
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
#define in1(a, n) \
    fr(ll, 1, n + 1) { cn(a[i]); }
#define out(a, n)                         \
    fr(ll, 0, n) { cout << a[i] << " "; } \
    cout << endl;
#define out1(a, n)                            \
    fr(ll, 1, n + 1) { cout << a[i] << " "; } \
    cout << endl;
#define X ct('X')
#define srt(a) sort(a.begin(), a.end());
#define rev(a) reverse(a.begin(), a.end());
#define vin(a, n)    \
    vector<ll> a(n); \
    in(a, n);
#define vin1(a, n)       \
    vector<ll> a(n + 1); \
    in1(a, n);
const int MOD = 1e9 + 7;

using namespace std;

void solve()
{
    // Your code here
    int n, k, q;
    cin >> n >> k >> q;
    vin1(a, k);
    vin1(b, k);

    while (q--)
    {
        int d;
        cn(d);
        int st = 0;
        int en = k;
        int mid;
        while (en - st > 1)
        {
            mid = (st + en) / 2;
            if (a[mid] > d)
            {
                en = mid;
            }
            else
            {
                st = mid;
            }
        }
        if(a[st]==d)
        {
            cout<<b[st]<<" ";
            continue;
        }
        if(a[en]==d)
        {
            cout<<b[en]<<" ";
            continue;
        }
        ll ans= b[st] +(d - a[st]) * (b[en] - b[st]) / (a[en] - a[st]);
        // double estimated_time = b[st] + (double)(d - a[st]) * (b[en] - b[st]) / (a[en] - a[st]);
        // int ans = static_cast<int>(estimated_time); // Always rounds down
        cout << ans << " ";
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cout.precision(2);
    cout.setf(ios::fixed);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}