#include <bits/stdc++.h>
using namespace std;


string check(int a, string b){
  string ans = "";
  while (a--){
    ans += b;
  }
  return ans;
}

int main() {

  int q;
  cin>>q;

  while (q--){
    string s, t;
    cin>>s>>t;

    long long int  g = __gcd(s.size(), t.size());

    if (check(s.size()/g, t) == check(t.size()/g, s)){
      cout<<check(s.size()/g, t)<<endl;
    }
    else{
      cout<<-1<<endl;
    }

    //haha


  }
    
  return 0;
}

