#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    for (int t = 0; t < T; ++t) {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }
        
        int maxi = 0;
        vector<int> count(n + 1, 0);
        int currentCount = 0;
        
        for (int i = 0; i < n; ++i) {
            if (count[arr[i]] == 0) {
                count[arr[i]] = 1;
                currentCount++;
                maxi = max(maxi, currentCount);
            } else {
                count[arr[i]] = 0;
                currentCount--;
            }
        }
        
        cout << maxi << endl;
    }
    
    return 0;
}
