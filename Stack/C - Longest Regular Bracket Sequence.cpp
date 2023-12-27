#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pr(a) cout<<a<<endl;


int main() {

  string s;
  cin>>s;

  int n = s.size();

  stack<int> stk;
  vector<int> dp(n, 0);

  int length = 0, cnt = 1;

  for (int i = 0; i<n; i++){
    
    if (s[i] == '('){
      stk.push(i);
      continue;
    }
    
    if (stk.empty()) continue;  //clearly ignoring ')'

    int j = stk.top();
    stk.pop();

    dp[i] = i - j + 1 + (j>0 ? dp[j-1] : 0);  // s = "()()()";  dry run this.

    if (dp[i] > length){
      length = dp[i];
      cnt = 1;
    }
    else if (dp[i] == length){
      ++cnt;
    }

  }

  cout<<length<<" "<<cnt<<endl;

  
  return 0; 

}
