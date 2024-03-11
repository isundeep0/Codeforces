//
// Created by isund on 11-03-2024.
//


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
#define ps(a) cout << a;
#define all(v) v.begin(), v.end()
#define printVector(v) copy(all(v), ostream_iterator<int>(cout, " "))
int mod = 1e9 + 7;

void init() {
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifndef ONLINE_JUDGE
    freopen("ShitP/input.txt", "r", stdin);
    freopen("ShitP/output.txt", "w", stdout);
#endif
}


class DisjointSet{
private:
    vector<int> par, rank;
public:
    DisjointSet(int n){
        par.resize(n+1);
        FOR(i, 0, n+1){
            par[i] = i;
        }
    }

    int findParent(int i){
        if (i == par[i]){
            return i;
        }
        return (par[i] = findParent(par[i]));
    }

    void unionByRank(int i, int j){
        int p1 = findParent(i);
        int p2 = findParent(j);
        if (p1 != p2){
            par[p2] = p1;
        }
    }

    int getComponents(){
        map<int, int> mp;
        FOR(i, 1, par.size()){
            mp[par[i]] = 1;
        }
        return mp.size();
    }


};

int main() {

    init();

    int t;
    cin >> t;

    while (t--) {

        int n;
        cin>>n;

        int arr[2][n];

        DisjointSet d = DisjointSet(n);

        FOR(i, 0, 2){
            FOR(j, 0, n){
                cin>>arr[i][j];
                if (i == 1){
                    d.unionByRank(arr[0][j], arr[i][j]);
                }
            }
        }

        FOR(i, 1, n+1){
            d.findParent(i);
        }

// We Just need to find no. of components. And 2^cnt is the answer.

        int cnt = d.getComponents();

        ll ans = 1;

        while (cnt--){
            ans = (ans*2)%mod;
        }

        pr(ans);

    }

    return 0;
}

