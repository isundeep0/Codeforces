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
        ll n;
        cin>>n;

        ll ans = 1;

        while (n != 0){
            ll x = n % 10;

            int cnt = 0;

            FOR(i, 0, 10){
                FOR(j, 0, 10){
                    if (i+j > x) continue;
                    ll k = x - i - j;
                    if (i+j+k == x){
                        ++cnt;
                    }
                }
            }

            ans = ans*cnt;

            n /= 10;
        }


        pr(ans);



    }

    return 0;
}

