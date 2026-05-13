#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        long long n, w;
        cin >> n >> w;
        
        cout << n - n/w << "\n";
    }
    
    return 0;
}