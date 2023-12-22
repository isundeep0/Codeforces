#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int n, m;
vector<int> v;

bool check(int x){

  if (x < 0){
    return false;
  }


  int prev = 0;

  for (int i = 0; i<n; i++){

    if (prev <= v[i]){
      
      int k = m - (v[i] - prev);

// No matter what v[i] + k will never exceed 2*m, if v[i] + k >= m then instead of mod we can just -m. to find k(No. increments needed).

      if (k > x){
        prev = v[i];
      }

    }
    else{
      int k = prev - v[i];
      if (k > x){
        return false;
      }
    }
  }

  return true;

}

int main() {

   cin>>n>>m;

   v.resize(n);

   for (int i = 0; i<n; i++){
    cin>>v[i];
   }

   int low = 0, high = 3000000;

   while (low <= high){
    
    int mid = (low+high)/2;

    bool p = check(mid);

    if (p == false){
      low = mid + 1;
    }
    else{
      if (!check(mid-1) && p){
        cout<<mid<<endl;
        return 0;
      }
      else{
        high = mid - 1;
      }
    }

   }



  return 0;

}