#include <iostream>
#include <cmath>
using namespace std;

double f(double x){
    return pow(x, 3) - pow(x, 2) - 2;
}

double false_position(double a, double b, double tol){
    if(f(a) * f(b) > 0){
        cout << "Fale position fails.";
    }

    double c = a;

    while(abs(f(c)) >= tol){
        c = (a*f(b) - b*f(a)) / (f(b) - f(a));

        if(f(c) == 0) break;

        if(f(a) * f(c) < 0){
            b = c;
        }else{
            a = c;
        }
    }

    return c;
}

int main(){
    double result = false_position(1, 2, 0.000001);

    cout << "The root is approximately: " << result;
}