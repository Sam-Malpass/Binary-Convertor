/*Header files*/
#include <iostream>
#include <vector>
/*Namespace declarations*/
using namespace std;
/*GetInput function*/
vector<int> GetInput()
{
	int input;
	cout << "Input number: ";
	cin >> input;
	vector<int> binary;
	while (input > 0)
	{
		binary.push_back(input % 2);
		input = input / 2;
	}
	return binary;
}
