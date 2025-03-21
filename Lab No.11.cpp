
#include<iostream>
using namespace std;
//int main()
//{
//	int arr[5] = {1, 3, 5, 7, 9};
//	for(int i = 0; i<5; i++)
//	{
//		cout << "\n" << arr[i] << " ";
//	}
//	return 0;
//}

//Task No 2
//int main()
//{
//	int n;
//	cout << " Enter the number of elements: ";
//	cin >>n ;
//	int arr[n];
//	cout << " Enter " << n << " integers: ";
//	for(int i = 0; i<n; i++)
//	{
//		cin >> arr[i];
//	}
//	cout << " Reversing the Array: ";
//	for(int i = n- 1; i>=0; i--)
//	{
//		cout << arr[i];
//	}
//	cout << endl;
//	return 0;
//}

//task no 3
//int main()
//{
//	int arr[] = {10, 20, 30};
//	int sum = 0;
//	double size = sizeof(arr)/sizeof(arr[0]);
//	for(int i = 0; i<size; i++)
//	{
//		sum+= arr[i];
//	}
//	double average = sum/(double)size;
//	cout << " Sum: " << sum;
//	cout << " Average: " << average;
//	return 0;
//}

//task no 4
//int main()
//{
//	int arr[] = {10, 20, 30, 40, 50};
//	int size = sizeof(arr)/sizeof(arr[0]);
//	cout << " Size of an array: " << size;
//	return 0;
//}

//task no 5
int main()
{
	int n;
	int arr[n];
	cout << " Enter the number of element: ";
	cin >> n;
	cout << "\n Enter " << n << " integers: ";
	for(int i = 0; i<n; i++)
	{
		cin >> arr[i];
	}
	int maxNum = arr[0];
	for(int i = 1; i<n; i++)
	{
		if(arr[i]>maxNum)
		{
			maxNum = arr[i];
		}
	}
	cout << "\n Largest number in an array: " << maxNum;
	return 0;
}