#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	double x;
	cin >> x;
		double sum = 0;
	double k = 0.0001;
	int n = 0;
	double step = x;
	double fact=1;
	int sign = 1;
		while (abs(sign*step/fact)>k) {
			sum += sign * step / fact;
           n++;
		   sign = -sign;
		   step *= x * x;
		   fact *= 2 * n;
		   
		}
		n--;
		cout << sum <<" "<< n;
	
    
	
}

