#include <iostream>
using namespace std;

float cal_p(float p, int n){
    float temp = p;

    for(int i = 1; i < n; i++){
        temp = temp * (p - i);
    }

    return temp;
};

float cal_factorial(int n){
    float fact = 1;

    for(int i = 2; i <= n; i++){
        fact = fact * i;
    }

    return fact;
}

int main(){
    int i, j, k, n;
    cout << "Total of known values: ";
    cin >> n;

    float x[n], arr[n][n];

    for(i = 0; i < n; i++){
        cout << "Enter x[" << (i+1) <<"]: ";
        cin >> x[i];
    }

    for(i = 0; i < n; i++){
        cout << "Enter y[" << (i+1) <<"]: ";
        for(j = 0; j < n; j++){
            if(j == 0){
                cin >> arr[i][j];
            }else{
                arr[i][j] = 0;
            }
        }
    }

    for(i = 1; i < n; i++){
        for( j = 0; j < n - i; j++){
            arr[j][i] = arr[j + 1][i - 1] - arr[j][i - 1];
        }
    }

    cout << "Forward difference table: " <<endl;
    for(i = 0; i < n; i++){
        cout << x[i] << "\t";

        for(j = 0; j < n; j++){
            cout << arr[i][j] << "\t";
        }
        cout <<endl;
    }

    float unknownVal, p, result = arr[0][0];

    cout << "Enter unknown value: ";
    cin >> unknownVal;

    p = (unknownVal - x[0]) / (x[1] - x[0]);

    for(i = 1; i < n; i++){
        result = result + ((cal_p(p, i) * arr[0][i] / cal_factorial(i)));
    }

    cout << "The value of unknown Yn(" << (unknownVal) <<"): " << result;


}