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
#define ps(a) cout << a<<" ";
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


// Apply Binary Search on answer. Observe Monotonicity.


int main() {

    init();

    int t;
    cin>>t;

    while(t--){
        int n, k;
        cin>>n>>k;

        vector<int> v(n);
        int maxm = 0;
        FOR(i, 0, n){
            cin>>v[i];
            maxm = max(maxm, v[i]);
        }

        int l = 0, h = maxm + k;

        int ans = 0;

        while (l <= h){
            int mid = (l - (l-h)/2);

            bool good = false;

            for (int i = 0; i<n; i++){
                vector<int> minReq(n, 0);
                minReq[i] = mid;
                ll used = 0;
                for (int j = i; j<n; j++){
                    if (minReq[j] <= v[j]){
                        break;
                    }
                    if (j+1 == n){
                        used = k + 1;
                        break;
                    }
                    used += minReq[j] - v[j];
                    minReq[j+1] = minReq[j] - 1;
                }
                if (used <= k){
                    good = true;
                }
            }

            if (good){
                ans = mid;
                l = mid+1;
            }
            else{
                h = mid-1;
            }

        }

        pr(ans);


    }

    return 0;
}

