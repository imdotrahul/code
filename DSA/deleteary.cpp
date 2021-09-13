#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	int position;
	cout << "Enter the position to delete in the array: ";
	cin >> position;
	--position;
	for (int i = position; i < 10; i++)
	{
		arr[i] = arr[i + 1];
	}
	cout << " The resultant array after deletion is: ";
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i]<<" ";
	}
}