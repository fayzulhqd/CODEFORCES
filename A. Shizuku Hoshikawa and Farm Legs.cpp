#include <bits/stdc++.h>
using namespace std;

void slv(){
    
    int n;
    cin >> n;
if(n%2!=0){
     cout<<0<<endl;
}else{
    cout<<(n/4)+1<<endl;
}
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        slv();
    }
}