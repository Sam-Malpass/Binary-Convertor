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
/*GetOutput function*/
void GetOutput(vector<int> input)
{
	cout << "Binary is: ";
	for (int i = input.size()-1; i >= 0; i--)
	{
		cout << input[i];
	}
	cout << endl;
	system("pause");
}
/*Run function*/
void Run()
{
	bool toggle = true;
	while (toggle)
	{
		system("cls");
		GetOutput(GetInput());
	}
}
/*Main function*/
int main()
{
	Run();
	return 0;
}
