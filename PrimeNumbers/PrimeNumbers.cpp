// PrimeNumbers.cpp : define o ponto de entrada para o aplicativo do console.
#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include "primesMath.h"
#include <math.h>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	int a, b, n;
	cout << "Testing the function which verifies if two numbers a and b are congruent given an integer n\n";
	cout << "It means to verify if a = b (mod n)\n";
	cout << "Type the number a: \n";
	cin >> a;
	cout << "Type the number b: \n";
	cin >> b;
	cout << "Type the module n: \n";
	cin >> n;

	congrModN(a, b, n) ? cout << "true" << '\n' : cout << "false" << '\n';
	cout << "\n\n";

	cout << "Testing the function which calculates the Greatest Common Divisor (GCD) between two integers a and b\n";
	cout << "Type the number a: \n";
	cin >> a;
	cout << "Type the number b: \n";
	cin >> b;
	cout << GCD(a, b) << "\n";

	cout << "\n\n";

	cout << "Testing the function which calculates the result of Euler's totient function on an integer a\n";
	cout << "Type the number n: \n";
	cin >> n;
	cout << EulerPhi(n) << "\n";

	cout << "\n\n";

	cout << "Testing the function which calculates the order of an integer a module an integer n\n";
	cout << "Type the number a: \n";
	cin >> a;
	cout << "Type the number n: \n";
	cin >> n;
	cout << ord(a, n) << '\n';

	cout << "\n\n";

	cout << "Testing the function which calculates the coeficients of Pascal's Triangle of power n.";
	cout << "Type the power n: \n";
	cin >> n;
	cout << "\n\n";
	std::vector<unsigned long long int> v = pascalTriangle(n);
	for (int i = 0; i < v.size(); ++i)
	{
		cout << v[i] << '\n';
	}

	cout << "\n\n";

	system("pause");
	return 0;
}