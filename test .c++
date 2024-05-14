1. Write a program to check whether a given number is divisible by both 5 and 7. Return a boolean output.
ans1:// #include <bits/stdc++.h>
// using namespace std;

//  bool divisibility(int i){
//     if (i%5==0&& i%7==0)
//     return true;
//     else 
//     return false;
// }
// int main()
// {
//  int i;
//  cout<<"enter the number"<<endl;
//  cin>>i;
//  bool b=divisibility(i);
//  if(b)
//      cout<<i<<"divisible by 5 and 7";
//  else 
//  cout<<"not  divisible by 5 and 7";

//     return 0;
// }

2. Write a program to check whether a given number is positive, negative, or zero. Return the result as a string.
ans 2:#include <bits/stdc++.h>
using namespace std;

string checkNumber(int number) {
    if (number > 0) {
        return "Positive";
    } else if (number < 0) {
        return "Negative";
    } else {
        return "Zero";
    }
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    string result = checkNumber(number);
    cout << "The number is: " << result << endl;

    return 0;
}



3. Write a program to calculate the area of a rectangle given its length and breadth Return the output as double
ans:3 #include <bits/stdc++.h>
using namespace std;

double calculateRectangleArea(double length, double breadth) {
    return length * breadth;
}

int main() {
    double length, breadth;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the breadth of the rectangle: ";
    cin >> breadth;

    double area = calculateRectangleArea(length, breadth);
    cout << "The area of the rectangle is: " << area << endl;

    return 0;
}
4. Write a program to find the maximum of two numbers and return the number.
ans:4 #include <bits/stdc++.h>
using namespace std;

int findMaximum(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

int main() {
    int num1, num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    int maximum = findMaximum(num1, num2);
    cout << "The maximum number is: " << maximum << endl;

    return 0;
}





5. Write a program to check whether a given year is a leap year or not return a char 'y' if yes otherwise 'n' for no.
ans:5  #include <bits/stdc++.h>
using namespace std;

char checkLeapYear(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return 'y';
    } else {
        return 'n';
    }
}

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    char result = checkLeapYear(year);
    cout << "Is it a leap year? " << result << endl;

    return 0;
}
6. Write a program to calculate the sum of digits of a given integer and return the integer sum.
ans:6 #include<bits/stdc++.h>
using namespace std;

long sum(long a, long b)
{
    long s;
    s=a+b;
    return s;
}

int main()
{
    long a,b;
    cout<<"Enter the value of a and b.\n";
    cin>>a>>b;
    long s = sum(a,b);
    cout<<"Sum: "<<s;
   
    return 0;
}

7. Write a program to find the factorial of a given number and return the value of factorial.
ans:7 #include<bits/stdc++.h>
using namespace std;

int factorial(int n) {
    
    if (n == 0) {
        return 1;
    }
    
    return n * factorial(n - 1);
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int fact = factorial(num);
    cout << "The factorial of " << num << " is: " << fact;

    return 0;
}
8. Write a program to check whether a given number is prime or not if yes return char '1' if no then return char '0' .