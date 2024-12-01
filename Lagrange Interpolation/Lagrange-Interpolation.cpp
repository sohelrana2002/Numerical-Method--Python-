#include <iostream>
using namespace std;

int main(){
    int i, j, n;
    
    cout << "Enter num of data points: ";
    cin >> n;

    float x[n], y[n];

    for(i = 0; i< n; i++){
        cout << "Enter the data of x[" << (i+1) << "]: ";
        cin >> x[i];

        cout << "Enter the data of y[" << (i+1) << "]: ";
        cin >> y[i];
    }

    float unknownVal, result = 0;
    cout << "Enter unknown value: ";
    cin >> unknownVal;

    for(i = 0; i < n; i++){
        float temp = y[i];

        for(j = 0; j < n; j++){
            if(i != j){
                temp = temp * ((unknownVal - x[j]) / (x[i] - x[j]));
            }
        }

        result = result + temp;
    }

    cout << "The value of Yn(" << unknownVal <<"): " << result;
}