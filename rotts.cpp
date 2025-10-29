#include <iostream>
#include <cmath> 
void findRoots(double a, double b, double c) {
    
    const double EPSILON = 1e-9; 

    // --- CASE 1: Not a Quadratic Equation (a is near zero) ---
    if (std::fabs(a) < EPSILON) {
        if (std::fabs(b) < EPSILON) {
            // Case: a=0 and b=0. Equation is c = 0.
            if (std::fabs(c) < EPSILON) {
                std::cout << "The equation is 0 = 0. Infinitely many solutions (any x)." << std::endl;
            } else {
                std::cout << "The equation is " << c << " = 0. No solution." << std::endl;
            }
        } else {
            // Case: a=0, b!=0. Linear equation: bx + c = 0.
            double root = -c / b;
            std::cout << "This is a linear equation (a is negligible). One real root: " << root << std::endl;
        }
        return;
    }

    // --- Calculate the Discriminant (Delta) ---
    double delta = b * b - 4 * a * c;

    // --- CASE 2: Two Distinct Real Roots (Delta > 0) ---
    if (delta > EPSILON) {
        double root1 = (-b + std::sqrt(delta)) / (2 * a);
        double root2 = (-b - std::sqrt(delta)) / (2 * a);
        std::cout << "The equation has two distinct real roots." << std::endl;
        std::cout << "Root 1 (x1) = " << root1 << std::endl;
        std::cout << "Root 2 (x2) = " << root2 << std::endl;
    } 
    // --- CASE 3: One Real Root (Delta = 0) ---
    else if (std::fabs(delta) < EPSILON) {
        double root = -b / (2 * a);
        std::cout << "The equation has one real root (two equal roots)." << std::endl;
        std::cout << "Root (x) = " << root << std::endl;
    } 
    // --- CASE 4: Two Complex Roots (Delta < 0) ---
    else { 
        // delta is negative, so use absolute value for square root
        double realPart = -b / (2 * a);
        double imaginaryPart = std::sqrt(std::fabs(delta)) / (2 * a);
        std::cout << "The equation has two complex conjugate roots." << std::endl;
        std::cout << "Root 1 (x1) = " << realPart << " + " << imaginaryPart << "i" << std::endl;
        std::cout << "Root 2 (x2) = " << realPart << " - " << imaginaryPart << "i" << std::endl;
    }
}

int main() {
    double a, b, c;

    std::cout << "--- C++ Quadratic Equation Solver ---" << std::endl;
    std::cout << "Enter coefficients for ax^2 + bx + c = 0" << std::endl;
    
    // Input coefficient a
    std::cout << "Enter a: ";
    if (!(std::cin >> a)) {
        std::cerr << "Invalid input. Exiting." << std::endl;
        return 1;
    }
    
    // Input coefficient b
    std::cout << "Enter b: ";
    if (!(std::cin >> b)) {
        std::cerr << "Invalid input. Exiting." << std::endl;
        return 1;
    }
    
    // Input coefficient c
    std::cout << "Enter c: ";
    if (!(std::cin >> c)) {
        std::cerr << "Invalid input. Exiting." << std::endl;
        return 1;
    }

    std::cout << "\nSolving: " << a << "x^2 + " << b << "x + " << c << " = 0\n" << std::endl;
    
    // Call the function to find and print the roots
    findRoots(a, b, c);

    return 0; // Indicate successful execution
}
