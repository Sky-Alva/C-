#include <iostream>
using namespace std;

class BigInteger {
    public:
        // Constructor to initialize the BigInteger with a string
        BigInteger(const string& number);

        // Function to add another BigInteger to this BigInteger
        BigInteger add(const BigInteger& other);

        // Function to get the string representation of the BigInteger
        string toString();

    private:
        string value; // Stored in reversed order for easier computation
};
