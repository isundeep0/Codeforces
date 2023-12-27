#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define pr(a) cout<<a<<endl;
#define vtr vector<int>;
#define fr(n) for (int i = 0; i<n; i++);

main() {

  string s;
  cin>>s;

  stack<char> stk;

  for (int i = 0; i<s.size(); i++){
    if (stk.empty()){
      stk.push(s[i]);
      continue;
    }

    if (s[i] == stk.top()){
      stk.pop();
    }
    else{
      stk.push(s[i]);
    }

  }

  if (stk.empty()){
    puts("YES");
  }
  else{
    pr("NO");
  }


}