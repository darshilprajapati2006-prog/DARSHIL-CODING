#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements (N): ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " integers:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "\nArray Elements: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    int sum = 0;
    int max = arr[0];
    int min = arr[0];

    for(int i = 0; i < n; i++) {
        sum += arr[i];
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }

    float avg = (float)sum / n;

    cout << "\n\nSum = " << sum;
    cout << "\nAverage = " << avg;
    cout << "\nMaximum = " << max;
    cout << "\nMinimum = " << min;

    return 0;
}
