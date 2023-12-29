#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pr(a) cout<<a<<endl;

int main() {

  int t;

  scanf("%d", &t);

  while (t--){
    int n;
    scanf("%d", &n);

    string ans = "NO";

    set<ll> st;
    st.insert(0);

    ll sum = 0;
    
    for (int i = 1; i<=n; i++){
      int v;
      scanf("%d", &v);

      if (i&1){
        v *= -1;
      }

      sum += v;

      if (st.find(sum) != st.end()){
        ans = "YES";
      }
      else{
        st.insert(sum);
      }

    }

    printf("%s\n", ans.c_str());

  }
 
  
  return 0; 

}
