#include <bits/stdc++.h>
using namespace std;

int main() {

  int T;
  cin>>T;

  while (T--){
    
		int a, b, c;
    cin>>a>>b>>c;

    int sum = a + b + c;

    int val = sum/9;

    if (sum%9 != 0 || c<val || a<val || b<val){
      cout<<"No"<<endl;
    }
    else{
      cout<<"Yes"<<endl;
    }

  }
    
  return 0;
}

