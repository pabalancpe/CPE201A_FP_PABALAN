#include <iostream>
#include <iomanip>
using namespace std; 

// Function Prototype
void greetUser (); 
void add(int a, int b);
void subtract(int a, int b);
void multiply(int a, int b);
void divide(int a, int b);
void fahrenheitToCelsius(float f);
void celsiusToFahrenheit(float c);
void dollarsToPesos(float dollars);
void pesosToDollars(float pesos);

// Main Function
int main () {
    int choice;
    int num1, num2;
    float temp, amount;

    cout << fixed << setprecision(2); 

do {
    cout << "====== FUNCTION MENU ======" << endl;
    cout << "1. Add, Subtract, Multiply, or Divide Two Integers. " << endl;
    cout << "2. Convert Fahrenheit to Celsius and Celsius to Fahrenheit. " << endl;
    cout << "3. Convert Dollar to Peso and Peso to Dollar. " << endl;
    cout << "4. Exit" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

switch(choice) {
    case 1:  
        cout << "Enter two integers: ";
        cin >> num1 >> num2;
        cout << "Choose operation (1. Add, 2. Subtract, 3. Multiply, 4. Divide): ";
        int operation;
        cin >> operation;
             switch (operation) {
            	case 1: add(num1, num2); break;
                case 2: subtract(num1, num2); break;
                case 3: multiply(num1, num2); break;
                case 4: divide(num1, num2); break;
                default: cout << "Invalid operation!" << endl; break;
                }
                break;
            
    case 2:  
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temp;
            fahrenheitToCelsius(temp);
            cout << "Enter temperature in Celsius: ";
            cin >> temp;
            celsiusToFahrenheit(temp);
            break;

    case 3:  
            cout << "Enter amount in dollars: ";
            cin >> amount;
            dollarsToPesos(amount);
            cout << "Enter amount in pesos: ";
            cin >> amount;
            pesosToDollars(amount);
            break;

            case 4:  
                cout << "Exiting program. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice! Please enter a number between 1 and 4." << endl;
                break;
        }
    } while (choice != 4); 

    return 0; 
}
	
// Function Definitions
	void add(int a, int b) {
    cout << "Sum: " << (a + b) << endl;
}

void subtract(int a, int b) {
    cout << "Difference: " << (a - b) << endl;
}

void multiply(int a, int b) {
    cout << "Multiplied: " << (a * b) << endl;
}

void divide(int a, int b) {
    if (b != 0) {
        cout << "Divided: " << (float)a / b << endl;
    } else {
        cout << "Error: Division by zero!" << endl;
    }
}

void fahrenheitToCelsius(float f) {
    float c = (f - 32) * 5 / 9;
    cout << "Fahrenheit " << f << " is " << c << " Celsius." << endl;
}

void celsiusToFahrenheit(float c) {
    float f = (c * 9 / 5) + 32;
    cout << "Celsius " << c << " is " << f << " Fahrenheit." << endl;
}

void dollarsToPesos(float dollars) {
    float rate = 18.50; 
    cout << "$" << dollars << " is " << dollars * rate << " pesos." << endl;
}

void pesosToDollars(float pesos) {
    float rate = 18.50;
    cout << pesos << " pesos is $" << pesos / rate << endl;
}
