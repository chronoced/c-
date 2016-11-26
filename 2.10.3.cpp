#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
using namespace std;

int main()
{
    double x,b;
    cin>>x;
    b=log(exp(x))/log(2)-cos(x/3.14)+pow(abs(tan(2*x))/(2.6+pow(x,3)+pow(x,2)),1/3);
    cout << b << endl;
    return 0;
}
