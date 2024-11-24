#include <iostream>
using namespace std;

int main(){
    int i, n;

    cout << "Enter your total data point: ";
    cin >> n;

    float x[n], y[n];

    for(i = 0; i < n; i++){
        cout << "Enter x[" << (i+1) <<"]: ";
        cin >> x[i];

        cout << "Enter y[" << (i+1) <<"]: ";
        cin >> y[i];
    }

    int firstIndex, lastIndex, total = 0;

    cout << "Enter initial index: ";
    cin >> firstIndex;

    cout << "Enter last index: ";
    cin >> lastIndex;

    float h = ((x[lastIndex] - x[firstIndex]) / (lastIndex - firstIndex));

    float m = y[firstIndex] + y[lastIndex];

    for(i = firstIndex + 1; i < lastIndex; i++){
        total = total + y[i];
    }

    float result = (h / 2) * (m + 2*total);

    cout << "Numerical Integration: " << result;
}