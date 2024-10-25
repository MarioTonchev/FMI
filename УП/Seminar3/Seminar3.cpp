﻿#include <iostream>
using namespace std;

int main()
{
	//1
	/*int n = 0;
	cin >> n;

	for (size_t i = 1; i <= n; i++)
	{
		for (size_t j = 1; j <= i; j++)
		{
			cout << j;
		}

		cout << endl;
	}*/


	//2
	/*int n = 0;
	cin >> n;

	for (size_t i = 1; i < n; i++)
	{
		for (size_t j = 1; j < n; j++)
		{
			if (i + j == n)
			{
				cout << "x = " << i << " y = " << j << endl;
			}
		}
	}*/


	//3
	/*int n = 0;
	cin >> n;

	int nSquared = n * n;
	int temp = nSquared;
	int multiplier = 1;

	int result = 0;

	while (temp > 0)
	{
		if (temp % 10 == 0)
		{
			nSquared /= 10;
			temp /= 10;

			continue;
		}

		temp /= 10;
		multiplier *= 10;
	}

	multiplier /= 10;

	while (nSquared > 0)
	{
		int digit = nSquared % 10;
		nSquared /= 10;

		result += digit * multiplier;

		multiplier /= 10;
	}

	cout << result;*/


	//4
	/*int n = 0;
	cin >> n;

	int result = 1;

	for (size_t i = 2; i <= n; i++)
	{
		result *= i;
	}

	cout << result;*/


	//5
	/*int m = 0;
	int n = 0;

	cin >> m >> n;

	for (size_t i = 1; i <= m * n; i++)
	{
		cout << i << " ";

		if (i % n == 0)
		{
			cout << endl;
		}
	}*/


	//6
	/*int num = 0;
	cin >> num;

	int guesses = 0;

	if (num < 0 || num > 100)
	{
		cout << "Please enter a number between 0 and 100." << endl;
	}
	else
	{
		while (true)
		{
			int guess = 0;
			cin >> guess;

			if (guess < num)
			{
				cout << "Your guess is smaller than the answer!" << endl;
			}
			else if (guess > num)
			{
				cout << "Your guess is bigger than the answer!" << endl;
			}
			else
			{
				cout << "You guessed it!";
				break;
			}
		}
	}*/


	//7
	/*int n = 0;
	cin >> n;

	int expectedSum = n * (n + 1) / 2;
	int sum = 0;

	for (size_t i = 0; i < n - 1; i++)
	{
		int number = 0;
		cin >> number;

		sum += number;
	}

	int result = expectedSum - sum;

	cout << result;*/


	//8
	/*int n = 0;
	cin >> n;

	for (size_t i = 1; i < n; i++)
	{
		for (size_t j = i; j < n; j++)
		{
			for (size_t k = j; k < n; k++)
			{
				if (i * i + j * j == k * k)
				{
					cout << i << " " << j << " " << k << endl;
				}
			}
		}
	}*/


	//9
	/*int n = 0;
	cin >> n;

	char symbol;
	cin >> symbol;

	if (n < 2 || n > 9)
	{
		cout << "Please enter a number between 2 and 9!";
	}
	else
	{
		int indentation = n;
		int printCount = 1;

		for (size_t i = 0; i < n; i++)
		{
			for (size_t i = 0; i < indentation; i++)
			{
				cout << " ";
			}

			for (size_t i = 0; i < printCount; i++)
			{
				cout << symbol;
			}

			cout << endl;
			printCount += 2;
			indentation -= 1;
		}

		indentation+=2;
		printCount -= 4;

		for (size_t i = 0; i < n - 1; i++)
		{
			for (size_t i = 0; i < indentation; i++)
			{
				cout << " ";
			}

			for (size_t i = 0; i < printCount; i++)
			{
				cout << symbol;
			}

			cout << endl;
			printCount -= 2;
			indentation += 1;
		}
	}*/


	//10
	/*int m = 0;
	int n = 0;
	cin >> m >> n;

	int sumOfDelimeters = 0;

	for (size_t i = m; i <= n; i++)
	{
		for (size_t j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				sumOfDelimeters += j;
			}
		}

		if (sumOfDelimeters == i)
		{
			cout << i << endl;
		}
		sumOfDelimeters = 0;
	}*/


	//11
	/*int n = 0;
	cin >> n;

	if (n < 3)
	{
		cout << "Please enter a number bigger than 3!";
		return 0;
	}

	int firstNum = 1;
	int secondNum = 1;

	cout << firstNum << " " << secondNum << " ";

	while (true)
	{
		if (firstNum + secondNum > n)
		{
			break;
		}

		secondNum = firstNum + secondNum;
		firstNum = secondNum - firstNum;

		cout << secondNum << " ";
	}*/


	//12
	/*int n = 0;
	cin >> n;
	
	int digitCount = 0;

	int temp = n;

	while (temp > 0)
	{
		digitCount++;

		temp /= 10;
	}

	int result = 0;
	int multiplier = 1;

	if (digitCount % 2 == 0)
	{
		for (size_t i = 1; i <= digitCount; i++)
		{
			if (i == digitCount / 2 || i == digitCount / 2 + 1)
			{
				n /= 10;
				continue;
			}

			int digit = n % 10;
			n /= 10;

			result += multiplier * digit;

			multiplier *= 10;
		}
	}
	else
	{
		for (size_t i = 1; i <= digitCount; i++)
		{
			if (i == digitCount / 2 + 1)
			{
				n /= 10;
				continue;
			}

			int digit = n % 10;
			n /= 10;

			result += multiplier * digit;

			multiplier *= 10;
		}
	}

	cout << result << " " << result + 1;*/


	//13
	/*int a = 0;
	int b = 0;
	cin >> a >> b;

	int biggerNum = 0;
	int smallerNum = 0;

	if (a > b)
	{
		biggerNum = a;
		smallerNum = b;
	}
	else
	{
		biggerNum = b;
		smallerNum = a;
	}

	for (size_t i = smallerNum; i <= biggerNum; i++)
	{
		bool isPrime = true;

		for (size_t j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				isPrime = false;
				break;
			}
		}

		if (isPrime)
		{
			cout << i << " ";
		}
	}*/

	
	//14
	
	
	
}
