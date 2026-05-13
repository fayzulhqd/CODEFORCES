#include <iostream>
#include <string>

using namespace std;

void solve() {
    string w;
    if (!(cin >> w)) return;

   
    if (w.size() >= 2) {
        w.pop_back(); 
        w.pop_back(); 
        w.push_back('i'); 
        cout << w << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
