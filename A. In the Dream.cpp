#include <bits/stdc++.h>
using namespace std;

bool valid(int x, int y){
    if(x > 2 *(y+1) || y > 2*(x+1)){
     return false;
}
return true;
}
void slv(){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    if(c < a || d < b){
        cout << "NO\n";
        return;
    }
    bool round_1=valid(a,b);
    bool round_2=valid(c-a,d-b);
   if(round_1 && round_2){
    cout << "YES\n";

}else{
    cout << "NO\n";
}
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
   if (!(cin >> t)) return 0;

  while(t--){
    slv();
  } 
}