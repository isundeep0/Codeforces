#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pr(a) cout<<a<<endl;


int main() {

  int t;

  cin>>t;

  while (t--){
    int n;
    cin>>n;
    ll sum = 0;
    for (int i = 0; i<n; i++){
      ll val;
      cin>>val;
      sum += val;
    }
    double ans = sqrt(sum);
    if ((int)ans == ans){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
 
  
  return 0; 

}
