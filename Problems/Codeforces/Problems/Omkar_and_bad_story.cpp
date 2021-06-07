#include <bits/stdc++.h>

using namespace std;

int t,n;

int main() {

    cin >> t;

    while(t--) {
        cin >> n;
        set<int> elements;
        vector<int> arr;
        bool can = true;
        for(int i = 0; i < n; i++) {
            int e;
            cin >> e;
            elements.insert(e);    
            arr.push_back(e);     
        }
        for (int i = 0; i < arr.size(); i++) {
            for (int j = i + 1; j < arr.size(); j++) {
                if (elements.find(abs(arr[i] - arr[j])) == elements.end()) {
                    elements.insert(abs(arr[i] - arr[j]));
                    arr.push_back(abs(arr[i] - arr[j]));
                    i = 0;
                }
                if (elements.size() > 300) {
                    i = arr.size() + 1;
                    can = false;
                }
            }
        }
        if(can) {
            cout << "YES\n" << arr.size() << "\n";
            for(int i = 0; i < arr.size(); i++) {
                cout << arr[i] << " ";
            }
            cout << "\n";
        } else if (can == false) {
            cout << "NO" << "\n";
        }
    }

    return 0;
}