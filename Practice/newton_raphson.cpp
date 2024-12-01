#include <iostream>
#include <cmath>
using namespace std;

double f(double x){
    return pow(x, 3) - pow(x, 2) - 2;
}

double derivF(double x){
    return 3*pow(x, 2) - (2 * x);
}

double newton_raphson(double x, double tol){
    double h = f(x) / derivF(x);

    while(abs(h) >= tol){
        h = f(x) / derivF(x);
        x = x - h;
    }

    return x;
}

int main(){
    double result = newton_raphson(2, 0.000001);

    cout << "The root is approximately: " << result;
}