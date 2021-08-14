// exercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string replace(string str,char userS)
{
	string final = "";
	for (int i = 0; i <= str.length(); i++)
	{
		if (str[i] != userS)
		{
			final += str[i];
		}
	}
	return final;
}


int main()
{

	cout << replace("THis is 1",'1');

}
