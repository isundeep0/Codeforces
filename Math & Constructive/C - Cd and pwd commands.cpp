#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pr(a) cout<<a<<endl;


void toParent(string& path){
  int lastSlashIndex = path.find_last_of('/');
  path.erase(lastSlashIndex);
}

int main() {

  int t;
  cin>>t;
  ++t;

  string path = "/";

  while (t--){
    
    string command;

    getline(cin, command);

    if (command == "pwd"){
      if (path[path.size()-1] != '/'){
        path += '/';
      }
      pr(path);
    }
    else{
      command.erase(0, 3);
      if (command[0] == '/'){
        path = "/";
        command.erase(command.begin());
      }
      if (path[path.size()-1] != '/'){
        path += '/';
      }
      for (int i = 0; i<command.size(); i++){
        if (command[i] == '/' && command[i+1] == '.'){
          toParent(path);
          i += 2;
        }
        else if (command[i] == '.'){
          for (int j = 0; j<2; j++){
            toParent(path);
          }
          ++i;
        }
        else{
          path += command[i];
        }
      }
    }

  }
  
  return 0; 

}
