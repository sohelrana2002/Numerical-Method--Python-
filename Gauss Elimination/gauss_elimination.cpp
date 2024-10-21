#include <iostream>
using namespace std;

int main(){
    int n, i, j, k;
    cout << "Enter Matrix Size: ";
    cin >> n;
    float arr[n+1][n+1], x[n], f1;

    for(i = 0; i < n; i++){
        cout << "Enter " << (i+1) << " no eliment: ";

        for(j = 0; j <=n;j++){
            cin >> arr[i][j];
        }
    }

    for(i = 0; i <= n; i++){
        if(arr[0][0] == 0){
            cout << "Gauss Elimination method fails.";
        }

        for(j = i+1; j < n; j++){
            f1 = arr[j][i]/arr[i][i];

            for(k = 0; k <= n; k++){
                arr[j][k] = arr[j][k] - f1*arr[i][k];
            }
        }
    }

    cout << "Upper Triangular matrix: " <<endl;
    for(i = 0; i < n; i++){
        for(j = 0; j <=n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    x[n-1] = arr[n-1][n]/arr[n-1][n-1];

    for(i = n-2; i >=0 ; i--){
        x[i] = arr[i][n];

        for(j = i+1 ; j < n; j++){
         x[i] = x[i] - x[j]*arr[i][j];
        }

        x[i] = x[i]/arr[i][i];
    }

    cout << "Unknown values : " <<endl;
    for(i=0; i<n;i++){
        cout << char(65+i) << " = " << x[i] <<endl;
    }
}