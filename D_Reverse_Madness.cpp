// // #include <iostream>
// // #include <bits/stdc++.h>

// // using namespace std;

// // void getreverse(string &str, int a, int b)
// // {
// //     int i, j;
// //     i = a;
// //     j = b;
// //     while (i < j)
// //     {
// //         swap(str[i - 1], str[j - 1]);
// //         i++;
// //         j--;
// //     }
// // }

// // int main()
// // {
// //     int t;
// //     cin >> t;
// //     while (t--)
// //     {
// //         long n, k;
// //         cin >> n >> k;
// //         string str;
// //         cin >> str;
// //         vector<long> l(k), r(k);
// //         for (long i = 0; i < k; i++)
// //         {
// //             cin >> l[i];
// //         }
// //         for (long i = 0; i < k; i++)
// //         {
// //             cin >> r[i];
// //         }
// //         unordered_map<long, long> mp;
// //         for (long i = 0; i < k; i++)
// //         {
// //             for (long j = l[i]; j <= r[i]; j++)
// //             {
// //                 mp[j] = i;
// //             }
// //         }
// //         long q;
// //         cin >> q;
// //         vector<long> x(q);
// //         unordered_map<long, long> hh;
// //         for (long i = 0; i < q; i++)
// //         {
// //             cin >> x[i];
// //         }
// //         unordered_map<long, set<long>> ret;
// //         for (long i = 0; i < q; i++)
// //         {

// //             long a, b;
// //             a = min(x[i], l[mp[x[i]]] + r[mp[x[i]]] - x[i]);
// //             hh[a]++;
// //             ret[mp[x[i]]].insert(a);

// //             b = max(x[i], l[mp[x[i]]] + r[mp[x[i]]] - x[i]);
// //             // for (int j = 0; j < k; j++)
// //             // {
// //             //     if (x[i] >= l[j] && x[i] <= r[j])
// //             //     {
// //             //
// //             //         break;
// //             //     }
// //             // }
// //             // reverse(str.begin()+a,str.begin()+b);
// //             // getreverse(str, a, b);
// //             // cout<<a<<b<<endl;
// //         }
// //         vector<int> state(n + 1, 0);
// //         for (int i = 0; i < k; i++)
// //         {
// //             for (auto it : ret[i])
// //             {
// //                 if (hh[it] % 2 == 1)
// //                 {
// //                     // cout << it << " ";
// //                     for (int k = it; k <= ((l[i] + r[i]) / 2); k++)
// //                     {
// //                         // cout<<"k";
// //                         if (state[k] == 0)
// //                         {
// //                             state[k] = 1;
// //                         }
// //                         else
// //                         {
// //                             state[k] = 0;
// //                         }
// //                     }
// //                 }
// //             }
// //         }
// //         // for (int i = 1; i <= n; i++)
// //         // {
// //         //     cout << state[i] << " ";
// //         // }
// //         for (int i = 1; i <= n; i++)
// //         {
// //             if (state[i] == 1)
// //             {
// //                 swap(str[i - 1], str[(l[mp[i]] + r[mp[i]] - i) - 1]);
// //             }
// //         }
// //         cout << str << endl;
// //     }
// //     return 0;
// // }
// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// // Function to reverse a segment of a string
// void reverseSegment(string &str, int left, int right) {
//     while (left < right) {
//         swap(str[left - 1], str[right - 1]); // 1-based to 0-based index
//         left++;
//         right--;
//     }
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         long n, k;
//         cin >> n >> k;

//         string str;
//         cin >> str;

//         vector<long> l(k), r(k);
//         for (long i = 0; i < k; i++) cin >> l[i];
//         for (long i = 0; i < k; i++) cin >> r[i];

//         long q;
//         cin >> q;
//         vector<long> queries(q);
//         for (long i = 0; i < q; i++) cin >> queries[i];

//         // State to track the number of reversals at each position
//         vector<int> state(n + 1, 0);

//         // Process each query
//         for (long x : queries) {
//             int segment = -1;
//             for (int i = 0; i < k; i++) {
//                 if (x >= l[i] && x <= r[i]) {
//                     segment = i;
//                     break;
//                 }
//             }
//             if (segment != -1) {
//                 long mirrorPos = l[segment] + r[segment] - x; // Mirror position
//                 int start = min(x, mirrorPos);
//                 for(int k=start;k<=l[segment]+r[segment]-start;k++)
//                 state[k] ^= 1; // Toggle state at the start
//             }
//         }
//         // for(int i=1;i<=n;i++)
//         // {
//         //     cout<<state[i]<<" ";
//         // }
//         // Apply reversals where needed
//         for (int i = 0; i < k; i++) {
//             int left = l[i], right = r[i];
//             for (int pos = left; pos <= (left + right) / 2; pos++) {
//                 if (state[pos]) {
//                     int mirrorPos = left + right - pos;
//                     swap(str[pos - 1], str[mirrorPos - 1]); // Swap mirrored positions
//                 }
//             }
//         }

//         cout << str << endl;
//     }

//     return 0;
// }
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long n, k;
        cin >> n >> k;

        string str;
        cin >> str;

        vector<long> l(k), r(k);
        for (long i = 0; i < k; i++) cin >> l[i];
        for (long i = 0; i < k; i++) cin >> r[i];

        long q;
        cin >> q;
        vector<long> freq(n + 2, 0); // Range updates using difference array

        // Process each query and mark the toggle ranges
        while (q--) {
            long x;
            cin >> x;

            // Binary search to find the segment containing x
            int low = 0, high = k - 1, segment = -1;
            while (low <= high) {
                int mid = (low + high) / 2;
                if (x >= l[mid] && x <= r[mid]) {
                    segment = mid;
                    break;
                }
                if (x < l[mid]) high = mid - 1;
                else low = mid + 1;
            }

            if (segment != -1) {
                long mirrorPos = l[segment] + r[segment] - x;
                long start = min(x, mirrorPos), end = max(x, mirrorPos);
                freq[start] ^= 1;  // Toggle range start
                freq[end + 1] ^= 1; // Toggle range end + 1
            }
        }

        // Calculate final toggle states using prefix sum
        vector<int> state(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            freq[i] ^= freq[i - 1];
            state[i] = freq[i]; // Final state at position i
        }

        // Apply swaps to the string based on final toggle states
        for (int i = 0; i < k; i++) {
            int left = l[i], right = r[i];
            for (int pos = left; pos <= (left + right) / 2; pos++) {
                if (state[pos]) {
                    int mirrorPos = left + right - pos;
                    swap(str[pos - 1], str[mirrorPos - 1]);
                }
            }
        }

        cout << str << endl;
    }

    return 0;
}
