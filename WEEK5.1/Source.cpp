#include<iostream>
#include<stdio.h>
int main()
{
	using namespace std;
	int count=0;
	char str[100],*p,a;
	p = str;
	cout << "Input : ";
	cin >> str;;
	while (*p!='\0')
	{
		if (*p >= 65 && *p <= 90)
		{
			printf("%c", *p + 32);
			count++;
             //cout << *p+32;
		}
		else if (*p >= 97 && *p <= 122)
		{
			printf("%c", *p - 32);
			count++;
              // cout << *p-32;
		}
		p++;
	}
	if (count == 0)
	{
		cout << "Try again";
	}
}