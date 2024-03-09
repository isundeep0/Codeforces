//
// Created by isund on 09-03-2024.
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
#define ps(a) cout << a;
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
        string s;
        ll pos;
        cin>>s>>pos;
        --pos;

        int currLen = s.size();

        vector<char> stk;

        bool ok = pos < currLen;

        s += '!';

        FOR(i, 0, s.size()){
            while (!ok && stk.size() && stk.back() > s[i]){
                pos -= currLen;
                --currLen;
                stk.pop_back();
                if (pos < currLen){
                    ok = true;
                }
            }
            stk.pb(s[i]);
        }

        ps(stk[pos]);


    }

    return 0;
}

