//
// Created by isund on 06-03-2024.
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
#define ps(a) cout << a << " ";
#define all(v) v.begin(), v.end()
#define printVector(v) copy(all(v), ostream_iterator<int>(cout, " "))

void init() {
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("ShitP/input.txt", "r", stdin);
    freopen("ShitP/output.txt", "w", stdout);
#endif
}


int main() {

    init();

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        FOR(i, 0, n){
            cin>>v[i];
        }

        int ans = 0;

        FOR(i, 1, n+1){
            if (n%i == 0){
                int k = n/i, g = 0;
                for (int j = 0; j<k; j++){
                    int diff = 0;
                    for (int l = j; l<n; l += k){
                        diff = __gcd(diff, abs(v[l]-v[j]));
                    }
                    g = __gcd(g, diff);
                }
                if (g != 1){
                    ++ans;
                }
            }
        }

        pr(ans);



    }

    return 0;
}

