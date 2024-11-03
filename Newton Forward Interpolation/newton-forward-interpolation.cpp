#include <iostream>
using namespace std;

float cal_p(float p, int n){
    float temp = p;

    for (int i = 1; i < n; i++){
        temp = temp * (p - i);
    }
    return temp;
}

int cal_factorial(int n){
    int factorial = 1;
    for (int i = 2; i <= n; i++){
        factorial *= i;
    }
    return factorial;
}

int main(){
    int n, i, j;
    cout << "Total of known value: ";
    cin >> n;

    float x[n];
    float arr[n][n];

    for(i = 0; i < n; i++){
        cout << "Enter the value x" << (i+1) << ": ";
        cin >> x[i];
    }

    for(i = 0; i < n; i++){
        cout << "\nEnter the value y" << (i+1) << ": ";
        for(j = 0; j < n; j++){
            if(j == 0){
                cin >> arr[i][j];
            }else{
                arr[i][j] = 0;
            }
        }
    }

    for (i = 1; i < n; i++){
        for(j = 0; j < n - i; j++){
             arr[j][i] = arr[j + 1][i - 1] - arr[j][i - 1];
        }
    }

    cout << "\nForward Difference table: " <<endl;

    for(i = 0; i < n ; i++){
        cout << x[i] << "\t";

        for(j = 0; j < n; j++){
            cout << arr[i][j] << "\t";
        }
        cout <<endl;
    }

    float value, p, result = arr[0][0];
    cout << "Enter unknown value: ";
    cin >> value;

    p = (value - x[0]) / (x[1] - x[0]);

    for(i = 1; i < n; i++){
        result = result + ((cal_p(p, i) * arr[0][i]) / cal_factorial(i));
    }

    cout << "\nValue of Y(" << value <<"): " << result;
}