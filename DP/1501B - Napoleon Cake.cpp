//
// Created by isund on 17-04-2024.
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


int main() {

    init();

    int t;

    cin>>t;

    while (t--){

        int n;
        cin>>n;

        vector<int> v(n);
        FOR(i, 0, n){
            cin>>v[i];
        }

        vector<int> ans(n, 0);

        FORR(i, n-1){
            if (v[i] == 0){
                continue;
            }
            int lim = v[i];
            bool k = false;
            while (lim--){
                if (i<0){
                    break;
                }
                ans[i] = 1;
                --i;
                if (v[i] >= lim){
                    k = true;
                    break;
                }
            }
            if (k){
                ++i;
            }
        }

        printVector(ans);



    }

    return 0;
}

