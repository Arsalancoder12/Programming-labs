
#include<iostream>
using namespace std;

/*	int num = 5;
	int*ptr = &num;
	cout << "value of num: " << *ptr << endl;
	return 0; 	
}*/

//task 1
//int main()
//{
//	int num = 10;
//	int*ptr = &num;
//	cout << "before modification: " << num << endl;
//	*ptr = 20;
//	cout << "after modification: " <<  num << endl;
//	return 0;
//}

//task 2
//int main()
//{
//	int arr[5] = {1, 3, 5, 7, 9};
//	int*ptr = arr;
//	cout << "pointer : " << endl;
//	for(int i = 0; i<5; i++)
//	{
//		cout << *(ptr + i) << " ";
//	}
//	cout << endl; 
//	return 0;
//}


void swap(int*a, int*b){
	int tempt = *a;
	*a = *b;
	*b = tempt;
}
int main()
{
int a; int b;
cout<<"Enter two integers one by one"<<endl;
cin>>a>>b;
cout<<swap(a,b)<<endl;
swap(&a,&b);
cout<<"Integers after swap are: "<<swap(a,b)<<endl;
return 0;
}
}
//task 4
//int main()
//{
//	int* ptr = 0;
//	if(ptr == 0)
//	{
//		cout << "This pointer is Null and does not point to any valid memory \n";
//	}
//	else
//	{
//		cout << "\n This pointer is not Null. Its hold the address: " << ptr;
//	}
//	return 0;
//}

//Void pointer
//int main()
//{
//	int num = 100;
//	void*ptr = &num;
//	cout << "\n The value: " << *((int*)ptr);
//	return 0;
//}
