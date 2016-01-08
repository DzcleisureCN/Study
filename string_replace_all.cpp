#include<iostream>
#include<string>

using namespace std;


int main()
{
	string message = "dzc/dzci/a";
        string token="/";
        string value="%2f";
        int iPos = 0;
	while ((iPos = message.find(token, iPos)) != string::npos)
	{
		message.replace(iPos, token.size(), value);
	}
        cout << message << endl;

}
