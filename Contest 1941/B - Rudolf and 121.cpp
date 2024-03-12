//
// Created by isund on 12-03-2024.
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

//class DisjointSet{
//private:
//    vector<int> par, rank;
//public:
//    DisjointSet(int n){
//        par.resize(n+1);
//        rank.resize(n+1, 0);
//        FOR(i, 0, n+1){
//            par[i] = i;
//        }
//    }
//
//    int findParent(int i){
//        if (i == par[i]){
//            return i;
//        }
//        return (par[i] = findParent(par[i]));
//    }
//
//    void unionByRank(int i, int j){
//        int p1 = findParent(i);
//        int p2 = findParent(j);
//        if (p1 != p2){
//            if (rank[p1] > rank[p2]){
//                par[p2] = p1;
//            }
//            else if (rank[p1] < rank[p2]){
//                par[p1] = p2;
//            }
//            else{
//                par[p2] = p1;
//                rank[p1]++;
//            }
//        }
//    }
//
//    int getComponents(){
//        int cnt = 0;
//        FOR(i, 0, par.size()-1){
//            if (par[i] == i){
//                ++cnt;
//            }
//        }
//        return cnt;
//    }
//
//
//
//};



vector<int> computeLPS(string pattern)
{

    int m = pattern.size();

    vector<int> LPS(m, 0);

    int j = 0;

    for (int i = 1; i < m; i++)
    {

        while (j > 0 && pattern[j] != pattern[i])
        {
            j = LPS[j - 1];
        }

        if (pattern[j] == pattern[i])
        {
            ++j;
        }
        LPS[i] = j;
    }


    return LPS;
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

        string ans = "YES";

        FOR(i, 0, n-2){
            if (v[i] == 0){
                continue;
            }
            else if (v[i] < 0){
                ans = "NO";
                break;
            }
            else{
                v[i+1] -= v[i]*2;
                v[i+2] -= v[i];
            }
        }

        if (v[n-1] != 0 || v[n-2] != 0){
            ans = "NO";
        }

        pr(ans);






    }

    return 0;
}

