#include <iostream>
using namespace std;
int main() {
    int arr[100];
    int arr_cnt[10] = { 0, };

    for (int i = 0; i < 100; i++) {
        cin >> arr[i];
        if (arr[i] == 0) break;
        if (arr[i] >= 10 && arr[i] < 100) {
            arr_cnt[arr[i] / 10]++;

        }
    }
    for (int i = 1; i < 10; i++) {
        cout << i << " - " << arr_cnt[i] << endl;
    }
    return 0;
}