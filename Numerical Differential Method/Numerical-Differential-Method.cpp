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

    int diffIndex;

    cout << "Enter differentiation index: ";
    cin >> diffIndex;

    float diffFun = ((y[diffIndex + 1] - y[diffIndex]) / (x[diffIndex + 1] - x[diffIndex]));

    cout << "Numerical Differentiation: " << diffFun; 
    
}