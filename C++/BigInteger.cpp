#include "BigInteger.h"
#include "algorithm"

BigInteger::BigInteger(const std::string& number) {
    // Store the number as a reversed string for easier addition
    value = number;    
    std::reverse(value.begin(), value.end());
}

// Function to add another BigInteger to this BigInteger
BigInteger BigInteger::add(const BigInteger& other) {
    string result = "";
    int carry = 0;
    int maxLength = std::max(value.length(), other.value.length());

    // Add corresponding digits from both numbers
    for (int i = 0; i < maxLength; ++i) {
        int digit1 = (i < value.length()) ? value[i] - '0' : 0;
        int digit2 = (i < other.value.length()) ? other.value[i] - '0' : 0;

        int sum = digit1 + digit2 + carry;
        carry = sum / 10;
        result += (sum % 10) + '0';
    }

    // If there's a carry left at the end, add it
    if (carry) {
        result += carry + '0';
    }

    // Reverse the result back to the correct order
    reverse(result.begin(), result.end());

    return BigInteger(result);
}

// Function to get the string representation of the BigInteger
string BigInteger::toString() {
    string result = value;
    reverse(result.begin(), result.end());
    return result;
}

int main() {
    // Example usage
    string input;
    cout << "Input number-1 : ";
    cin >> input;
    BigInteger num1(input);
    cout << "Input number-2 : ";
    cin >> input;
    BigInteger num2(input);
    
    BigInteger sum = num1.add(num2);
    
    cout << "Sum: " << sum.toString() << endl;

    return 0;
}
