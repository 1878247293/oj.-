#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
void sort(int w, int arr[], int& n) {
    int left = 0;
    int right = n - 1;
    int index = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] > w) {
            index = mid;
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }

    if (index != -1) {
        arr[index] = w;
    }
    else {
        arr[n] = w;
        n++;
    }
}
int main() {
    int n = 0;
    cin >> n;
    int num = 0;
    int w = 0;
    int* k = (int*)malloc(500000 * 4);
    for (int i = 0;i < n;i++) {
        cin >> w;
        if (num == 0) {
            k[0] = w;
            num++;
        }
        else {
            sort(w, k, num);
        }
    }
    cout << num;
    return 0;
}