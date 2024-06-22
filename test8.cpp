 q1 User se 4 input lena hai, inka sum nikalna hai. Agar sum > 100 hota hai to ek function call karna hai, jisme 3 input lena hai aur unka average return      karna hai. Agar returned average > 50 hai to ek aur function call karke factorial nikalna hai aur check karna hai wo prime number hai ya nahi.

ans1 #include <bits/stdc++.h>
using namespace std;


double calculateAverage(double a, double b, double c) {
    return (a + b + c) / 3;
}


bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}


int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    double input1, input2, input3, input4;
    cout << "Enter 4 numbers: ";
    cin >> input1 >> input2 >> input3 >> input4;
    
    double sum = input1 + input2 + input3 + input4;
    cout << "The sum of the 4 numbers is: " << sum << endl;
    
    if (sum > 100) {
        double average = calculateAverage(input1, input2, input3);
        cout << "The average of the 3 numbers is: " << average << endl;
        
        if (average > 50) {
            int num = factorial(average);
            cout << "The factorial of the average is: " << num << endl;
            
            if (isPrime(num)) {
                cout << "The factorial of the average is a prime number." << endl;
            } else {
                cout << "The factorial of the average is not a prime number." << endl;
            }
        }
    }
    
    return 0;
}


q2User se 2 input lena hai, inka product nikalna hai. Agar product < 50 hota hai to ek function call karna hai, jisme product aur ek user input ko add karna hai aur result ko return karna hai. Agar returned value odd hai to ek aur function call karke us value ko square karna hai aur result return karna hai.

ans2  #include <bits/stdc++.h>
using namespace std;

int addToProduct(int product, int input) {
    return product + input;
}

int square(int num) {
    return num * num;
}

int main() {
    int input1, input2;
    cout << "Enter two numbers: ";
    cin >> input1 >> input2;
    
    int product = input1 * input2;
    cout << "The product of the two numbers is: " << product << endl;
    
    if (product < 50) {
        int result = addToProduct(product, input1);
        cout << "The result of adding the product and the first input is: " << result << endl;
        
        if (result % 2 != 0) {
            result = square(result);
            cout << "The square of the odd result is: " << result << endl;
        }
    }
    
    return 0;
}

