#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 2, 1, 1, 3};
    sort(arr.begin(), arr.end());
    vector<int> count;

    for (int i = 0; i < arr.size();) {
        int c = 1;
        while (i + 1 < arr.size() && arr[i] == arr[i + 1]) {
            c++;
            i++;
        }
        count.push_back(c);
        i++;
    }

    for (int i = 0; i < count.size(); i++) {
        cout << count[i] << " ";
    }

    return 0;
}
