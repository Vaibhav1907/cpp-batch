Q1 Write a C++ program that prints the first 10 numbers of a sequence where each number is the double of its predecessor, starting from 1, using a for loop.
ans1 #include <iostream>
using namespace std;

void printSequence() {
    int num = 1;
    for (int i = 0; i < 10; i++) {
        cout << num << " ";
        num *= 2;
    }
    cout << endl;
}

int main() {
    printSequence();
    return 0;
}
Write a C++ program that generates and prints the first 15 terms of the sequence defined by: an​=2an−1​+1 with a1​=1 using a for loop. consider n is the nth 
term
ans:2 #include <iostream>
using namespace std;

void printSequence() {
    int a1 = 1;
    cout << a1 << " ";

    for (int n = 2; n <= 15; n++) {
        int an = 2 * a1 + 1;
        cout << an << " ";
        a1 = an;
    }
    cout << endl;
}

int main() {
    printSequence();
    return 0;
}
Write a C++ program that sums all odd numbers between 1 and 50 but stops the summation when the sum exceeds 100 using a while loop.
ans3 #include <iostream>
using namespace std;

int sumOddNumbers() {
    int sum = 0;
    int num = 1;

    while (sum <= 100) {
        sum += num;
        num += 2;
    }

    return sum - num;
}

int main() {
    int result = sumOddNumbers();
    cout << "The sum of odd numbers between 1 and 50, until the sum exceeds 100, is: " << result << endl;
    return 0;
}
Write a function to print Odd or Even and return even if even else vice-versa.
ans4 #include <iostream>
using namespace std;

int printOddEven(int num) {
    if (num % 2 == 0) {
        cout << "The number " << num << " is even." << endl;
        return 1; 
    } else {
        cout << "The number " << num << " is odd." << endl;
        return 0;
    }
}

int main() {
    int number = 17;
    int result = printOddEven(number);

    if (result == 0) {
        cout << "The opposite of the result is even." << endl;
    } else {
        cout << "The opposite of the result is odd." << endl;
    }

    return 0;
}