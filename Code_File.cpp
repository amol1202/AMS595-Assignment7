// AMOL ARORA, SBU ID: 116491705
// AMS 595 C/C++ Project 1 - Basic Syntax

#include <iostream>
#include <vector>
#include <cmath>

// 1. Conditional Statements
void conditional_statements() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    // Matching the input number to predefined cases
    switch (n) {
        case -1:
            std::cout << "negative one" << std::endl;
            break;
        case 0:
            std::cout << "zero" << std::endl;
            break;
        case 1:
            std::cout << "positive one" << std::endl;
            break;
        default:
            // Default case for unhandled numbers
            std::cout << "other value" << std::endl;
    }
}

// 2. Printing a Vector
// Prints all elements of a vector on a single line.
void print_vector(const std::vector<int>& v) {
    int n = v.size(); // Get the number of elements in the vector

    for (int i = 0; i < n; i++) {
        // Access each element using its index and print it
        std::cout << v[i] << " ";
    }

    // Print a newline after all elements are displayed
    std::cout << std::endl;
}

// 3. While Loops - Fibonacci Sequence
// Generates and prints Fibonacci numbers less than or equal to 4,000,000.
void fibonacci_sequence() {
    int a = 1, b = 2;
    while (a <= 4000000) {
        // Print the current Fibonacci number
        std::cout << a << " ";
        int next = a + b;
        a = b;    // Move to the next pair in the sequence
        b = next;
    }
    std::cout << std::endl;
}

// 4.1 If Prime
// Checks if a number is prime using trial division up to the square root.
bool is_prime(int n) {
    if (n <= 1) return false; // Negative numbers, 0, and 1 are not prime
    for (int i = 2; i <= std::sqrt(n); ++i) {
        // If 'n' is divisible by any number in the range, it's not prime
        if (n % i == 0) return false;
    }
    return true; // 'n' is prime if no divisors are found
}

// Tests the is_prime function with example cases
void test_is_prime() {
    std::cout << "is_prime(2) = " << is_prime(2) << '\n';
    std::cout << "is_prime(10) = " << is_prime(10) << '\n';
    std::cout << "is_prime(17) = " << is_prime(17) << '\n';
}

// 4.2 Factorize
// Returns a list of all factors of the input number.
std::vector<int> factorize(int n) {
    std::vector<int> factors;
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) { // Check if 'i' divides 'n' with no remainder
            factors.push_back(i);
        }
    }
    return factors;
}

// Tests the factorize function with example cases
void test_factorize() {
    print_vector(factorize(2));
    print_vector(factorize(72));
    print_vector(factorize(196));
}

// 4.3 Prime Factorization
// Decomposes a number into its prime factors.
std::vector<int> prime_factorize(int n) {
    std::vector<int> prime_factors;
    for (int i = 2; i <= n; ++i) {
        // Continue dividing 'n' by 'i' as long as it's divisible
        while (n % i == 0) {
            prime_factors.push_back(i);
            n /= i;
        }
    }
    return prime_factors;
}

// Tests the prime_factorize function with example cases
void test_prime_factorize() {
    print_vector(prime_factorize(2));
    print_vector(prime_factorize(72));
    print_vector(prime_factorize(196));
}

// 5. Pascal's Triangle
// Prints the first 'n' rows of Pascal's Triangle.
void print_pascals_triangle(int n) {
    for (int row = 0; row < n; ++row) {
        int value = 1; // Initialize the first value in each row
        for (int col = 0; col <= row; ++col) {
            // Print the current value and calculate the next one
            std::cout << value << " ";
            
            // Now, instead of directly using nCr, I use property.
            value = value * (row - col) / (col + 1);
        }
        std::cout << std::endl; // Move to the next row
    }
}

int main() {
    // Demonstrates each function in action
    std::cout << "\n--- Conditional Statements ---\n";
    conditional_statements();

    std::cout << "\n--- Fibonacci Sequence ---\n";
    fibonacci_sequence();

    std::cout << "\n--- Testing Prime Function ---\n";
    test_is_prime();

    std::cout << "\n--- Testing Factorize Function ---\n";
    test_factorize();

    std::cout << "\n--- Testing Prime Factorize Function ---\n";
    test_prime_factorize();

    std::cout << "\n--- Pascal's Triangle ---\n";
    print_pascals_triangle(5);

    return 0; // Indicate successful program termination
}
