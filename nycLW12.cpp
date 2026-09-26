#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int target = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            ans = i;
            cout << "Target found at index: " << ans << endl;
            break;
        } else if (arr[i] < target) {
            ans = i;
            cout << "Last smaller element index: " << ans << endl;
        }
    }

    return 0;
}
