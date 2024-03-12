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


void fry(queue<int>& q){
    set<int> s;
    while (!q.empty()){
        s.insert(q.front());
        q.pop();
    }
    for (auto const i : s){
        q.push(i);
    }
}



int main() {

    init();

    int t;
    cin >> t;

    while (t--) {

        int n, m, x;
        cin>>n>>m>>x;

        queue<int> q;

        set<int> st;

        st.insert(x);

        q.push(x);

        while (m--){
            int d;
            char c;
            cin>>d>>c;
            int size = q.size();
            while (size--){
                int curr = q.front();
                q.pop();

                int acl = (curr - d <= 0 ? n + curr - d : curr - d);
                int cl = (curr + d > n ? curr + d - n : curr + d);

                if (c == '?'){
                    q.push(acl);
                    q.push(cl);
                }
                else if (c == '0'){
                    q.push(cl);
                }
                else{
                    q.push(acl);
                }
            }
            fry(q);
        }

        vector<int> ans;

        while (!q.empty()){
            ans.pb(q.front());
            q.pop();
        }

        sort(ans.begin(), ans.end());

        pr(ans.size());

        printVector(ans);


    }

    return 0;
}

