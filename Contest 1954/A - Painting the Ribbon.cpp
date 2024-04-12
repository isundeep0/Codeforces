//
// Created by isund on 12-04-2024.
//
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define f first
#define s second
#define pb push_back
#define FOR(i, a, n) for (int i = a; i<n; i++)
#define FORR(i, n) for (int i = n; i>=0; i--)
#define pr(a) cout << a << endl;
#define in(a) cin>>a;
#define ps(a) cout <<a<<" ";
#define all(v) v.begin(), v.end()
#define printVector(v) copy(all(v), ostream_iterator<int>(cout, " ")), cout<<"\n"
int mod = 1e9 + 7;

void init() {
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("ShitP/input.txt", "r", stdin);
    freopen("ShitP/output.txt", "w", stdout);
#endif
}

int findMostFrequent(const std::vector<int>& vec) {
    // Create a frequency map to count occurrences of each element
    std::unordered_map<int, int> freqMap;
    for (int num : vec) {
        freqMap[num]++;
    }

    // Find the element with the maximum frequency
    auto maxFreqElement = std::max_element(freqMap.begin(), freqMap.end(),
                                           [](const auto& a, const auto& b) {
                                               return a.second < b.second; // Compare frequencies
                                           });

    // Return the most frequent element
    return maxFreqElement->first;
}


int main() {

    init();

    int t;

    cin>>t;

    while (t--){

        int n, m, k;

        cin>>n>>m>>k;

        vector<int> v(n);
        int l = 1;
        FOR(i, 0, n){
            v[i] = l%(m+1);
            ++l;
            if (v[i] == 0){
                v[i] = l%(m+1);
                ++l;
            }
//            ps(v[i]);
        }

        sort(v.begin(), v.end());

        int e = findMostFrequent(v);

        int cnt = 0;

        FOR(i, 0, n){
            if (v[i] == e){
                continue;
            }
            else{
                ++cnt;
            }
        }

        if (cnt <= k){
            pr("NO");
        }
        else{
            pr("YES");
        }







    }
// 5 2 1

// 1 2

    return 0;
}

