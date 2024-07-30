#include <iostream>
using namespace std;

void sum();
void substraction();
void multiplication();
void division();

int main(){


    int choice;
    do {
        cout << "Basic Calculator" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Substraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        

        switch(choice) {
            case 1:
                sum();
                break;
            case 2:
                substraction();
                break;
            case 3:
                multiplication();
                break;
            case 4:
                division();
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
        cout << endl;
    } while (choice != 5);

    return 0;
}

void sum(){
  int a,b;
  cout << "Please enter your First Number:" << endl;
  cin >> a;
  cout << "Please enter your Second Number:" << endl;
  cin >> b;
  cout << a << " + " << b << " = " << a+b << endl;
}

void substraction(){
  int a,b;
  cout << "Please enter your First Number:" << endl;
  cin >> a;
  cout << "Please enter your Second Number:" << endl;
  cin >> b;
  cout << a << " - " << b << " = " << a-b << endl;
}

void multiplication(){
  int a,b;
  cout << "Please enter your First Number:" << endl;
  cin >> a;
  cout << "Please enter your Second Number:" << endl;
  cin >> b;
  cout << a << " * " << b << " = " << a*b << endl;
}

void division(){
  int a,b;
  cout << "Please enter your First Number:" << endl;
  cin >> a;
  cout << "Please enter your Second Number:" << endl;
  cin >> b;
  cout << a << " / " << b << " = " << a/b << endl;
}