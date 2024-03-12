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
        rank.resize(n+1, 0);
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
            if (rank[p1] > rank[p2]){
                par[p2] = p1;
            }
            else if (rank[p1] < rank[p2]){
                par[p1] = p2;
            }
            else{
                par[p2] = p1;
                rank[p1]++;
            }
        }
    }

    int getComponents(){
        int cnt = 0;
        FOR(i, 0, par.size()-1){
            if (par[i] == i){
                ++cnt;
            }
        }
        return cnt;
    }



};

int main() {

    init();

    int t;
    cin >> t;

    while (t--) {

        int n, m, k;
        cin>>n>>m>>k;

        vector<int> l(n), r(m);

        FOR(i, 0, n){
            cin>>l[i];
        }
        FOR(i, 0, m){
            cin>>r[i];
        }

        int cnt = 0;

        FOR(i, 0, n){
            FOR(j, 0, m){
                if (l[i] + r[j] <= k){
                    ++cnt;
                }
            }
        }

        pr(cnt);



    }

    return 0;
}

