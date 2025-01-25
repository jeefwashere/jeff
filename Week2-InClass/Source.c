#include <stdio.h>

// Define constants (if necessary)
#define PI 3.14159265358979323846

// Function declarations
void greet(void);                    // Student 1
int add(int a, int b);               // Student 2
int subtract(int a, int b);          // Student 3
double calculateArea(double radius); // Student 4
unsigned long long factorial(int n); // Student 5
void displayMenu(void);             // Student 6

int main(void) {
    // Variable declarations
    double radius = 2.849;
    int n = 5;
    int choice;
    char input[100]; // For safer input handling

    // Function Pointer
    double (*areaPtr)(double);
    unsigned long long (*factorialPtr)(int);

    // Display a welcome message
    printf("Welcome to the Collaborative Code Management Program!\n");

    // Call the display_menu() function
    displayMenu();

    // Accept user input for menu selection
    printf("\nEnter your choice: ");
    if (fgets(input, sizeof(input), stdin) != NULL) {
        // Parse the input (placeholder)
        sscanf_s(input, "%d", &choice);
    }

    choice = input[0] - 48;

    // Use a switch-case to handle menu options
    switch (choice) {
    case 1:
        greet(); // Call greet function
        break;
    case 2:
        // Call add function (placeholder)
        break;
    case 3:
        // Call subtract function (placeholder)
        break;
    case 4:
        areaPtr = calculateArea; // Function pointer for area calculation
        printf("The answer is %lf\n", areaPtr(radius)); // Print statement for area result
        break;
    case 5:
        factorialPtr = factorial; // Function pointer for factorial function
        printf("The answer is %llu\n", factorialPtr(n)); // Print statement for factorial result
        break;
    default:
        printf("Invalid choice. Please try again.\n");
        break;
    }

    return 0;
}

// Function definitions (placeholders)

// Student 1: Implement greet() function
void greet(void) {
    // Placeholder
}

// Student 2: Modify add() function to take user input
int add(int a, int b) {
    // Placeholder
    return 0; // Replace with actual logic
}

// Student 3: Complete subtract() function
int subtract(int a, int b) {
    // Placeholder
    return 0; // Replace with actual logic
}

// Student 4: Implement calculate_area() function
double calculateArea(double radius) {
    
    return PI * radius; // Multiplies PI constants with double value
}

// Student 5: Develop factorial() function
unsigned long long factorial(int n) {
    
    if (n == 1) { // Check if the int is 1
         
        return 1; // Returns 1 if int is 1
    }

    return n * factorial(n - 1); // (Recursion function) Return value if n is greater than 1
    
}

// Student 6: Implement display_menu() function
void displayMenu(void) {
    // Placeholder
    printf("Menu:\n");
    printf("1. Greet\n");
    printf("2. Add two numbers\n");
    printf("3. Subtract two numbers\n");
    printf("4. Calculate the area of a circle\n");
    printf("5. Calculate the factorial of a number\n");
}