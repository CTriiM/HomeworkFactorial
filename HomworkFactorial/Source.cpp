#include<iostream>
#include<cmath>
using namespace std;
//#define TASK1
//#define TASK2
int main()
{
	setlocale(LC_ALL, "");

	//TASK1
#ifdef TASK1
	int number, factorial = 1, r = 1;
	cout << "Enter the value "; cin >> number;
	while (r <= number)
	{
		factorial = factorial * r;
		r++;
	}
	cout << "Factorial " << number << " is " << factorial << endl;

#endif // TASK1

	//TASK2
#ifdef TASK2
	int n, d, result;
	cout << "¬ведите основание степени: "; cin >> n;
	cout << "¬ведите показатель стпени: "; cin >> d;
	result = pow(n, d);
	cout << "„исло " << n << " в степени " << d << " это - " << result << endl;
#endif // TASK2

	//TASK3

	//i really tried to think of something, but i don't understand how to solve it, i need your help:)

}
