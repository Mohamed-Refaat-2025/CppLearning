#include <iostream>
#include <typeinfo>

using namespace std;
void IOStreamCode()
{
	cout << "Enter your number" << endl;
	string num;
	cin >> num;
	cout << "Number is :" << num << endl;

	//Osream object 
	string name = "Moahmed";
	cout << "The value is :" << name << endl;
}

void DataTypeCode()
{
	//Integer
	int number1; // declaration of varibles
	number1 = 100.7;// Inialization of varibles
	cout << "The intger number is : " << number1 << endl;

	// float
	float number2 = 13.34f;
	cout << "The float number is : " << number2 << endl;
	//double
	double number3 = 13.346576688688;
	cout << "The float number is : " << number3 << endl;
	//char
	char ch1 = 'M';
	cout << "The Char is :" << ch1 << endl;
	//string
	string str1 = "Mohamed";
	cout << "The string is :" << str1 << endl;
	//Boolean

	bool bool1 = false;
	cout << "The Boolean variables : " << bool1 << endl;
	// size of by Byte
	cout << "The Integer size : " << sizeof(number1) << endl;
	cout << "The Integer max size : " << INT_MAX << endl;
	cout << "The Integer min size : " << INT_MIN << endl;
	cout << "The Float size : " << sizeof(number2) << endl;
	cout << "The double size : " << sizeof(number3) << endl;
	cout << "The char size : " << sizeof(ch1) << endl;
	cout << "The string size : " << sizeof(str1) << endl;
	cout << "The boolean size : " << sizeof(bool1) << endl;

	//auto keyword such as 'var' in C#
	auto num = 1233;
	// Address of Varibale & operator 
	cout << "The Address of 'num' variable is : " << &num << endl;


	cout << "====================================================" << endl;
	//AscII 
	char a = 'A';
	cout << "The Char value :" << a << endl;
	cout << "The AscII value for 'B' :" << int('B') << endl;


}

void AccessModifersCode()
{
	short int number = 2;
	cout << number << endl;
	cout << sizeof(number) << endl;
	long long int long_number = 33232788988999;
	cout << long_number << endl;
	cout << sizeof(long_number) << endl;
	// Use an aliase 
	//using bignum = long long int;

	//bignum newAliase = 2566677888;
	//cout << newAliase << endl;
	//cout << sizeof(newAliase) << endl;

	typedef long long int LL;

	LL newLL = 22222222222;

	cout << newLL << endl;
	cout << sizeof(newLL) << endl;




}

void TypeCastingCode()
{
	cout << "=======================================================" << endl;
	int a;
	double b = 20.5;
	// cast value of double b to stored in a
	a = b;
	cout << "The Value of a = " << a << endl;
	cout << "=======================================================" << endl;
	char c = 'C';
	//cout << int(c) << endl;
	int d = 20;
	cout << c + d << endl;
	cout << "=======================================================" << endl;
	int e = 20;
	double f = 20.5;
	//int result = e + f;
	cout << e + (int)f << endl; //40
	cout << sizeof(e+(int)f) << endl; // 4 Bytes
}

void ArithmaticOperatorsCode()
{
	cout << " Enter your number to check even or odd" << endl;
	int num;
	cin >> num;
	if (num == 0)
	{
		cout << "This number is ODD" << endl;
	}
	if (num != 0 && num % 2 == 0)
	{
		cout << "This number is EVEN" << endl;
	}
	else if(num != 0 && num % 2 != 0)
	{
		cout << "This number is ODD" << endl;

	}
	string tryAgain = "No";
	cout << "Try Again Yes or No" << endl;
	cin >> tryAgain;
	if (tryAgain == "Yes")
	{
		ArithmaticOperatorsCode();
	}
	else
	{
		return;
	}
}
