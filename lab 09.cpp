//#include<iostream>
//using namespace std;
//int main() {
//	int balance=1000;
//	dep_money; withdrawcase; currentbalance; bool isneeded;
//	cout << "Your account balance is 1000$";
//	while(balance>=0) {
//		cout << "Menu of the Banking System.\n\n";
//		
//	}
//	
//}
    
    /*PROGRAMME NO 02*/

//#include<iostream>
//using namespace std;
//int main() {
//	int a; int b=0; int c;
//	cout << "Enter a number: ";
//	cin >> a;
//	while(b<10) {
//		b++;
//		c=a*b;
//		cout << "\n" << a << " * " << b << " = " << c;
//	} return 0;
//}
       
       
       /*PROGRAMME NO 03*/

//#include<iostream>
//using namespace std;
//int main() {
//	int a=1,sum=0;
//	while(a<=5) {
//		sum=sum+a;
//		a++;
//	} 
//	cout << sum;
//	return 0;
//}

      /* PROGRAMME NO 04*/

//#include<iostream>
//using namespace std;
//int main() {
//	int num;
//	cout << "Enter the number: "; cin >> num;
//	while (num<0) {
//		cout << "You entered a negative number. \nRe enter: " << endl; cin >> num;
//	}
//	cout << "The number is positive." << endl;
//	return 0;
//}
      
     /* PROGRAMME NO 05*/

//#include<iostream>
//using namespace std;
//int main() {
//	int N,n=1;
//	cout << "Enter a number: ";
//	cin >> N;
//	while(n<=N) {
//		cout << n << endl;
//		n++;
//	}
//	return 0;
//}
    
    /*PROGRAMME NO 06*/

#include<iostream>
using namespace std;
int main() {
	int balance=1000; char choice;
	int dep_money; int withdrawcash; int currentbalance;
	cout << "\nMenu of the Banking System\n";
	cout << "--------------";
	while(choice!='4') {
		
		cout << "\n\nChoice 1 is to deposit money. 2 is to withdraw. 3 is to check balance.";
		cout << "\n\nEnter choice 4 if you want to exit the menu.";
		cout << "\n\nEnter Choice: ";
		cin >> choice;
		switch (choice) {
			case '1':
				cout << "\nYou chose depositing money option.";
				cout << "\nEnter the amount you want to deposit: ";
				cin >> dep_money;
				if(dep_money>0) {
					balance=balance+dep_money;
					cout << "Your deposited money is " << dep_money << "$ and now your current account balance is: " << balance << "$";
				} else {
					cout << "\nWrong input entered.";
				} break;
			 case '2':
			cout << "\nYou chose withdraw money option.";
			cout << "\nEnter the amount you want to withdraw: ";
			cin >> withdrawcash;
			if(withdrawcash<=0) {
				cout << "\nWrong amount entered.";
			} else if(withdrawcash>balance) {
			    cout << "\nInsufficient balance";
			} else {
				balance=balance-withdrawcash;
				cout << "\nYour withdraw amount is " << withdrawcash << "$ and now your current account balance is: " << balance << "$";
			} break;
	     case '3':
	        cout << "\nYou want to check your balance.";
	        cout << "\nYour current account balance is: " << balance << "$."; 
	        break;
	        case '4':
	        	cout << "\nMenu closed.";
	        	break;
	        default:
	        	cout << "\nYou entered wrong choice.\n";
	        	break; }
	        
} cout << "\nThank you for using the menu";   return 0;
}
