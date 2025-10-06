#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;


    //problem1
/*
double numProduct(int a, int b) {
    cout << a << "*" << b << "=" << a*b << endl;
}

int main() {

    int num1, num2;

    printf("Enter first number: ");
    cin >> num1;
    printf("Enter second number: ");
    cin >> num2;

    numProduct(num1, num2);

    return 0;
}

*/


    //problem2

/*
double formula(int a, int b, int t) {
    double resFormula = (b-a)/t;
    cout << "formula: " << resFormula << endl;
}

int main() {

    int v1, v2, t;

    printf("Enter v1: ");
    cin >> v1;
    printf("Enter v2: ");
    cin >> v2;
    printf("Enter t: ");
    cin >> t;

    formula(v1, v2, t);

    return 0;
}
*/

    //problem3
/*
double fun(double radius) {
    const double PI = 3.141592653589793;
    cout << "area: "<< PI * radius * radius << endl;
    cout << "perimeter: "<< 2 * PI * radius << endl;


}

int main() {
    double radius;
    printf("Enter the radius of the circle: ");
    cin >> radius;
    fun(radius);

    return 0;
}
*/

    //problem 4

/*
void fun(int a, int b) {

    cout << "perimetr:" << 2*(a+b) << endl;
    cout << "area: " << a*b << endl;


}
int main() {



    int a, b;

    printf("Please enter two sides: ");
    cin >> a >> b;


    fun(a, b);
    return 0;
}

*/


    //problem 5
/*
void swap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;

    cout << "num1: " << a << " .But num2: " << b << endl;
}

int main() {
    int a, b;
    printf("Please input two numbers:");
    cin >> a >> b;
    swap(a, b);
    return 0;
}
*/

    //problem 6

/*
void Factorial(int n) {

    int number = 1;

    for (int i = 1; i <= n; i++) {
        number *= i;
    }

    cout << number << endl;

}

int main() {
    int n;
    printf("enter a number: ");
    cin >> n;
    Factorial(n);
    return 0;
}

*/


    //problem 7

/*
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    int result = gcd(num1, num2);
    cout << "The GCD of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}

*/

    //problem 8

/*
int max(int num1, int num2, int num3) {
    int maxVal = num1;

    if (num2 > maxVal) {
        maxVal = num2;
    }
    if (num3 > maxVal) {
        maxVal = num3;
    }

    return maxVal;
}

int min(int num1, int num2, int num3) {
    int minVal = num1;

    if (num2 < minVal) {
        minVal = num2;
    }
    if (num3 < minVal) {
        minVal = num3;
    }

    return minVal;
}

int main() {
    int num1, num2, num3;

    cout << "Please enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    cout << "Max: " << max(num1, num2, num3) << endl;
    cout << "Min: " << min(num1, num2, num3) << endl;

    return 0;
}
*/

    //problem9
/*
void calculator(int a, int b) {
    cout << "Sum: " << a << " + " << b << " = " << a + b << endl;
    cout << "Subtract: " << a << " - " << b << " = " << a - b << endl;
    cout << "Product: " << a << " * " << b << " = " << a * b << endl;
    cout << "Division" << a << " / " << b << " = " << a / b << endl;
}

int main() {
    int a, b;
    printf("Enter two numbers: ");
    cin >> a >> b;
    calculator(a, b);
}
*/

    //problem 10
/*
double area(int n, double side) {
    const double PI = 3.141592653589793;
    return n*side*side/(4*tan(PI/n));
}

int main() {
    int n;
    double side;

    printf("Enter the number of sides: ");
    cin >> n >> side;
    cout << area(n, side) << endl;
}
*/

    //problem 11

/*
void displayEven(int number) {

    if (number < 0) {
        number = -number;
    }

    if (number == 0) {
        cout << "Even digits: 0" << endl;
        return;
    }

    int tempnum = number;
    int even_digits[10];
    int count = 0;

    while (tempnum > 0) {
        int digit = tempnum % 10;
        if (digit % 2 == 0) {
            even_digits[count++] = digit;
        }
        tempnum /= 10;
    }

    cout << "Even digits: ";
    if (count == 0) {
        cout << "None";
    } else {
        for (int i = count - 1; i >= 0; --i) {
            cout << even_digits[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    displayEven(number);

    return 0;
}
*/

    //problem12
/*
double futureInvestmentValue(double investmentAmount, double mothlyInterestrate, int years) {

    cout << investmentAmount * pow((1 + mothlyInterestrate), years*12);


}

int main() {
    double investmentAmount;
    double mothlyInterestrate;
    int years;
    cout << "Please enter your investment amount: ";
    cin >> investmentAmount;
    cout << "Please enter your mothly interestrate years: ";
    cin >> mothlyInterestrate;
    cout << "Please enter your years: ";
    cin >> years;

    futureInvestmentValue(investmentAmount, mothlyInterestrate, years);

    return 0;
}
*/

    //problem 13

/*
void displaySortedNumber(double num1, double num2, double num3) {

    if (num1 > num2) swap(num1, num2);
    if (num1 > num3) swap(num1, num3);
    if (num2 > num3) swap(num2, num3);

    cout << "Sorted numbers: " << num1 << " " << num2 << " " << num3 << endl;
}

int main() {
    double a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    displaySortedNumber(a, b, c);

    return 0;
}

*/

    //problem 14

/*

int main() {
    time_t now = time(0);
    tm* localTime = localtime(&now);

    const char* months[] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    cout << months[localTime->tm_mon] << " "
         << localTime->tm_mday << ", "
         << (1900 + localTime->tm_year) << " ";

    cout << setw(2) << setfill('0') << localTime->tm_hour << ":"
         << setw(2) << setfill('0') << localTime->tm_min << ":"
         << setw(2) << setfill('0') << localTime->tm_sec << endl;

    return 0;
}

*/


    //problem15

void printASCII(char ch1, char ch2, int numberPerLine) {
    int count = 0;
    for (char c = ch1; c <= ch2; c++) {
        cout << c << ":" << (int)c << "\t";
        count++;
        if (count % numberPerLine == 0) {
            cout << endl;
        }
    }
    if (count % numberPerLine != 0) {
        cout << endl;
    }
}

int main() {
    cout << "ASCII values from 'a' to 'm':\n";
    printASCII('a', 'm', 6);
    return 0;
}


