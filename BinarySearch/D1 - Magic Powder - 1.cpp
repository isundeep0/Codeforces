#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<int> a, b;

// Calculating the number of additional grams required
int gramsNeeded(int x){
  int gms = 0;
  for (int i = 0; i<a.size(); i++){
    gms = gms + max(x*a[i] - b[i], 0);
  }
  return gms;
}

int main() {

  int n, k;
  cin>>n>>k;

  a.resize(n);
  b.resize(n);

  for (int i = 0; i<n; i++){
    cin>>a[i];
  }

  for (int i = 0; i<n; i++){
    cin>>b[i];
  }

  int low = 0, high = k + 1000; // n = 1, a = {1}, b = {1000} and k = 1000 => She can make 2000 cookies which is max.

  while (low <= high){
    
    int mid = (low + high)/2;
    int gramsReq = gramsNeeded(mid);

    if (gramsReq > k){
      high = mid - 1;
    }
    else{
      if (gramsReq <= k && gramsNeeded(mid+1) > k){
        cout<<mid<<endl;
        return 0;
      }
      else{
        low = mid + 1;
      }
    }

  }

  return 0;

}