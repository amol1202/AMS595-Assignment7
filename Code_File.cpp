// AMS 595 C/C++ Project 1 - Basic Syntax

#include <iostream>
#include <vector>
#include <cmath>

// 1. Conditional Statements
void conditional_statements() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

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
            std::cout << "other value" << std::endl;
    }
}

// 2. Printing a Vector
void print_vector(const std::vector<int>& v) {
    for (int num : v) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

// 3. While Loops - Fibonacci Sequence
void fibonacci_sequence() {
    int a = 1, b = 2;
    while (a <= 4000000) {
        std::cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    std::cout << std::endl;
}

// 4.1 If Prime
bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= std::sqrt(n); ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

void test_is_prime() {
    std::cout << "is_prime(2) = " << is_prime(2) << '\n';
    std::cout << "is_prime(10) = " << is_prime(10) << '\n';
    std::cout << "is_prime(17) = " << is_prime(17) << '\n';
}

// 4.2 Factorize
std::vector<int> factorize(int n) {
    std::vector<int> factors;
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            factors.push_back(i);
        }
    }
    return factors;
}

void test_factorize() {
    print_vector(factorize(2));
    print_vector(factorize(72));
    print_vector(factorize(196));
}

// 4.3 Prime Factorization
std::vector<int> prime_factorize(int n) {
    std::vector<int> prime_factors;
    for (int i = 2; i <= n; ++i) {
        while (n % i == 0) {
            prime_factors.push_back(i);
            n /= i;
        }
    }
    return prime_factors;
}

void test_prime_factorize() {
    print_vector(prime_factorize(2));
    print_vector(prime_factorize(72));
    print_vector(prime_factorize(196));
}

// 5. Pascal's Triangle
void print_pascals_triangle(int n) {
    for (int row = 0; row < n; ++row) {
        int value = 1;
        for (int col = 0; col <= row; ++col) {
            std::cout << value << " ";
            value = value * (row - col) / (col + 1);
        }
        std::cout << std::endl;
    }
}

int main() {
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

    return 0;
}
