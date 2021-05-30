#include<iostream>
using namespace std;
void palindrome(string str1)
{
	bool found = false;
	int j = str1.length()-1;
	for (int i = 0; i < str1.size(); i++, j--)
	{
		if (str1[i] == str1[j])
		{
			found = true;
		}
	}
	if (found)
	{
		cout << "palindrome";
	}
	else
		cout << "not palindrome";
}

int main()
{
	string str1;
	cin >> str1;
	palindrome(str1);
}