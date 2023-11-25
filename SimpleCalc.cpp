/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

void ShowChoice(){
    cout << "MENU" << endl;
    cout << "1: Add" <<endl;
    cout << "2: Subtract"<<endl;
    cout << "3: Multiply:" << endl;
    cout << "4: Divide" <<endl;
    cout << "5: Exit " <<endl;
    cout << "Enter your choice: ";

    
}
int add(int num1, int num2){
    int add = num1 + num2;
    return add;
}
int subtract(int num1, int num2){
    int sub = num1 - num2;
    return sub;
}
int multiply(int num1, int num2){
    int multi = num1 * num2;
    return multi;
}
float divide(float num1, float num2){
    double divi = num1/num2;
    return divi;
}



int main()
{
    int x;
    float num1;
    float num2;
   do
	{
		ShowChoice();
		cin >> x;
		switch (x)
		{
		case 1:
			cout << "Enter two numbers: ";
			cin >> num1 >> num2;
			cout << "Sum " << add(num1,num2) <<endl;
			break;
		case 2:
			cout << "Enter two numbers: ";
			cin >> num1 >> num2;
			cout << "Difference " << subtract(num1,num2) <<endl;
			break;
		case 3:
			cout << "Enter two numbers: ";
			cin >> num1 >> num2;
			cout << "Product " << multiply(num1,num2) <<endl;
			break;
		case 4:
			cout << "Enter two numbers: ";
			cin >> num1 >> num2;
			cout << "Quotient " << divide(num1,num2) <<endl;
			break;
		case 5:
			break;
		default:
			cout << "Wrong input" << endl;
		}
	}while (x != 5);


return 0;
}

