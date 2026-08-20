#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

// Color codes for console output
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define BOLD    "\033[1m"

void setupConsole() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
}

// Clear screen
void clearScreen() {
    system("CLS");
}

// Function to validate MCQ input (only a-d/A-D allowed)
char getValidMCQInput() {
    char opt;
    while (true) {
        cin >> opt;
        if (opt >= 'a' && opt <= 'd') break;
        if (opt >= 'A' && opt <= 'D') break;
        cout << RED << "Invalid option! Please enter only a, b, c, or d: " << RESET;
        cin.clear();
        cin.ignore(1000, '\n');
    }
    return opt;
}

int safeIntInput(){
	int x;
	cin>>x;
	while(cin.fail()){
		cin.clear();
		cin.ignore(1000, '\n');
		cout<< RED <<"invalid input! Enter a number: "<< RESET;
		cin>>x;
	}
	return x;
}

// Page break function
void pageBreak() {
    cout << CYAN << "\n          ╔════════════════════════════════════════════════════════════════╗\n";
    cout << "          ║                   PRESS ENTER TO CONTINUE...                   ║\n";
    cout << "          ╚════════════════════════════════════════════════════════════════╝\n" << RESET;
    cin.ignore();
    cin.get();
}

// ===== Function Prototypes =====
void mainMenu();
void arraysMenu();
void searchMenu();
void linearSearchMenu();
void linearSearchquiz();
void binarySearchMenu();
void binarySearchquiz();
void sortMenu();
void bubbleSortMenu();
void bubbleSortquiz();
void selectionSortMenu();
void selectionSortquiz();
void insertionSortMenu();
void insertionSortquiz();
void updateMenu();
void deleteMenu();
void insertMenu();
void insertStartMenu();
void insertEndMenu();
void insertAnyMenu();

// Linked List Menus
void linkedListMenu();
void sinlinkedListMenu();
void insertLLMenu();
void deleteLLMenu();
void searchLLMenu();
void updateLLMenu();
void doulinkedListMenu();
void insertDLLMenu();
void deleteDLLMenu();
void searchDLLMenu();
void updateDLLMenu();
void CirlinkedListMenu();
void deleteCircularMenu();

// Stack and Queue
void stackMenu();
void stackAlgorithm();
void stackTry();
void stackQuiz();
void queueMenu();
void queueAlgorithm();
void queueTry();
void queueQuiz();

// Double Linked List Functions
void insertStartMenuDLL();
void insertionAtStartAlgorithmDLL();
void insertionAtStartTryDLL();
void insertionAtStartQuizDLL();
void insertEndMenuDLL();
void insertionAtEndAlgorithmDLL();
void insertionAtEndTryDLL();
void insertionAtEndQuizDLL();
void insertAnyMenuDLL();
void insertAlgorithmDLL();
void insertTryDLL();
void insertQuizDLL();
void deleteDLLMenu();
void deleteDStartMenu();
void deleteAlgorithmSD();
void deleteTrySD();
void deletequizSD();
void deleteDEndMenu();
void deleteAlgorithmED();
void deleteTryED();
void deletequizED();
void deleteDMidMenu();
void deleteAlgorithmMD();
void deleteTryMD();
void deletequizMD();
void updateDLLMenu();
void updateAlgorithmDLL();
void updateTryDLL();
void updatequizDLL();
void searchDLLMenu();
void DLLSearchAlgorithm();
void DLLSearchTry();
void DLLSearchquiz();

// Circular Linked List Functions
void deleteCircularStartMenu();
void deleteCircularStartAlgorithm();
void deleteCircularStartTry();
void deleteCircularStartQuiz();
void deleteCircularEndMenu();
void deleteCircularEndAlgorithm();
void deleteCircularEndTry();
void deleteCircularEndQuiz();
void deleteCircularMidMenu();
void deleteCircularMidAlgorithm();
void deleteCircularMidTry();
void deleteCircularMidQuiz();

// ===== Array Insert Operations =====
void insertStartAlgorithm() {
    clearScreen();
    cout << CYAN << BOLD << "\t\t ================================================\n" << RESET;
    cout << GREEN << BOLD << "\t\t║         ARRAY INSERT AT START ALGORITHM      ║\n" << RESET;
    cout << CYAN << BOLD << "\t\t ================================================\n\n" << RESET;

    cout << "\tStep 1: Check if array has space\n";
    cout << "\tStep 2: Shift all elements to right by one position\n";
    cout << "\tStep 3: Insert new element at index 0\n";
    cout << "\tStep 4: Increment array size\n\n";
    
    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << YELLOW << BOLD << "\t\t            ⏳ TIME COMPLEXITY\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << RED << "\t❌ Worst Case:  O(n) - Need to shift all elements\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;

    cout << "\n\tPress ENTER to return...";
    cin.ignore();
    cin.get();
}

void insertStartTry() {
    clearScreen();
    cout << CYAN << BOLD << "===== Array Insert at Start - Try It Yourself =====\n\n" << RESET;
    
    int n;
    cout << "Enter initial size of array: ";
    n = safeIntInput();

    int arr[100];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        arr[i] = safeIntInput();
    }

    cout << "\nOriginal array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    
    int newElement;
    cout << "\n\nEnter element to insert at start: ";
    newElement = safeIntInput();

    if (n < 100) {
        for (int i = n; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = newElement;
        n++;

        cout << GREEN << "\nArray after insertion: ";
        for (int i = 0; i < n; i++) cout << arr[i] << " ";
        cout << RESET << "\n";
    } else {
        cout << RED << "Array is full! Cannot insert.\n" << RESET;
    }
    pageBreak();
}

void insertStartQuiz() {
    char opt;
    int count = 0;
    clearScreen();
    cout << CYAN << BOLD << "===== Array Insert at Start - Quiz =====\n\n" << RESET;
    
    cout << "1. What is the time complexity of inserting at start in array?\n";
    cout << "a) O(1)\n";
    cout << "b) O(n)\n";
    cout << "c) O(log n)\n";
    cout << "d) O(n²)\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct! O(n) due to shifting elements.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option B is correct.\n\n" << RESET;
    }
    
    cout << "2. How many elements need to be shifted?\n";
    cout << "a) 0\n";
    cout << "b) 1\n";
    cout << "c) n (all elements)\n";
    cout << "d) n/2\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'C' || opt == 'c') {
        cout << GREEN << "✓ Correct! All elements need shifting.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option C is correct.\n\n" << RESET;
    }
    
    cout << "3. Which index receives the new element?\n";
    cout << "a) Last index\n";
    cout << "b) Middle index\n";
    cout << "c) Index 0\n";
    cout << "d) Random index\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'C' || opt == 'c') {
        cout << GREEN << "✓ Correct! New element goes to index 0.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option C is correct.\n\n" << RESET;
    }
    
    cout << "4. What is the first step in insertion?\n";
    cout << "a) Insert element\n";
    cout << "b) Check available space\n";
    cout << "c) Shift elements\n";
    cout << "d) Update size\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct! Check space first.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option B is correct.\n\n" << RESET;
    }
    
    cout << "5. What happens if array is full?\n";
    cout << "a) Operation fails\n";
    cout << "b) Array resizes\n";
    cout << "c) Last element removed\n";
    cout << "d) First element replaced\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'A' || opt == 'a') {
        cout << GREEN << "✓ Correct! Insertion fails if full.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option A is correct.\n\n" << RESET;
    }
    
    cout << CYAN << "====================================\n" << RESET;
    cout << "You got " << GREEN << count << RESET << " out of 5 correct!\n";
    cout << CYAN << "====================================\n" << RESET;
    
    pageBreak();
}

void insertStartMenu() {
    int choice;
    do {
        clearScreen();
        cout << CYAN << BOLD << "===== Array Insert at Start =====\n" << RESET;
        cout << "1. View Algorithm\n";
        cout << "2. Try It Yourself\n";
        cout << "3. Take Quiz\n";
        cout << "0. Back\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();

        switch (choice) {
            case 1: insertStartAlgorithm(); break;
            case 2: insertStartTry(); break;
            case 3: insertStartQuiz(); break;
            case 0: break;
            default: 
                cout << RED << "Invalid choice!\n" << RESET; 
                cin.ignore(); 
                cin.get();
        }
    } while (choice != 0);
}

void insertEndAlgorithm() {
    clearScreen();
    cout << CYAN << BOLD << "\t\t ================================================\n" << RESET;
    cout << GREEN << BOLD << "\t\t║          ARRAY INSERT AT END ALGORITHM       ║\n" << RESET;
    cout << CYAN << BOLD << "\t\t ================================================\n\n" << RESET;

    cout << "\tStep 1: Check if array has space\n";
    cout << "\tStep 2: Insert new element at the end\n";
    cout << "\tStep 3: Increment array size\n\n";
    
    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << YELLOW << BOLD << "\t\t              ⏳ TIME COMPLEXITY\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << GREEN << "\t✅ Best Case:   O(1) - Direct insertion\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;

    cout << "\n\tPress ENTER to return...";
    cin.ignore();
    cin.get();
}

void insertEndTry() {
    clearScreen();
    cout << CYAN << BOLD << "===== Array Insert at End - Try It Yourself =====\n\n" << RESET;
    
    int n;
    cout << "Enter initial size of array: ";
    n = safeIntInput();

    int arr[100];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        arr[i] = safeIntInput();
    }

    cout << "\nOriginal array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    
    int newElement;
    cout << "\n\nEnter element to insert at end: ";
    newElement = safeIntInput();

    if (n < 100) {
        arr[n] = newElement;
        n++;

        cout << GREEN << "\nArray after insertion: ";
        for (int i = 0; i < n; i++) cout << arr[i] << " ";
        cout << RESET << "\n";
    } else {
        cout << RED << "Array is full! Cannot insert.\n" << RESET;
    }
    pageBreak();
}

void insertEndQuiz() {
    char opt;
    int count = 0;
    clearScreen();
    cout << CYAN << BOLD << "===== Array Insert at End - Quiz =====\n\n" << RESET;
    
    cout << "1. What is the time complexity of inserting at end?\n";
    cout << "a) O(1)\n";
    cout << "b) O(n)\n";
    cout << "c) O(log n)\n";
    cout << "d) O(n²)\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'A' || opt == 'a') {
        cout << GREEN << "✓ Correct! O(1) for direct insertion.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option A is correct.\n\n" << RESET;
    }
    
    cout << "2. How many elements are shifted?\n";
    cout << "a) 0\n";
    cout << "b) 1\n";
    cout << "c) n\n";
    cout << "d) n/2\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'A' || opt == 'a') {
        cout << GREEN << "✓ Correct! No shifting needed.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option A is correct.\n\n" << RESET;
    }
    
    cout << "3. Where is the new element placed?\n";
    cout << "a) Index 0\n";
    cout << "b) Current size index\n";
    cout << "c) Middle index\n";
    cout << "d) Random index\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct! At current size index.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option B is correct.\n\n" << RESET;
    }
    
    cout << "4. What is the main advantage?\n";
    cout << "a) Fast operation\n";
    cout << "b) No element shifting\n";
    cout << "c) Preserves order\n";
    cout << "d) All of above\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'D' || opt == 'd') {
        cout << GREEN << "✓ Correct! All advantages apply.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option D is correct.\n\n" << RESET;
    }
    
    cout << "5. When does insertion fail?\n";
    cout << "a) Array empty\n";
    cout << "b) Array full\n";
    cout << "c) Element too large\n";
    cout << "d) Never fails\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct! Only fails when full.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option B is correct.\n\n" << RESET;
    }
    
    cout << CYAN << "====================================\n" << RESET;
    cout << "You got " << GREEN << count << RESET << " out of 5 correct!\n";
    cout << CYAN << "====================================\n" << RESET;
    
    pageBreak();
}

void insertEndMenu() {
    int choice;
    do {
        clearScreen();
        cout << CYAN << BOLD << "===== Array Insert at End =====\n" << RESET;
        cout << "1. View Algorithm\n";
        cout << "2. Try It Yourself\n";
        cout << "3. Take Quiz\n";
        cout << "0. Back\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();

        switch (choice) {
            case 1: insertEndAlgorithm(); break;
            case 2: insertEndTry(); break;
            case 3: insertEndQuiz(); break;
            case 0: break;
            default: 
                cout << RED << "Invalid choice!\n" << RESET; 
                cin.ignore(); 
                cin.get();
        }
    } while (choice != 0);
}

void insertAnyAlgorithm() {
    clearScreen();
    cout << CYAN << BOLD << "\t\t================================================\n" << RESET;
    cout << GREEN << BOLD << "\t\t║       ARRAY INSERT AT POSITION ALGORITHM     ║\n" << RESET;
    cout << CYAN << BOLD << "\t\t================================================\n\n" << RESET;

    cout << "\tStep 1: Check if array has space and position valid\n";
    cout << "\tStep 2: Shift elements from position to end to right\n";
    cout << "\tStep 3: Insert new element at position\n";
    cout << "\tStep 4: Increment array size\n\n";
    
    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << YELLOW << BOLD << "\t\t              ⏳ TIME COMPLEXITY\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << RED << "\t❌ Worst Case:  O(n) - Inserting at start\n" << RESET;
    cout << GREEN << "\t✅ Best Case:   O(1) - Inserting at end\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;

    cout << "\n\tPress ENTER to return...";
    cin.ignore();
    cin.get();
}

void insertAnyTry() {
    clearScreen();
    cout << CYAN << BOLD << "===== Array Insert at Position - Try It Yourself =====\n\n" << RESET;
    
    int n;
    cout << "Enter initial size of array: ";
    n = safeIntInput();

    int arr[100];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        arr[i] = safeIntInput();
    }

    cout << "\nOriginal array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    
    int newElement, position;
    cout << "\n\nEnter element to insert: ";
    newElement = safeIntInput();
    cout << "Enter position (1 to " << n + 1 << "): ";
    cin >> position;

    if (position < 1 || position > n + 1) {
        cout << RED << "Invalid position!\n" << RESET;
    } else if (n >= 100) {
        cout << RED << "Array is full! Cannot insert.\n" << RESET;
    } else {
        for (int i = n; i >= position; i--) {
            arr[i] = arr[i - 1];
        }
        arr[position - 1] = newElement;
        n++;

        cout << GREEN << "\nArray after insertion: ";
        for (int i = 0; i < n; i++) cout << arr[i] << " ";
        cout << RESET << "\n";
    }
    pageBreak();
}

void insertAnyQuiz() {
    char opt;
    int count = 0;
    clearScreen();
    cout << CYAN << BOLD << "===== Array Insert at Position - Quiz =====\n\n" << RESET;
    
    cout << "1. What is worst-case time complexity?\n";
    cout << "a) O(1)\n";
    cout << "b) O(n)\n";
    cout << "c) O(log n)\n";
    cout << "d) O(n²)\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct! O(n) when inserting at start.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option B is correct.\n\n" << RESET;
    }
    
    cout << "2. How many elements shifted when inserting at middle?\n";
    cout << "a) 0\n";
    cout << "b) n/2\n";
    cout << "c) n - position\n";
    cout << "d) position\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'C' || opt == 'c') {
        cout << GREEN << "✓ Correct! n - position elements shifted.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option C is correct.\n\n" << RESET;
    }
    
    cout << "3. What is validated first?\n";
    cout << "a) Element value\n";
    cout << "b) Array space and position\n";
    cout << "c) Array sorting\n";
    cout << "d) Element type\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct! Space and position first.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option B is correct.\n\n" << RESET;
    }
    
    cout << "4. Which position is fastest?\n";
    cout << "a) Start\n";
    cout << "b) Middle\n";
    cout << "c) End\n";
    cout << "d) All same\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'C' || opt == 'c') {
        cout << GREEN << "✓ Correct! End position fastest.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option C is correct.\n\n" << RESET;
    }
    
    cout << "5. What happens to elements after insertion?\n";
    cout << "a) Shifted left\n";
    cout << "b) Shifted right\n";
    cout << "c) Deleted\n";
    cout << "d) Unchanged\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct! Elements shifted right.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option B is correct.\n\n" << RESET;
    }
    
    cout << CYAN << "====================================\n" << RESET;
    cout << "You got " << GREEN << count << RESET << " out of 5 correct!\n";
    cout << CYAN << "====================================\n" << RESET;
    
    pageBreak();
}

void insertAnyMenu() {
    int choice;
    do {
        clearScreen();
        cout << CYAN << BOLD << "===== Array Insert at Position =====\n" << RESET;
        cout << "1. View Algorithm\n";
        cout << "2. Try It Yourself\n";
        cout << "3. Take Quiz\n";
        cout << "0. Back\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();

        switch (choice) {
            case 1: insertAnyAlgorithm(); break;
            case 2: insertAnyTry(); break;
            case 3: insertAnyQuiz(); break;
            case 0: break;
            default: 
                cout << RED << "Invalid choice!\n" << RESET; 
                cin.ignore(); 
                cin.get();
        }
    } while (choice != 0);
}

void insertMenu() {
    int choice;
    do {
        clearScreen();
        cout << CYAN << BOLD << "===== Array Insert Operations =====\n" << RESET;
        cout << "1. Insert at Start\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert at Position\n";
        cout << "0. Back\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();

        switch (choice) {
            case 1: insertStartMenu(); break;
            case 2: insertEndMenu(); break;
            case 3: insertAnyMenu(); break;
            case 0: break;
            default: 
                cout << RED << "Invalid choice!\n" << RESET; 
                cin.ignore(); 
                cin.get();
        }
    } while (choice != 0);
}

// ===== Array Search Operations =====
void linearSearchAlgorithm() {
    clearScreen();
    cout << CYAN << BOLD << "\t\t\t---------------------------------------------------\n" << RESET;
    cout << GREEN << BOLD << "\t\t\t             🔎 LINEAR SEARCH ALGORITHM 🔎\n" << RESET;
    cout << CYAN << BOLD << "\t\t\t---------------------------------------------------\n\n" << RESET;

    cout << "\tStep #1: Start the algorithm.\n";
    cout << "\tStep #2: Ask the user to enter the size of the array (n).\n";
    cout << "\tStep #3: Ask the user to input all n elements of the array.\n";
    cout << "\tStep #4: Ask the user to enter the element to search (key).\n";
    cout << "\tStep #5: Set a flag = false (to track if the key is found).\n";
    cout << "\tStep #6: Repeat for every element from i = 0 to n-1:\n";
    cout << "\t          → If arr[i] equals the key:\n";
    cout << "\t               Set flag = true.\n";
    cout << "\t               Save location = i.\n";
    cout << "\t               Break the loop (since element is found).\n";
    cout << "\tStep #7: After the loop ends:\n";
    cout << "\t          → If flag is true, print 'Element found at index location'.\n";
    cout << "\t          → Otherwise, print 'Element not found'.\n";
    cout << "\tStep #8: End the algorithm.\n";

    cout << CYAN << "\n\t\t\t---------------------------------------------------\n" << RESET;
    cout << YELLOW << BOLD << "\t\t\t              ⏳ TIME COMPLEXITY\n" << RESET;
    cout << CYAN << "\t\t\t---------------------------------------------------\n" << RESET;
    cout << GREEN << "\t✅ Best Case:   O(1)       → If the element is found at the very first position.\n" << RESET;
    cout << RED << "\t❌ Worst Case:  O(n)       → If the element is at the last position or not present at all.\n" << RESET;
    cout << BLUE << "\t📊 Average:     O(n/2) ≈ O(n)  → On average, it searches half the array.\n" << RESET;
    cout << CYAN << "\t\t\t---------------------------------------------------\n" << RESET;

    cout << "\n\tPress ENTER to return....";
    cin.ignore();
    cin.get();
}

void linearSearchTry() {
    clearScreen();
    cout << CYAN << BOLD << "===== Linear Search: Try It Yourself =====\n\n" << RESET;
    
    int n, key;
    cout << "Enter the size of the array: ";
    n = safeIntInput();

    int arr[100];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        arr[i] = safeIntInput();
    }

    cout << "Enter the element to search: ";
    key = safeIntInput();

    bool found = false;
    int pos = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = true;
            pos = i;
            break;
        }
    }

    if (found) {
        cout << GREEN << "\nElement " << key << " found at position " << pos + 1 << ".\n" << RESET;
    } else {
        cout << RED << "\nElement " << key << " not found in the array.\n" << RESET;
    }

    pageBreak();
}

void linearSearchquiz() {
    char opt;
    int count = 0;
    clearScreen();
    cout << CYAN << BOLD << "===== Linear Search: Quiz =====\n\n" << RESET;
    cout << "Choose the correct options of the following.\n\n";	
    
    cout << "1. Which of the following best describes the working of a linear search algorithm?\n";
    cout << "a) It divides the array into two halves and searches in one half\n";
    cout << "b) It checks each element of the array sequentially until the target is found or the end is reached\n";
    cout << "c) It sorts the array first and then searches\n";
    cout << "d) It uses a binary tree for searching\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct option!\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ " << opt << " is incorrect. Option B is correct because Linear search scans elements one by one in order, without needing sorting or dividing.\n\n" << RESET;
    }
    
    cout << "2. What is the time complexity of linear search in the worst case?\n";
    cout << "a) O(1)\n";
    cout << "b) O(log n)\n";
    cout << "c) O(n)\n";
    cout << "d) O(n log n)\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'C' || opt == 'c') {
        cout << GREEN << "✓ Correct option!\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ " << opt << " is incorrect. Option C is correct because in the worst case, the algorithm may need to check all n elements.\n\n" << RESET;
    }
    
    cout << "3. If the element to be searched is the first element in the array, the best-case time complexity of linear search is:\n";
    cout << "a) O(n)\n";
    cout << "b) O(1)\n";
    cout << "c) O(n/2)\n";
    cout << "d) O(log n)\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct option!\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ " << opt << " is incorrect. Option B is correct because in the best case, the element is found at the very first comparison.\n\n" << RESET;
    }
    
    cout << "4. Linear search is most suitable when:\n";
    cout << "a) The array is always sorted\n";
    cout << "b) The array is unsorted or small in size\n";
    cout << "c) The data set is very large\n";
    cout << "d) The array is stored in a binary tree\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct option!\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ " << opt << " is incorrect. Option B is correct because for small or unsorted arrays, linear search is simple and effective.\n\n" << RESET;
    }
    
    cout << "5. In an array of size 10, the maximum number of comparisons required in linear search is:\n";
    cout << "a) 1\n";
    cout << "b) 5\n";
    cout << "c) 9\n";
    cout << "d) 10\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'D' || opt == 'd') {
        cout << GREEN << "✓ Correct option!\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ " << opt << " is incorrect. Option D is correct because in the worst case, all 10 elements need to be checked.\n\n" << RESET;
    }
    
    cout << CYAN << "====================================\n" << RESET;
    cout << "From the 5 questions you have " << GREEN << count << RESET << " questions correct\n";
    cout << CYAN << "====================================\n" << RESET;
    
    pageBreak();
}

void linearSearchMenu() {
    int choice;
    do {
        clearScreen();
        cout << CYAN << BOLD << "===== Linear Search =====\n" << RESET;
        cout << "1. View Algorithm / Explanation\n";
        cout << "2. Try It Yourself\n";
        cout << "3. Try Quiz\n";
        cout << "0. Back\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();

        switch (choice) {
            case 1: linearSearchAlgorithm(); break;
            case 2: linearSearchTry(); break;
            case 3: linearSearchquiz(); break;
            case 0: break;
            default: 
                cout << RED << "Invalid choice!\n" << RESET; 
                cin.ignore(); 
                cin.get();
        }
    } while (choice != 0);
}

// ===== Binary Search Functions =====
void binarySearchAlgorithm() {
    clearScreen();
    cout << CYAN << BOLD << "\t\t\t---------------------------------------------------\n" << RESET;
    cout << GREEN << BOLD << "\t\t\t             🔍 BINARY SEARCH ALGORITHM 🔍\n" << RESET;
    cout << CYAN << BOLD << "\t\t\t---------------------------------------------------\n\n" << RESET;

    cout << "\tStep #1: Start the algorithm.\n";
    cout << "\tStep #2: Ask the user to enter the size of the array (n).\n";
    cout << "\tStep #3: Ask the user to input all n elements of the array (sorted order).\n";
    cout << "\tStep #4: Ask the user to enter the element to search (key).\n";
    cout << "\tStep #5: Set two pointers → low = 0 and high = n - 1.\n";
    cout << "\tStep #6: Repeat the process while low is less than or equal to high:\n";
    cout << "\t          → Find the middle index: mid = (low + high) / 2.\n";
    cout << "\t          → If the middle element matches the key:\n";
    cout << "\t               Print 'Element found at index mid' and stop.\n";
    cout << "\t          → Else if the key is smaller than the middle element:\n";
    cout << "\t               Move the search to the left half (high = mid - 1).\n";
    cout << "\t          → Otherwise:\n";
    cout << "\t               Move the search to the right half (low = mid + 1).\n";
    cout << "\tStep #7: If the loop ends without finding the key,\n";
    cout << "\t          print 'Element not found'.\n";
    cout << "\tStep #8: End the algorithm.\n";

    cout << CYAN << "\n\t\t\t---------------------------------------------------\n" << RESET;
    cout << YELLOW << BOLD << "\t\t\t              ⏳ TIME COMPLEXITY\n" << RESET;
    cout << CYAN << "\t\t\t---------------------------------------------------\n" << RESET;
    cout << GREEN << "\t✅ Best Case:   O(1)       → If the element is found at the middle in the first check.\n" << RESET;
    cout << RED << "\t❌ Worst Case:  O(log n)   → Keep dividing the array until the element is found/not found.\n" << RESET;
    cout << BLUE << "\t📊 Average:     O(log n)   → Generally requires halving the array multiple times.\n" << RESET;
    cout << CYAN << "\t\t\t---------------------------------------------------\n" << RESET;

    cout << "\n\tPress ENTER to return....";
    cin.ignore();
    cin.get();
}

void binarySearchTry() {
    clearScreen();
    cout << CYAN << BOLD << "===== Binary Search: Try It Yourself =====\n\n" << RESET;
    
    int n, key;
    cout << "Enter the size of the array: ";
    n = safeIntInput();

    int arr[100];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        arr[i] = safeIntInput();
    }

    // Check if array is sorted
    bool sorted = true;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            sorted = false;
            break;
        }
    }

    if (!sorted) {
        cout << YELLOW << "\nNote: The array was not sorted. Automatically sorting it...\n" << RESET;

        // Bubble Sort
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        cout << "Sorted Array: ";
        for (int i = 0; i < n; i++) cout << arr[i] << " ";
        cout << "\n";
    }

    cout << "Enter the element to search: ";
    key = safeIntInput();

    int low = 0, high = n - 1, mid;
    bool found = false;
    int pos = -1;

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            found = true;
            pos = mid;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (found) {
        cout << GREEN << "\nElement " << key << " found at position " << pos + 1 << ".\n" << RESET;
    } else {
        cout << RED << "\nElement " << key << " not found in the array.\n" << RESET;
    }

    pageBreak();
}

void binarySearchquiz() {
    char opt;
    int count = 0;
    clearScreen();
    cout << CYAN << BOLD << "===== Binary Search: Quiz =====\n\n" << RESET;
    cout << "Choose the correct options of the following.\n\n";
    
    cout << "1. Which of the following is a requirement for Binary Search to work correctly?\n";
    cout << "a) The array must be unsorted\n";
    cout << "b) The array must be sorted\n";
    cout << "c) The array must be dynamic\n";
    cout << "d) The array must be two-dimensional\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct option!\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ " << opt << " is incorrect. Option B is correct because Binary search works only on sorted arrays.\n\n" << RESET;
    }
    
    cout << "2. What is the worst-case time complexity of binary search?\n";
    cout << "a) O(1)\n";
    cout << "b) O(n)\n";
    cout << "c) O(log n)\n";
    cout << "d) O(n log n)\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'C' || opt == 'c') {
        cout << GREEN << "✓ Correct option!\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ " << opt << " is incorrect. Option C is correct because binary search divides the array in half each time.\n\n" << RESET;
    }
    
    cout << "3. If we apply binary search on an array of size 32, the maximum number of comparisons required is:\n";
    cout << "a) 5\n";
    cout << "b) 16\n";
    cout << "c) 32\n";
    cout << "d) 8\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'A' || opt == 'a') {
        cout << GREEN << "✓ Correct option!\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ " << opt << " is incorrect. Option A is correct because log₂(32) = 5.\n\n" << RESET;
    }
    
    cout << "4. Which approach is usually used to implement Binary Search?\n";
    cout << "a) Recursion only\n";
    cout << "b) Iteration only\n";
    cout << "c) Both recursion and iteration can be used\n";
    cout << "d) Hashing\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'C' || opt == 'c') {
        cout << GREEN << "✓ Correct option!\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ " << opt << " is incorrect. Option C is correct because both methods are valid.\n\n" << RESET;
    }
    
    cout << "5. Suppose we apply binary search on the sorted array: [2, 5, 8, 12, 16, 23, 38, 56] to find 23.\n";
    cout << "How many comparisons will be required?\n";
    cout << "a) 1\n";
    cout << "b) 2\n";
    cout << "c) 3\n";
    cout << "d) 4\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'C' || opt == 'c') {
        cout << GREEN << "✓ Correct option!\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ " << opt << " is incorrect. Option C is correct because it takes 3 comparisons to find 23.\n\n" << RESET;
    }
    
    cout << CYAN << "====================================\n" << RESET;
    cout << "From the 5 questions you have " << GREEN << count << RESET << " questions correct\n";
    cout << CYAN << "====================================\n" << RESET;
    
    pageBreak();
}

void binarySearchMenu() {
    int choice;
    do {
        clearScreen();
        cout << CYAN << BOLD << "===== Binary Search =====\n" << RESET;
        cout << "1. View Algorithm / Explanation\n";
        cout << "2. Try It Yourself\n";
        cout << "3. Try Quiz\n";
        cout << "0. Back\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();

        switch (choice) {
            case 1: binarySearchAlgorithm(); break;
            case 2: binarySearchTry(); break;
            case 3: binarySearchquiz(); break;   
            case 0: break;
            default: 
                cout << RED << "Invalid choice!\n" << RESET; 
                cin.ignore(); 
                cin.get();
        }
    } while (choice != 0);
}

// ===== Bubble Sort Functions =====
void bubbleSortAlgorithm() {
    clearScreen();
    cout << CYAN << BOLD << "\t\t================================================\n" << RESET;
    cout << GREEN << BOLD << "\t\t║             BUBBLE SORT ALGORITHM           ║\n" << RESET;
    cout << CYAN << BOLD << "\t\t================================================\n\n" << RESET;

    cout << "\tStep 1: Start from the first element\n";
    cout << "\tStep 2: Compare adjacent elements\n";
    cout << "\tStep 3: Swap if they are in wrong order\n";
    cout << "\tStep 4: Move to next pair\n";
    cout << "\tStep 5: Repeat for all elements\n";
    cout << "\tStep 6: Reduce range by one each pass\n";
    cout << "\tStep 7: Continue until no swaps needed\n\n";

    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << YELLOW << BOLD << "\t\t              ⏳ TIME COMPLEXITY\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << GREEN << "\t✅ Best Case:   O(n)       → When array is already sorted\n" << RESET;
    cout << RED << "\t❌ Worst Case:  O(n²)      → When array is reverse sorted\n" << RESET;
    cout << BLUE << "\t📊 Average:     O(n²)      → Random order array\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;

    cout << "\n\tPress ENTER to return...";
    cin.ignore();
    cin.get();
}

void bubbleSortTry() {
    clearScreen();
    cout << CYAN << BOLD << "===== Bubble Sort: Try It Yourself =====\n\n" << RESET;
    
    int n;
    cout << "Enter the size of the array: ";
    n = safeIntInput();

    int arr[100];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        arr[i] = safeIntInput();
    }

    cout << "\nOriginal array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n\n";

    // Bubble Sort implementation
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        
        cout << "After pass " << i + 1 << ": ";
        for (int k = 0; k < n; k++) cout << arr[k] << " ";
        cout << "\n";
        
        if (!swapped) break; // Array is sorted
    }

    cout << GREEN << "\nSorted array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << RESET << "\n";

    pageBreak();
}

void bubbleSortquiz() {
    char opt;
    int count = 0;
    clearScreen();
    cout << CYAN << BOLD << "===== Bubble Sort: Quiz =====\n\n" << RESET;
    cout << "Choose the correct options of the following.\n\n";
    
    cout << "1. What is the basic idea of Bubble Sort?\n";
    cout << "a) Divide the array and conquer each half\n";
    cout << "b) Repeatedly swap adjacent elements if they are in the wrong order\n";
    cout << "c) Place each element in its correct position using a pivot\n";
    cout << "d) Build a sorted list one element at a time\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct option!\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ " << opt << " is incorrect. Option B is correct because Bubble Sort works by comparing adjacent elements.\n\n" << RESET;
    }
    
    cout << "2. What is the time complexity of Bubble Sort in the worst case?\n";
    cout << "a) O(n)\n";
    cout << "b) O(n log n)\n";
    cout << "c) O(n²)\n";
    cout << "d) O(log n)\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'C' || opt == 'c') {
        cout << GREEN << "✓ Correct option!\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ " << opt << " is incorrect. Option C is correct because in worst case it requires O(n²) comparisons.\n\n" << RESET;
    }
    
    cout << "3. In which case does Bubble Sort perform best?\n";
    cout << "a) When the array is reverse sorted\n";
    cout << "b) When the array is already sorted\n";
    cout << "c) When the array has duplicate elements\n";
    cout << "d) When the array is large\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct option!\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ " << opt << " is incorrect. Option B is correct because it can detect sorted array in one pass.\n\n" << RESET;
    }
    
    cout << "4. How many passes are required for Bubble Sort to sort an array of n elements?\n";
    cout << "a) n passes always\n";
    cout << "b) n-1 passes in worst case\n";
    cout << "c) log n passes\n";
    cout << "d) n² passes\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct option!\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ " << opt << " is incorrect. Option B is correct because maximum n-1 passes are needed.\n\n" << RESET;
    }
    
    cout << "5. What is the space complexity of Bubble Sort?\n";
    cout << "a) O(n)\n";
    cout << "b) O(n²)\n";
    cout << "c) O(log n)\n";
    cout << "d) O(1)\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'D' || opt == 'd') {
        cout << GREEN << "✓ Correct option!\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ " << opt << " is incorrect. Option D is correct because it uses only constant extra space.\n\n" << RESET;
    }
    
    cout << CYAN << "====================================\n" << RESET;
    cout << "From the 5 questions you have " << GREEN << count << RESET << " questions correct\n";
    cout << CYAN << "====================================\n" << RESET;
    
    pageBreak();
}

void bubbleSortMenu() {
    int choice;
    do {
        clearScreen();
        cout << CYAN << BOLD << "===== Bubble Sort =====\n" << RESET;
        cout << "1. View Algorithm / Explanation\n";
        cout << "2. Try It Yourself\n";
        cout << "3. Try Quiz\n";
        cout << "0. Back\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();

        switch (choice) {
            case 1: bubbleSortAlgorithm(); break;
            case 2: bubbleSortTry(); break;
            case 3: bubbleSortquiz(); break;
            case 0: break;
            default: 
                cout << RED << "Invalid choice!\n" << RESET; 
                cin.ignore(); 
                cin.get();
        }
    } while (choice != 0);
}

// ===== Selection Sort Functions =====
void selectionSortAlgorithm() {
    clearScreen();
    cout << CYAN << BOLD << "\t\t================================================\n" << RESET;
    cout << GREEN << BOLD << "\t\t║           SELECTION SORT ALGORITHM          ║\n" << RESET;
    cout << CYAN << BOLD << "\t\t================================================\n\n" << RESET;

    cout << "\tStep 1: Start from the first element as minimum\n";
    cout << "\tStep 2: Find the minimum element in remaining array\n";
    cout << "\tStep 3: Swap with current position\n";
    cout << "\tStep 4: Move to next position\n";
    cout << "\tStep 5: Repeat until array is sorted\n\n";

    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << YELLOW << BOLD << "\t\t              ⏳ TIME COMPLEXITY\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << GREEN << "\t✅ Best Case:   O(n²)\n" << RESET;
    cout << RED << "\t❌ Worst Case:  O(n²)\n" << RESET;
    cout << BLUE << "\t📊 Average:     O(n²)\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;

    cout << "\n\tPress ENTER to return...";
    cin.ignore();
    cin.get();
}

void selectionSortTry() {
    clearScreen();
    cout << CYAN << BOLD << "===== Selection Sort: Try It Yourself =====\n\n" << RESET;
    
    int n;
    cout << "Enter the size of the array: ";
    n = safeIntInput();

    int arr[100];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        arr[i] = safeIntInput();
    }

    cout << "\nOriginal array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n\n";

    // Selection Sort implementation
    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        
        // Swap the found minimum element
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
        
        cout << "After pass " << i + 1 << ": ";
        for (int k = 0; k < n; k++) cout << arr[k] << " ";
        cout << "\n";
    }

    cout << GREEN << "\nSorted array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << RESET << "\n";

    pageBreak();
}

void selectionSortquiz() {
    char opt;
    int count = 0;
    clearScreen();
    cout << CYAN << BOLD << "===== Selection Sort: Quiz =====\n\n" << RESET;
    
    cout << "1. How does Selection Sort work?\n";
    cout << "a) By repeatedly swapping adjacent elements\n";
    cout << "b) By building a sorted array one element at a time\n";
    cout << "c) By finding minimum element and placing it at beginning\n";
    cout << "d) By dividing the array into two halves\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'C' || opt == 'c') {
        cout << GREEN << "✓ Correct option!\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ " << opt << " is incorrect. Option C is correct.\n\n" << RESET;
    }
    
    cout << "2. What is the time complexity of Selection Sort?\n";
    cout << "a) O(n)\n";
    cout << "b) O(n log n)\n";
    cout << "c) O(n²)\n";
    cout << "d) O(log n)\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'C' || opt == 'c') {
        cout << GREEN << "✓ Correct option!\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ " << opt << " is incorrect. Option C is correct.\n\n" << RESET;
    }
    
    cout << "3. How many swaps does Selection Sort perform in worst case?\n";
    cout << "a) O(n)\n";
    cout << "b) O(n²)\n";
    cout << "c) O(n log n)\n";
    cout << "d) O(1)\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'A' || opt == 'a') {
        cout << GREEN << "✓ Correct option!\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ " << opt << " is incorrect. Option A is correct.\n\n" << RESET;
    }
    
    cout << "4. Is Selection Sort stable?\n";
    cout << "a) Yes\n";
    cout << "b) No\n";
    cout << "c) Sometimes\n";
    cout << "d) Depends on implementation\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct option!\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ " << opt << " is incorrect. Option B is correct.\n\n" << RESET;
    }
    
    cout << "5. What is the main advantage of Selection Sort?\n";
    cout << "a) Fast for sorted arrays\n";
    cout << "b) Minimal memory usage\n";
    cout << "c) Minimal number of swaps\n";
    cout << "d) Easy to implement\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'C' || opt == 'c') {
        cout << GREEN << "✓ Correct option!\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ " << opt << " is incorrect. Option C is correct.\n\n" << RESET;
    }
    
    cout << CYAN << "====================================\n" << RESET;
    cout << "From the 5 questions you have " << GREEN << count << RESET << " questions correct\n";
    cout << CYAN << "====================================\n" << RESET;
    
    pageBreak();
}

void selectionSortMenu() {
    int choice;
    do {
        clearScreen();
        cout << CYAN << BOLD << "===== Selection Sort =====\n" << RESET;
        cout << "1. View Algorithm / Explanation\n";
        cout << "2. Try It Yourself\n";
        cout << "3. Try Quiz\n";
        cout << "0. Back\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();

        switch (choice) {
            case 1: selectionSortAlgorithm(); break;
            case 2: selectionSortTry(); break;
            case 3: selectionSortquiz(); break;
            case 0: break;
            default: 
                cout << RED << "Invalid choice!\n" << RESET; 
                cin.ignore(); 
                cin.get();
        }
    } while (choice != 0);
}

// ===== Insertion Sort Functions =====
void insertionSortAlgorithm() {
    clearScreen();
    cout << CYAN << BOLD << "\t\t================================================\n" << RESET;
    cout << GREEN << BOLD << "\t\t║           INSERTION SORT ALGORITHM          ║\n" << RESET;
    cout << CYAN << BOLD << "\t\t================================================\n\n" << RESET;

    cout << "\tStep 1: Start from second element\n";
    cout << "\tStep 2: Compare with previous elements\n";
    cout << "\tStep 3: Shift elements greater than key to right\n";
    cout << "\tStep 4: Insert key in correct position\n";
    cout << "\tStep 5: Repeat for all elements\n\n";

    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << YELLOW << BOLD << "\t\t              ⏳ TIME COMPLEXITY\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << GREEN << "\t✅ Best Case:   O(n) - When array is sorted\n" << RESET;
    cout << RED << "\t❌ Worst Case:  O(n²) - When array is reverse sorted\n" << RESET;
    cout << BLUE << "\t📊 Average:     O(n²)\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;

    cout << "\n\tPress ENTER to return...";
    cin.ignore();
    cin.get();
}

void insertionSortTry() {
    clearScreen();
    cout << CYAN << BOLD << "===== Insertion Sort: Try It Yourself =====\n\n" << RESET;
    
    int n;
    cout << "Enter the size of the array: ";
    n = safeIntInput();

    int arr[100];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        arr[i] = safeIntInput();
    }

    cout << "\nOriginal array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\n\n";

    // Insertion Sort implementation
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        
        cout << "After iteration " << i << ": ";
        for (int k = 0; k < n; k++) cout << arr[k] << " ";
        cout << "\n";
    }

    cout << GREEN << "\nSorted array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << RESET << "\n";

    pageBreak();
}

void insertionSortquiz() {
    char opt;
    int count = 0;
    clearScreen();
    cout << CYAN << BOLD << "===== Insertion Sort: Quiz =====\n\n" << RESET;
    
    cout << "1. How does Insertion Sort work?\n";
    cout << "a) By finding minimum element\n";
    cout << "b) By swapping adjacent elements\n";
    cout << "c) By building sorted array one element at a time\n";
    cout << "d) By dividing array into halves\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'C' || opt == 'c') {
        cout << GREEN << "✓ Correct option!\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ " << opt << " is incorrect. Option C is correct.\n\n" << RESET;
    }
    
    cout << "2. What is the best case time complexity of Insertion Sort?\n";
    cout << "a) O(n)\n";
    cout << "b) O(n²)\n";
    cout << "c) O(n log n)\n";
    cout << "d) O(log n)\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'A' || opt == 'a') {
        cout << GREEN << "✓ Correct option!\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ " << opt << " is incorrect. Option A is correct.\n\n" << RESET;
    }
    
    cout << "3. Is Insertion Sort stable?\n";
    cout << "a) Yes\n";
    cout << "b) No\n";
    cout << "c) Sometimes\n";
    cout << "d) Depends on implementation\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'A' || opt == 'a') {
        cout << GREEN << "✓ Correct option!\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ " << opt << " is incorrect. Option A is correct.\n\n" << RESET;
    }
    
    cout << "4. When is Insertion Sort most efficient?\n";
    cout << "a) Large arrays\n";
    cout << "b) Small or nearly sorted arrays\n";
    cout << "c) Reverse sorted arrays\n";
    cout << "d) Arrays with duplicates\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct option!\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ " << opt << " is incorrect. Option B is correct.\n\n" << RESET;
    }
    
    cout << "5. How many comparisons in worst case?\n";
    cout << "a) O(n)\n";
    cout << "b) O(n²)\n";
    cout << "c) O(n log n)\n";
    cout << "d) O(log n)\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct option!\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ " << opt << " is incorrect. Option B is correct.\n\n" << RESET;
    }
    
    cout << CYAN << "====================================\n" << RESET;
    cout << "From the 5 questions you have " << GREEN << count << RESET << " questions correct\n";
    cout << CYAN << "====================================\n" << RESET;
    
    pageBreak();
}

void insertionSortMenu() {
    int choice;
    do {
        clearScreen();
        cout << CYAN << BOLD << "===== Insertion Sort =====\n" << RESET;
        cout << "1. View Algorithm / Explanation\n";
        cout << "2. Try It Yourself\n";
        cout << "3. Try Quiz\n";
        cout << "0. Back\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();

        switch (choice) {
            case 1: insertionSortAlgorithm(); break;
            case 2: insertionSortTry(); break;
            case 3: insertionSortquiz(); break;
            case 0: break;
            default: 
                cout << RED << "Invalid choice!\n" << RESET; 
                cin.ignore(); 
                cin.get();
        }
    } while (choice != 0);
}

// ===== Array Update Operations =====
void updateAlgorithm() {
    clearScreen();
    cout << CYAN << BOLD << "\t\t================================================\n" << RESET;
    cout << GREEN << BOLD << "\t\t║           ARRAY UPDATE ALGORITHM            ║\n" << RESET;
    cout << CYAN << BOLD << "\t\t================================================\n\n" << RESET;

    cout << "\tStep 1: Check if position is valid\n";
    cout << "\tStep 2: Access element at position-1\n";
    cout << "\tStep 3: Replace with new value\n";
    cout << "\tStep 4: No size change\n\n";
    
    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << YELLOW << BOLD << "\t\t              ⏳ TIME COMPLEXITY\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << GREEN << "\t✅ All Cases:   O(1) - Direct access\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;

    cout << "\n\tPress ENTER to return...";
    cin.ignore();
    cin.get();
}

void updateTry() {
    clearScreen();
    cout << CYAN << BOLD << "===== Array Update - Try It Yourself =====\n\n" << RESET;
    
    int n;
    cout << "Enter size of array: ";
    n = safeIntInput();

    int arr[100];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        arr[i] = safeIntInput();
    }

    cout << "\nOriginal array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    
    int position, newValue;
    cout << "\n\nEnter position to update (1 to " << n << "): ";
    position = safeIntInput();
    cout << "Enter new value: ";
    newValue = safeIntInput();

    if (position < 1 || position > n) {
        cout << RED << "Invalid position!\n" << RESET;
    } else {
        int oldValue = arr[position - 1];
        arr[position - 1] = newValue;

        cout << GREEN << "\nUpdate successful!\n" << RESET;
        cout << "Changed element at position " << position << " from " << oldValue << " to " << newValue << "\n";
        cout << "Updated array: ";
        for (int i = 0; i < n; i++) cout << arr[i] << " ";
        cout << "\n";
    }
    pageBreak();
}

void updateQuiz() {
    char opt;
    int count = 0;
    clearScreen();
    cout << CYAN << BOLD << "===== Array Update - Quiz =====\n\n" << RESET;
    
    cout << "1. What is time complexity of array update?\n";
    cout << "a) O(1)\n";
    cout << "b) O(n)\n";
    cout << "c) O(log n)\n";
    cout << "d) O(n²)\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'A' || opt == 'a') {
        cout << GREEN << "✓ Correct! O(1) for direct access.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option A is correct.\n\n" << RESET;
    }
    
    cout << "2. What is first step?\n";
    cout << "a) Change value\n";
    cout << "b) Check position validity\n";
    cout << "c) Shift elements\n";
    cout << "d) Increase size\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct! Validate position first.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option B is correct.\n\n" << RESET;
    }
    
    cout << "3. How does update affect size?\n";
    cout << "a) Size increases\n";
    cout << "b) Size decreases\n";
    cout << "c) Size same\n";
    cout << "d) Depends on value\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'C' || opt == 'c') {
        cout << GREEN << "✓ Correct! Size unchanged.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option C is correct.\n\n" << RESET;
    }
    
    cout << "4. What index for position 5?\n";
    cout << "a) 4\n";
    cout << "b) 5\n";
    cout << "c) 6\n";
    cout << "d) 0\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'A' || opt == 'a') {
        cout << GREEN << "✓ Correct! position-1 = 4.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option A is correct.\n\n" << RESET;
    }
    
    cout << "5. Can update fail?\n";
    cout << "a) Never\n";
    cout << "b) Only if full\n";
    cout << "c) Only if invalid position\n";
    cout << "d) Only if value large\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'C' || opt == 'c') {
        cout << GREEN << "✓ Correct! Fails for invalid position.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option C is correct.\n\n" << RESET;
    }
    
    cout << CYAN << "====================================\n" << RESET;
    cout << "You got " << GREEN << count << RESET << " out of 5 correct!\n";
    cout << CYAN << "====================================\n" << RESET;
    
    pageBreak();
}

void updateMenu() {
    int choice;
    do {
        clearScreen();
        cout << CYAN << BOLD << "===== Array Update Operation =====\n" << RESET;
        cout << "1. View Algorithm\n";
        cout << "2. Try It Yourself\n";
        cout << "3. Take Quiz\n";
        cout << "0. Back\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();

        switch (choice) {
            case 1: updateAlgorithm(); break;
            case 2: updateTry(); break;
            case 3: updateQuiz(); break;
            case 0: break;
            default: 
                cout << RED << "Invalid choice!\n" << RESET; 
                cin.ignore(); 
                cin.get();
        }
    } while (choice != 0);
}

// ===== Array Delete Operations =====
void deleteAlgorithm() {
    clearScreen();
    cout << CYAN << BOLD << "\t\t================================================\n" << RESET;
    cout << GREEN << BOLD << "\t\t║           ARRAY DELETE ALGORITHM            ║\n" << RESET;
    cout << CYAN << BOLD << "\t\t================================================\n\n" << RESET;

    cout << "\tStep 1: Check if position valid\n";
    cout << "\tStep 2: Shift elements from position to end left\n";
    cout << "\tStep 3: Decrement array size\n";
    cout << "\tStep 4: Optional: Clear last element\n\n";
    
    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << YELLOW << BOLD << "\t\t              ⏳ TIME COMPLEXITY\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << RED << "\t❌ Worst Case:  O(n) - Deleting from start\n" << RESET;
    cout << GREEN << "\t✅ Best Case:   O(1) - Deleting from end\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;

    cout << "\n\tPress ENTER to return...";
    cin.ignore();
    cin.get();
}

void deleteTry() {
    clearScreen();
    cout << CYAN << BOLD << "===== Array Delete - Try It Yourself =====\n\n" << RESET;
    
    int n;
    cout << "Enter size of array: ";
    n = safeIntInput();

    int arr[100];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": ";
        arr[i] = safeIntInput();
    }

    cout << "\nOriginal array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    
    int position;
    cout << "\n\nEnter position to delete (1 to " << n << "): ";
    position = safeIntInput();

    if (position < 1 || position > n) {
        cout << RED << "Invalid position!\n" << RESET;
    } else {
        int deletedValue = arr[position - 1];
        
        for (int i = position - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;

        cout << GREEN << "\nDeletion successful!\n" << RESET;
        cout << "Deleted element: " << deletedValue << " from position " << position << "\n";
        cout << "Updated array: ";
        for (int i = 0; i < n; i++) cout << arr[i] << " ";
        cout << "\n";
    }
    pageBreak();
}

void deleteQuiz() {
    char opt;
    int count = 0;
    clearScreen();
    cout << CYAN << BOLD << "===== Array Delete - Quiz =====\n\n" << RESET;
    
    cout << "1. What is worst-case time complexity?\n";
    cout << "a) O(1)\n";
    cout << "b) O(n)\n";
    cout << "c) O(log n)\n";
    cout << "d) O(n²)\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct! O(n) when deleting from start.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option B is correct.\n\n" << RESET;
    }
    
    cout << "2. How many elements shifted from start?\n";
    cout << "a) 0\n";
    cout << "b) 1\n";
    cout << "c) n-1\n";
    cout << "d) n\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'C' || opt == 'c') {
        cout << GREEN << "✓ Correct! n-1 elements shifted.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option C is correct.\n\n" << RESET;
    }
    
    cout << "3. What happens to size?\n";
    cout << "a) Increases\n";
    cout << "b) Decreases\n";
    cout << "c) Same\n";
    cout << "d) Doubles\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct! Size decreases by 1.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option B is correct.\n\n" << RESET;
    }
    
    cout << "4. Which deletion fastest?\n";
    cout << "a) Start\n";
    cout << "b) Middle\n";
    cout << "c) End\n";
    cout << "d) All same\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'C' || opt == 'c') {
        cout << GREEN << "✓ Correct! End deletion fastest.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option C is correct.\n\n" << RESET;
    }
    
    cout << "5. What direction elements shifted?\n";
    cout << "a) Left\n";
    cout << "b) Right\n";
    cout << "c) Both\n";
    cout << "d) No shifting\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'A' || opt == 'a') {
        cout << GREEN << "✓ Correct! Elements shifted left.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option A is correct.\n\n" << RESET;
    }
    
    cout << CYAN << "====================================\n" << RESET;
    cout << "You got " << GREEN << count << RESET << " out of 5 correct!\n";
    cout << CYAN << "====================================\n" << RESET;
    
    pageBreak();
}

void deleteMenu() {
    int choice;
    do {
        clearScreen();
        cout << CYAN << BOLD << "===== Array Delete Operation =====\n" << RESET;
        cout << "1. View Algorithm\n";
        cout << "2. Try It Yourself\n";
        cout << "3. Take Quiz\n";
        cout << "0. Back\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();

        switch (choice) {
            case 1: deleteAlgorithm(); break;
            case 2: deleteTry(); break;
            case 3: deleteQuiz(); break;
            case 0: break;
            default: 
                cout << RED << "Invalid choice!\n" << RESET; 
                cin.ignore(); 
                cin.get();
        }
    } while (choice != 0);
}

// ===== Search Menu =====
void searchMenu() {
    int choice;
    do {
        clearScreen();
        cout << CYAN << BOLD << "===== Search Operations =====\n" << RESET;
        cout << "1. Linear Search\n";
        cout << "2. Binary Search\n";
        cout << "0. Back\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();

        switch (choice) {
            case 1: linearSearchMenu(); break;
            case 2: binarySearchMenu(); break;
            case 0: break;
            default: 
                cout << RED << "Invalid choice!\n" << RESET; 
                cin.ignore(); 
                cin.get();
        }
    } while (choice != 0);
}

// ===== Sort Menu =====
void sortMenu() {
    int choice;
    do {
        clearScreen();
        cout << CYAN << BOLD << "===== Sort Operations =====\n" << RESET;
        cout << "1. Bubble Sort\n";
        cout << "2. Selection Sort\n";
        cout << "3. Insertion Sort\n";
        cout << "0. Back\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();

        switch (choice) {
            case 1: bubbleSortMenu(); break;
            case 2: selectionSortMenu(); break;
            case 3: insertionSortMenu(); break;
            case 0: break;
            default: 
                cout << RED << "Invalid choice!\n" << RESET; 
                cin.ignore(); 
                cin.get();
        }
    } while (choice != 0);
}

// ===== Arrays Menu =====
void arraysMenu() {
    int choice;
    do {
        clearScreen();
        cout << CYAN << BOLD << "===== Arrays Menu =====\n" << RESET;
        cout << "1. Search Operations\n";
        cout << "2. Sort Operations\n";
        cout << "3. Insert Operations\n";
        cout << "4. Update Operations\n";
        cout << "5. Delete Operations\n";
        cout << "0. Back\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();

        switch (choice) {
            case 1: searchMenu(); break;
            case 2: sortMenu(); break;
            case 3: insertMenu(); break;
            case 4: updateMenu(); break;
            case 5: deleteMenu(); break;
            case 0: break;
            default: 
                cout << RED << "Invalid choice!\n" << RESET; 
                cin.ignore(); 
                cin.get();
        }
    } while (choice != 0);
}

// ===== Single Linked List Node Structure =====
struct Node {
    int data;
    Node* next;
};

// Function to display linked list
void displayList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// Function to delete entire list (cleanup)
void deleteList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        Node* next = temp->next;
        delete temp;
        temp = next;
    }
}

// ===== Single Linked List Insert Operations =====
void insertLLAlgorithm() {
    clearScreen();
    cout << CYAN << BOLD << "\t\t================================================\n" << RESET;
    cout << GREEN << BOLD << "\t\t║      SINGLE LL INSERT ALGORITHM             ║\n" << RESET;
    cout << CYAN << BOLD << "\t\t================================================\n\n" << RESET;

    cout << "\tInsert at Start:\n";
    cout << "\t1. Create new node\n";
    cout << "\t2. Set new node's next to current head\n";
    cout << "\t3. Update head to new node\n\n";
    
    cout << "\tInsert at End:\n";
    cout << "\t1. Traverse to last node\n";
    cout << "\t2. Create new node\n";
    cout << "\t3. Set last node's next to new node\n\n";
    
    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << YELLOW << BOLD << "\t\t              ⏳ TIME COMPLEXITY\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << GREEN << "\t✅ Insert Start: O(1)\n" << RESET;
    cout << RED << "\t❌ Insert End:   O(n)\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;

    cout << "\n\tPress ENTER to return...";
    cin.ignore();
    cin.get();
}

void insertLLTry() {
    clearScreen();
    cout << CYAN << BOLD << "===== Single LL Insert - Try It Yourself =====\n\n" << RESET;
    
    Node* head = NULL;
    int choice, value;
    
    cout << "🔧 Creating a new linked list...\n\n";
    
    do {
        cout << CYAN << "Current Linked List: " << RESET;
        if (head == NULL) {
            cout << "Empty\n\n";
        } else {
            displayList(head);
            cout << "\n";
        }
        
        cout << "1. Insert at Start\n";
        cout << "2. Insert at End\n";
        cout << "3. Show current list\n";
        cout << "0. Finish and exit\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter value to insert at start: ";
                value = safeIntInput();
                {
                    Node* newNode = new Node{value, head};
                    head = newNode;
                    cout << GREEN << "✅ Inserted " << value << " at start\n\n" << RESET;
                }
                break;
                
            case 2:
                cout << "Enter value to insert at end: ";
                value = safeIntInput();
                {
                    Node* newNode = new Node{value, NULL};
                    if (head == NULL) {
                        head = newNode;
                    } else {
                        Node* temp = head;
                        while (temp->next != NULL) {
                            temp = temp->next;
                        }
                        temp->next = newNode;
                    }
                    cout << GREEN << "✅ Inserted " << value << " at end\n\n" << RESET;
                }
                break;
                
            case 3:
                cout << CYAN << "Current List: " << RESET;
                displayList(head);
                cout << "\n";
                break;
                
            case 0:
                break;
                
            default:
                cout << RED << "Invalid choice!\n\n" << RESET;
        }
    } while (choice != 0);
    
    // Display final list
    cout << CYAN << "\n=== FINAL LINKED LIST ===\n" << RESET;
    displayList(head);
    
    // Clean up memory
    deleteList(head);
    
    pageBreak();
}

void insertLLQuiz() {
    char opt;
    int count = 0;
    clearScreen();
    cout << CYAN << BOLD << "===== Single LL Insert - Quiz =====\n\n" << RESET;
    
    cout << "1. What is the time complexity of inserting at start in singly LL?\n";
    cout << "a) O(1)\n";
    cout << "b) O(n)\n";
    cout << "c) O(log n)\n";
    cout << "d) O(n²)\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'A' || opt == 'a') {
        cout << GREEN << "✓ Correct! O(1) for start insertion.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option A is correct.\n\n" << RESET;
    }
    
    cout << "2. What pointer is updated when inserting at start?\n";
    cout << "a) Tail pointer\n";
    cout << "b) Head pointer\n";
    cout << "c) Both head and tail\n";
    cout << "d) No pointer update\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct! Head pointer is updated.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option B is correct.\n\n" << RESET;
    }
    
    cout << "3. Why is end insertion O(n)?\n";
    cout << "a) Need to traverse to end\n";
    cout << "b) Need to update all pointers\n";
    cout << "c) Need to sort the list\n";
    cout << "d) Need to check duplicates\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'A' || opt == 'a') {
        cout << GREEN << "✓ Correct! Need to traverse to last node.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option A is correct.\n\n" << RESET;
    }
    
    cout << "4. What is the first step in any insertion?\n";
    cout << "a) Update pointers\n";
    cout << "b) Create new node\n";
    cout << "c) Traverse list\n";
    cout << "d) Check if empty\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct! Create new node first.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option B is correct.\n\n" << RESET;
    }
    
    cout << "5. How many pointer updates for start insertion?\n";
    cout << "a) 0\n";
    cout << "b) 1\n";
    cout << "c) 2\n";
    cout << "d) 3\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'C' || opt == 'c') {
        cout << GREEN << "✓ Correct! 2 updates: new node's next and head.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option C is correct.\n\n" << RESET;
    }
    
    cout << CYAN << "====================================\n" << RESET;
    cout << "You got " << GREEN << count << RESET << " out of 5 correct!\n";
    cout << CYAN << "====================================\n" << RESET;
    
    pageBreak();
}

void insertLLMenu() {
    int choice;
    do {
        clearScreen();
        cout << CYAN << BOLD << "===== Single LL Insert Operations =====\n" << RESET;
        cout << "1. View Algorithm\n";
        cout << "2. Try It Yourself\n";
        cout << "3. Take Quiz\n";
        cout << "0. Back\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();

        switch (choice) {
            case 1: insertLLAlgorithm(); break;
            case 2: insertLLTry(); break;
            case 3: insertLLQuiz(); break;
            case 0: break;
            default: 
                cout << RED << "Invalid choice!\n" << RESET; 
                cin.ignore(); 
                cin.get();
        }
    } while (choice != 0);
}

// ===== Single Linked List Delete Operations =====
void deleteLLAlgorithm() {
    clearScreen();
    cout << CYAN << BOLD << "\t\t================================================\n" << RESET;
    cout << GREEN << BOLD << "\t\t║      SINGLE LL DELETE ALGORITHM             ║\n" << RESET;
    cout << CYAN << BOLD << "\t\t================================================\n\n" << RESET;

    cout << "\tDelete at Start:\n";
    cout << "\t1. Check if list is empty\n";
    cout << "\t2. Store head in temp\n";
    cout << "\t3. Move head to next node\n";
    cout << "\t4. Delete temp\n\n";
    
    cout << "\tDelete at End:\n";
    cout << "\t1. Traverse to second last node\n";
    cout << "\t2. Delete last node\n";
    cout << "\t3. Set second last's next to NULL\n\n";
    
    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << YELLOW << BOLD << "\t\t              ⏳ TIME COMPLEXITY\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << GREEN << "\t✅ Delete Start: O(1)\n" << RESET;
    cout << RED << "\t❌ Delete End:   O(n)\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;

    cout << "\n\tPress ENTER to return...";
    cin.ignore();
    cin.get();
}

void deleteLLTry() {
    clearScreen();
    cout << CYAN << BOLD << "===== Single LL Delete - Try It Yourself =====\n\n" << RESET;
    
    // Create initial list: 10 -> 20 -> 30 -> 40
    Node* head = new Node{10, NULL};
    head->next = new Node{20, NULL};
    head->next->next = new Node{30, NULL};
    head->next->next->next = new Node{40, NULL};
    
    int choice;
    
    cout << "🔧 Initial Linked List: ";
    displayList(head);
    cout << "\n";
    
    do {
        cout << CYAN << "Current Linked List: " << RESET;
        displayList(head);
        cout << "\n";
        
        cout << "1. Delete at Start\n";
        cout << "2. Delete at End\n";
        cout << "3. Show current list\n";
        cout << "0. Finish and exit\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();
        
        switch (choice) {
            case 1:
                if (head == NULL) {
                    cout << RED << "❌ List is empty! Cannot delete.\n\n" << RESET;
                } else {
                    Node* temp = head;
                    head = head->next;
                    cout << GREEN << "✅ Deleted " << temp->data << " from start\n\n" << RESET;
                    delete temp;
                }
                break;
                
            case 2:
                if (head == NULL) {
                    cout << RED << "❌ List is empty! Cannot delete.\n\n" << RESET;
                } else if (head->next == NULL) {
                    // Only one node
                    cout << GREEN << "✅ Deleted " << head->data << " from end\n\n" << RESET;
                    delete head;
                    head = NULL;
                } else {
                    Node* temp = head;
                    while (temp->next->next != NULL) {
                        temp = temp->next;
                    }
                    cout << GREEN << "✅ Deleted " << temp->next->data << " from end\n\n" << RESET;
                    delete temp->next;
                    temp->next = NULL;
                }
                break;
                
            case 3:
                cout << CYAN << "Current List: " << RESET;
                displayList(head);
                cout << "\n";
                break;
                
            case 0:
                break;
                
            default:
                cout << RED << "Invalid choice!\n\n" << RESET;
        }
    } while (choice != 0 && head != NULL);
    
    // Display final list
    cout << CYAN << "\n=== FINAL LINKED LIST ===\n" << RESET;
    if (head == NULL) {
        cout << "List is empty\n";
    } else {
        displayList(head);
    }
    
    // Clean up memory
    deleteList(head);
    
    pageBreak();
}

void deleteLLQuiz() {
    char opt;
    int count = 0;
    clearScreen();
    cout << CYAN << BOLD << "===== Single LL Delete - Quiz =====\n\n" << RESET;
    
    cout << "1. What is the time complexity of deleting at start?\n";
    cout << "a) O(1)\n";
    cout << "b) O(n)\n";
    cout << "c) O(log n)\n";
    cout << "d) O(n²)\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'A' || opt == 'a') {
        cout << GREEN << "✓ Correct! O(1) for start deletion.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option A is correct.\n\n" << RESET;
    }
    
    cout << "2. Why is end deletion O(n)?\n";
    cout << "a) Need to traverse to find second last node\n";
    cout << "b) Need to update all pointers\n";
    cout << "c) Need to sort the list first\n";
    cout << "d) Need to check if list is circular\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'A' || opt == 'a') {
        cout << GREEN << "✓ Correct! Need to find second last node.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option A is correct.\n\n" << RESET;
    }
    
    cout << "3. What special case must be handled for single node deletion?\n";
    cout << "a) Update head to NULL\n";
    cout << "b) Do nothing\n";
    cout << "c) Create new node\n";
    cout << "d) Sort the list\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'A' || opt == 'a') {
        cout << GREEN << "✓ Correct! Set head to NULL after deletion.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option A is correct.\n\n" << RESET;
    }
    
    cout << "4. How many pointer updates for end deletion?\n";
    cout << "a) 1\n";
    cout << "b) 2\n";
    cout << "c) 3\n";
    cout << "d) 4\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct! 2 updates: second last's next to NULL and delete last.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option B is correct.\n\n" << RESET;
    }
    
    cout << "5. What happens if we try to delete from empty list?\n";
    cout << "a) Program crashes\n";
    cout << "b) Nothing happens\n";
    cout << "c) Error message shown\n";
    cout << "d) Both B and C\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'D' || opt == 'd') {
        cout << GREEN << "✓ Correct! Nothing happens and error is shown.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option D is correct.\n\n" << RESET;
    }
    
    cout << CYAN << "====================================\n" << RESET;
    cout << "You got " << GREEN << count << RESET << " out of 5 correct!\n";
    cout << CYAN << "====================================\n" << RESET;
    
    pageBreak();
}

void deleteLLMenu() {
    int choice;
    do {
        clearScreen();
        cout << CYAN << BOLD << "===== Single LL Delete Operations =====\n" << RESET;
        cout << "1. View Algorithm\n";
        cout << "2. Try It Yourself\n";
        cout << "3. Take Quiz\n";
        cout << "0. Back\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();

        switch (choice) {
            case 1: deleteLLAlgorithm(); break;
            case 2: deleteLLTry(); break;
            case 3: deleteLLQuiz(); break;
            case 0: break;
            default: 
                cout << RED << "Invalid choice!\n" << RESET; 
                cin.ignore(); 
                cin.get();
        }
    } while (choice != 0);
}

// ===== Single Linked List Search Operations =====
void searchLLAlgorithm() {
    clearScreen();
    cout << CYAN << BOLD << "\t\t================================================\n" << RESET;
    cout << GREEN << BOLD << "\t\t║      SINGLE LL SEARCH ALGORITHM             ║\n" << RESET;
    cout << CYAN << BOLD << "\t\t================================================\n\n" << RESET;

    cout << "\tStep 1: Start from head node\n";
    cout << "\tStep 2: Compare current node data with target\n";
    cout << "\tStep 3: If match found, return position\n";
    cout << "\tStep 4: Move to next node\n";
    cout << "\tStep 5: Repeat until end of list\n";
    cout << "\tStep 6: If not found, return -1\n\n";
    
    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << YELLOW << BOLD << "\t\t              ⏳ TIME COMPLEXITY\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << RED << "\t❌ Worst Case:  O(n) - Element at end or not found\n" << RESET;
    cout << GREEN << "\t✅ Best Case:   O(1) - Element at start\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;

    cout << "\n\tPress ENTER to return...";
    cin.ignore();
    cin.get();
}

void searchLLTry() {
    clearScreen();
    cout << CYAN << BOLD << "===== Single LL Search - Try It Yourself =====\n\n" << RESET;
    
    // Create initial list: 10 -> 20 -> 30 -> 40 -> 50
    Node* head = new Node{10, NULL};
    head->next = new Node{20, NULL};
    head->next->next = new Node{30, NULL};
    head->next->next->next = new Node{40, NULL};
    head->next->next->next->next = new Node{50, NULL};
    
    int choice, value;
    
    cout << "🔧 Initial Linked List: ";
    displayList(head);
    cout << "\n";
    
    do {
        cout << CYAN << "Current Linked List: " << RESET;
        displayList(head);
        cout << "\n";
        
        cout << "1. Search for element\n";
        cout << "2. Show current list\n";
        cout << "0. Finish and exit\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();
        
        switch (choice) {
            case 1:
                cout << "Enter value to search: ";
                value = safeIntInput();
                {
                    Node* temp = head;
                    int position = 1;
                    bool found = false;
                    
                    while (temp != NULL) {
                        if (temp->data == value) {
                            found = true;
                            break;
                        }
                        temp = temp->next;
                        position++;
                    }
                    
                    if (found) {
                        cout << GREEN << "✅ Element " << value << " found at position " << position << "\n\n" << RESET;
                    } else {
                        cout << RED << "❌ Element " << value << " not found in the list\n\n" << RESET;
                    }
                }
                break;
                
            case 2:
                cout << CYAN << "Current List: " << RESET;
                displayList(head);
                cout << "\n";
                break;
                
            case 0:
                break;
                
            default:
                cout << RED << "Invalid choice!\n\n" << RESET;
        }
    } while (choice != 0);
    
    // Clean up memory
    deleteList(head);
    
    pageBreak();
}

void searchLLQuiz() {
    char opt;
    int count = 0;
    clearScreen();
    cout << CYAN << BOLD << "===== Single LL Search - Quiz =====\n\n" << RESET;
    
    cout << "1. What is the worst-case time complexity of search?\n";
    cout << "a) O(1)\n";
    cout << "b) O(n)\n";
    cout << "c) O(log n)\n";
    cout << "d) O(n²)\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct! O(n) when element at end or not found.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option B is correct.\n\n" << RESET;
    }
    
    cout << "2. How is search performed in linked list?\n";
    cout << "a) Binary search\n";
    cout << "b) Sequential traversal\n";
    cout << "c) Hash table lookup\n";
    cout << "d) Random access\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct! Sequential traversal from head.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option B is correct.\n\n" << RESET;
    }
    
    cout << "3. What is returned when element is not found?\n";
    cout << "a) 0\n";
    cout << "b) -1\n";
    cout << "c) NULL\n";
    cout << "d) Last position\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct! Typically -1 is returned.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option B is correct.\n\n" << RESET;
    }
    
    cout << "4. Can we use binary search in linked list?\n";
    cout << "a) Yes, always\n";
    cout << "b) No, never\n";
    cout << "c) Only if sorted\n";
    cout << "d) Only with double pointers\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct! No random access makes binary search inefficient.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option B is correct.\n\n" << RESET;
    }
    
    cout << "5. What is the first step in search algorithm?\n";
    cout << "a) Check if list is sorted\n";
    cout << "b) Start from head node\n";
    cout << "c) Calculate list length\n";
    cout << "d) Sort the list\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct! Always start from head.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option B is correct.\n\n" << RESET;
    }
    
    cout << CYAN << "====================================\n" << RESET;
    cout << "You got " << GREEN << count << RESET << " out of 5 correct!\n";
    cout << CYAN << "====================================\n" << RESET;
    
    pageBreak();
}

void searchLLMenu() {
    int choice;
    do {
        clearScreen();
        cout << CYAN << BOLD << "===== Single LL Search Operations =====\n" << RESET;
        cout << "1. View Algorithm\n";
        cout << "2. Try It Yourself\n";
        cout << "3. Take Quiz\n";
        cout << "0. Back\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();

        switch (choice) {
            case 1: searchLLAlgorithm(); break;
            case 2: searchLLTry(); break;
            case 3: searchLLQuiz(); break;
            case 0: break;
            default: 
                cout << RED << "Invalid choice!\n" << RESET; 
                cin.ignore(); 
                cin.get();
        }
    } while (choice != 0);
}

// ===== Single Linked List Update Operations =====
void updateLLAlgorithm() {
    clearScreen();
    cout << CYAN << BOLD << "\t\t================================================\n" << RESET;
    cout << GREEN << BOLD << "\t\t║      SINGLE LL UPDATE ALGORITHM             ║\n" << RESET;
    cout << CYAN << BOLD << "\t\t================================================\n\n" << RESET;

    cout << "\tStep 1: Start from head node\n";
    cout << "\tStep 2: Traverse to desired position\n";
    cout << "\tStep 3: Update node data with new value\n";
    cout << "\tStep 4: No structural changes needed\n\n";
    
    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << YELLOW << BOLD << "\t\t              ⏳ TIME COMPLEXITY\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << RED << "\t❌ Worst Case:  O(n) - Update at end\n" << RESET;
    cout << GREEN << "\t✅ Best Case:   O(1) - Update at start\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;

    cout << "\n\tPress ENTER to return...";
    cin.ignore();
    cin.get();
}

void updateLLTry() {
    clearScreen();
    cout << CYAN << BOLD << "===== Single LL Update - Try It Yourself =====\n\n" << RESET;
    
    // Create initial list: 10 -> 20 -> 30 -> 40 -> 50
    Node* head = new Node{10, NULL};
    head->next = new Node{20, NULL};
    head->next->next = new Node{30, NULL};
    head->next->next->next = new Node{40, NULL};
    head->next->next->next->next = new Node{50, NULL};
    
    int choice, position, newValue;
    
    cout << "🔧 Initial Linked List: ";
    displayList(head);
    cout << "\n";
    
    do {
        cout << CYAN << "Current Linked List: " << RESET;
        displayList(head);
        cout << "\n";
        
        cout << "1. Update element at position\n";
        cout << "2. Show current list\n";
        cout << "0. Finish and exit\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();
        
        switch (choice) {
            case 1:
                cout << "Enter position to update (1-5): ";
                position = safeIntInput();
                cout << "Enter new value: ";
                newValue = safeIntInput();
                
                if (position < 1 || position > 5) {
                    cout << RED << "❌ Invalid position! Must be between 1-5\n\n" << RESET;
                } else {
                    Node* temp = head;
                    int currentPos = 1;
                    
                    while (temp != NULL && currentPos < position) {
                        temp = temp->next;
                        currentPos++;
                    }
                    
                    if (temp != NULL) {
                        int oldValue = temp->data;
                        temp->data = newValue;
                        cout << GREEN << "✅ Updated position " << position << " from " << oldValue << " to " << newValue << "\n\n" << RESET;
                    }
                }
                break;
                
            case 2:
                cout << CYAN << "Current List: " << RESET;
                displayList(head);
                cout << "\n";
                break;
                
            case 0:
                break;
                
            default:
                cout << RED << "Invalid choice!\n\n" << RESET;
        }
    } while (choice != 0);
    
    // Clean up memory
    deleteList(head);
    
    pageBreak();
}

void updateLLQuiz() {
    char opt;
    int count = 0;
    clearScreen();
    cout << CYAN << BOLD << "===== Single LL Update - Quiz =====\n\n" << RESET;
    
    cout << "1. What is the time complexity of updating at start?\n";
    cout << "a) O(1)\n";
    cout << "b) O(n)\n";
    cout << "c) O(log n)\n";
    cout << "d) O(n²)\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'A' || opt == 'a') {
        cout << GREEN << "✓ Correct! O(1) for start update.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option A is correct.\n\n" << RESET;
    }
    
    cout << "2. Does update operation change list structure?\n";
    cout << "a) Yes, always\n";
    cout << "b) No, never\n";
    cout << "c) Only if position invalid\n";
    cout << "d) Only for first element\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct! Only data changes, structure remains same.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option B is correct.\n\n" << RESET;
    }
    
    cout << "3. What is the main advantage of linked list update vs array?\n";
    cout << "a) Faster access\n";
    cout << "b) No shifting required\n";
    cout << "c) Automatic sorting\n";
    cout << "d) Smaller memory usage\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct! No element shifting needed.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option B is correct.\n\n" << RESET;
    }
    
    cout << "4. How many pointer updates during update operation?\n";
    cout << "a) 0\n";
    cout << "b) 1\n";
    cout << "c) 2\n";
    cout << "d) 3\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'A' || opt == 'a') {
        cout << GREEN << "✓ Correct! No pointer updates, only data change.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option A is correct.\n\n" << RESET;
    }
    
    cout << "5. What happens if position is invalid?\n";
    cout << "a) Program crashes\n";
    cout << "b) Nothing happens\n";
    cout << "c) Error message shown\n";
    cout << "d) Last element updated\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'C' || opt == 'c') {
        cout << GREEN << "✓ Correct! Error message is displayed.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option C is correct.\n\n" << RESET;
    }
    
    cout << CYAN << "====================================\n" << RESET;
    cout << "You got " << GREEN << count << RESET << " out of 5 correct!\n";
    cout << CYAN << "====================================\n" << RESET;
    
    pageBreak();
}

void updateLLMenu() {
    int choice;
    do {
        clearScreen();
        cout << CYAN << BOLD << "===== Single LL Update Operations =====\n" << RESET;
        cout << "1. View Algorithm\n";
        cout << "2. Try It Yourself\n";
        cout << "3. Take Quiz\n";
        cout << "0. Back\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();

        switch (choice) {
            case 1: updateLLAlgorithm(); break;
            case 2: updateLLTry(); break;
            case 3: updateLLQuiz(); break;
            case 0: break;
            default: 
                cout << RED << "Invalid choice!\n" << RESET; 
                cin.ignore(); 
                cin.get();
        }
    } while (choice != 0);
}

// ===== Single Linked List Main Menu =====
void sinlinkedListMenu() {
    int choice;
    do {
        clearScreen();
        cout << CYAN << BOLD << "===== Single Linked List Menu =====\n" << RESET;
        cout << "1. Insert Operations\n";
        cout << "2. Delete Operations\n";
        cout << "3. Search Operations\n";
        cout << "4. Update Operations\n";
        cout << "0. Back to Linked List Menu\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();

        switch (choice) {
            case 1: 
                insertLLMenu(); 
                break;
            case 2: 
                deleteLLMenu(); 
                break;
            case 3: 
                searchLLMenu(); 
                break;
            case 4: 
                updateLLMenu(); 
                break;
            case 0: 
                break;
            default: 
                cout << RED << "Invalid choice!\n" << RESET; 
                cin.ignore(); 
                cin.get();
        }
    } while (choice != 0);
}

// ===== Double Linked List Node Structure =====
struct DNode {
    int data;
    DNode* prev;
    DNode* next;
};

// Function to display doubly linked list
void displayDList(DNode* head) {
    DNode* temp = head;
    cout << "NULL <-> ";
    while (temp != NULL) {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}

// Function to delete entire doubly linked list
void deleteDList(DNode* head) {
    DNode* temp = head;
    while (temp != NULL) {
        DNode* next = temp->next;
        delete temp;
        temp = next;
    }
}

// ===== Double Linked List Insert at Start =====
void insertionAtStartAlgorithmDLL() {
    clearScreen();
    cout << CYAN << BOLD << "\t\t================================================\n" << RESET;
    cout << GREEN << BOLD << "\t\t║      DOUBLE LL INSERT AT START ALGORITHM    ║\n" << RESET;
    cout << CYAN << BOLD << "\t\t================================================\n\n" << RESET;

    cout << "\tStep 1: Create new node\n";
    cout << "\tStep 2: Set new node's next to current head\n";
    cout << "\tStep 3: Set new node's prev to NULL\n";
    cout << "\tStep 4: If head exists, set head's prev to new node\n";
    cout << "\tStep 5: Update head to new node\n\n";
    
    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << YELLOW << BOLD << "\t\t              ⏳ TIME COMPLEXITY\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << GREEN << "\t✅ Best Case:   O(1)\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;

    cout << "\n\tPress ENTER to return...";
    cin.ignore();
    cin.get();
}

void insertionAtStartTryDLL() {
    clearScreen();
    cout << CYAN << BOLD << "===== Double LL Insert at Start - Try It Yourself =====\n\n" << RESET;
    
    DNode* head = NULL;
    int choice, value;
    
    cout << "🔧 Creating a new doubly linked list...\n\n";
    
    do {
        cout << CYAN << "Current Doubly Linked List: " << RESET;
        if (head == NULL) {
            cout << "Empty\n\n";
        } else {
            displayDList(head);
            cout << "\n";
        }
        
        cout << "1. Insert at Start\n";
        cout << "2. Show current list\n";
        cout << "0. Finish and exit\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();
        
        switch (choice) {
            case 1:
                cout << "Enter value to insert at start: ";
                value = safeIntInput();
                {
                    DNode* newNode = new DNode{value, NULL, head};
                    if (head != NULL) {
                        head->prev = newNode;
                    }
                    head = newNode;
                    cout << GREEN << "✅ Inserted " << value << " at start\n\n" << RESET;
                }
                break;
                
            case 2:
                cout << CYAN << "Current List: " << RESET;
                displayDList(head);
                cout << "\n";
                break;
                
            case 0:
                break;
                
            default:
                cout << RED << "Invalid choice!\n\n" << RESET;
        }
    } while (choice != 0);
    
    // Display final list
    cout << CYAN << "\n=== FINAL DOUBLY LINKED LIST ===\n" << RESET;
    displayDList(head);
    
    // Clean up memory
    deleteDList(head);
    
    pageBreak();
}

void insertionAtStartQuizDLL() {
    char opt;
    int count = 0;
    clearScreen();
    cout << CYAN << BOLD << "===== Double LL Insert at Start - Quiz =====\n\n" << RESET;
    
    cout << "1. What is the time complexity of inserting at start in doubly LL?\n";
    cout << "a) O(1)\n";
    cout << "b) O(n)\n";
    cout << "c) O(log n)\n";
    cout << "d) O(n²)\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'A' || opt == 'a') {
        cout << GREEN << "✓ Correct! O(1) for start insertion.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option A is correct.\n\n" << RESET;
    }
    
    cout << "2. How many pointer updates are needed?\n";
    cout << "a) 1\n";
    cout << "b) 2\n";
    cout << "c) 3\n";
    cout << "d) 4\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'C' || opt == 'c') {
        cout << GREEN << "✓ Correct! 3 updates: new node's next & prev, and head's prev.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option C is correct.\n\n" << RESET;
    }
    
    cout << "3. What is set to NULL in new node?\n";
    cout << "a) next pointer\n";
    cout << "b) prev pointer\n";
    cout << "c) both pointers\n";
    cout << "d) data field\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct! prev pointer set to NULL for first node.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option B is correct.\n\n" << RESET;
    }
    
    cout << "4. What happens if list is empty?\n";
    cout << "a) Program crashes\n";
    cout << "b) New node becomes only node\n";
    cout << "c) Nothing happens\n";
    cout << "d) Error message\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct! New node becomes the only node.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option B is correct.\n\n" << RESET;
    }
    
    cout << "5. Which pointer of existing head needs update?\n";
    cout << "a) next pointer\n";
    cout << "b) prev pointer\n";
    cout << "c) both pointers\n";
    cout << "d) no update needed\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct! Head's prev pointer points to new node.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option B is correct.\n\n" << RESET;
    }
    
    cout << CYAN << "====================================\n" << RESET;
    cout << "You got " << GREEN << count << RESET << " out of 5 correct!\n";
    cout << CYAN << "====================================\n" << RESET;
    
    pageBreak();
}

void insertStartMenuDLL() {
    int choice;
    do {
        clearScreen();
        cout << CYAN << BOLD << "===== Double LL Insert at Start =====\n" << RESET;
        cout << "1. View Algorithm\n";
        cout << "2. Try It Yourself\n";
        cout << "3. Take Quiz\n";
        cout << "0. Back\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();

        switch (choice) {
            case 1: insertionAtStartAlgorithmDLL(); break;
            case 2: insertionAtStartTryDLL(); break;
            case 3: insertionAtStartQuizDLL(); break;
            case 0: break;
            default: 
                cout << RED << "Invalid choice!\n" << RESET; 
                cin.ignore(); 
                cin.get();
        }
    } while (choice != 0);
}

// ===== Double Linked List Insert at End =====
void insertionAtEndAlgorithmDLL() {
    clearScreen();
    cout << CYAN << BOLD << "\t\t================================================\n" << RESET;
    cout << GREEN << BOLD << "\t\t║      DOUBLE LL INSERT AT END ALGORITHM      ║\n" << RESET;
    cout << CYAN << BOLD << "\t\t================================================\n\n" << RESET;

    cout << "\tStep 1: Create new node\n";
    cout << "\tStep 2: Traverse to last node\n";
    cout << "\tStep 3: Set last node's next to new node\n";
    cout << "\tStep 4: Set new node's prev to last node\n";
    cout << "\tStep 5: Set new node's next to NULL\n\n";
    
    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << YELLOW << BOLD << "\t\t              ⏳ TIME COMPLEXITY\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << RED << "\t❌ Worst Case:  O(n) - Need to traverse to end\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;

    cout << "\n\tPress ENTER to return...";
    cin.ignore();
    cin.get();
}

void insertionAtEndTryDLL() {
    clearScreen();
    cout << CYAN << BOLD << "===== Double LL Insert at End - Try It Yourself =====\n\n" << RESET;
    
    DNode* head = NULL;
    int choice, value;
    
    cout << "🔧 Creating a new doubly linked list...\n\n";
    
    do {
        cout << CYAN << "Current Doubly Linked List: " << RESET;
        if (head == NULL) {
            cout << "Empty\n\n";
        } else {
            displayDList(head);
            cout << "\n";
        }
        
        cout << "1. Insert at End\n";
        cout << "2. Show current list\n";
        cout << "0. Finish and exit\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();
        
        switch (choice) {
            case 1:
                cout << "Enter value to insert at end: ";
                value = safeIntInput();
                {
                    DNode* newNode = new DNode{value, NULL, NULL};
                    if (head == NULL) {
                        head = newNode;
                    } else {
                        DNode* temp = head;
                        while (temp->next != NULL) {
                            temp = temp->next;
                        }
                        temp->next = newNode;
                        newNode->prev = temp;
                    }
                    cout << GREEN << "✅ Inserted " << value << " at end\n\n" << RESET;
                }
                break;
                
            case 2:
                cout << CYAN << "Current List: " << RESET;
                displayDList(head);
                cout << "\n";
                break;
                
            case 0:
                break;
                
            default:
                cout << RED << "Invalid choice!\n\n" << RESET;
        }
    } while (choice != 0);
    
    // Display final list
    cout << CYAN << "\n=== FINAL DOUBLY LINKED LIST ===\n" << RESET;
    displayDList(head);
    
    // Clean up memory
    deleteDList(head);
    
    pageBreak();
}

void insertionAtEndQuizDLL() {
    char opt;
    int count = 0;
    clearScreen();
    cout << CYAN << BOLD << "===== Double LL Insert at End - Quiz =====\n\n" << RESET;
    
    cout << "1. What is the time complexity of inserting at end in doubly LL?\n";
    cout << "a) O(1)\n";
    cout << "b) O(n)\n";
    cout << "c) O(log n)\n";
    cout << "d) O(n²)\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct! O(n) due to traversal.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option B is correct.\n\n" << RESET;
    }
    
    cout << "2. How many pointer updates for the new node?\n";
    cout << "a) 1\n";
    cout << "b) 2\n";
    cout << "c) 3\n";
    cout << "d) 4\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct! 2 updates: prev and next pointers.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option B is correct.\n\n" << RESET;
    }
    
    cout << "3. What is the last node's next pointer set to?\n";
    cout << "a) NULL\n";
    cout << "b) Head\n";
    cout << "c) Previous node\n";
    cout << "d) Itself\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'A' || opt == 'a') {
        cout << GREEN << "✓ Correct! Last node's next is always NULL.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option A is correct.\n\n" << RESET;
    }
    
    cout << "4. What special case must be handled?\n";
    cout << "a) Empty list\n";
    cout << "b) Single node list\n";
    cout << "c) Full list\n";
    cout << "d) All of above\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'A' || opt == 'a') {
        cout << GREEN << "✓ Correct! Empty list needs special handling.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option A is correct.\n\n" << RESET;
    }
    
    cout << "5. How to optimize end insertion?\n";
    cout << "a) Use tail pointer\n";
    cout << "b) Sort the list\n";
    cout << "c) Use circular list\n";
    cout << "d) Can't be optimized\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'A' || opt == 'a') {
        cout << GREEN << "✓ Correct! Maintaining tail pointer makes it O(1).\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option A is correct.\n\n" << RESET;
    }
    
    cout << CYAN << "====================================\n" << RESET;
    cout << "You got " << GREEN << count << RESET << " out of 5 correct!\n";
    cout << CYAN << "====================================\n" << RESET;
    
    pageBreak();
}

void insertEndMenuDLL() {
    int choice;
    do {
        clearScreen();
        cout << CYAN << BOLD << "===== Double LL Insert at End =====\n" << RESET;
        cout << "1. View Algorithm\n";
        cout << "2. Try It Yourself\n";
        cout << "3. Take Quiz\n";
        cout << "0. Back\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();

        switch (choice) {
            case 1: insertionAtEndAlgorithmDLL(); break;
            case 2: insertionAtEndTryDLL(); break;
            case 3: insertionAtEndQuizDLL(); break;
            case 0: break;
            default: 
                cout << RED << "Invalid choice!\n" << RESET; 
                cin.ignore(); 
                cin.get();
        }
    } while (choice != 0);
}

// ===== Double Linked List Insert at Any Position =====
void insertAlgorithmDLL() {
    clearScreen();
    cout << CYAN << BOLD << "\t\t================================================\n" << RESET;
    cout << GREEN << BOLD << "\t\t║   DOUBLE LL INSERT AT POSITION ALGORITHM    ║\n" << RESET;
    cout << CYAN << BOLD << "\t\t================================================\n\n" << RESET;

    cout << "\tStep 1: Create new node\n";
    cout << "\tStep 2: Traverse to position-1 node\n";
    cout << "\tStep 3: Set new node's next to current node's next\n";
    cout << "\tStep 4: Set new node's prev to current node\n";
    cout << "\tStep 5: Set current node's next to new node\n";
    cout << "\tStep 6: If new node has next, set its prev to new node\n\n";
    
    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << YELLOW << BOLD << "\t\t              ⏳ TIME COMPLEXITY\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << RED << "\t❌ Worst Case:  O(n) - Inserting near end\n" << RESET;
    cout << GREEN << "\t✅ Best Case:   O(1) - Inserting at start\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;

    cout << "\n\tPress ENTER to return...";
    cin.ignore();
    cin.get();
}

void insertTryDLL() {
    clearScreen();
    cout << CYAN << BOLD << "===== Double LL Insert at Position - Try It Yourself =====\n\n" << RESET;
    
    // Create initial list: 10 <-> 20 <-> 30 <-> 40
    DNode* head = new DNode{10, NULL, NULL};
    head->next = new DNode{20, head, NULL};
    head->next->next = new DNode{30, head->next, NULL};
    head->next->next->next = new DNode{40, head->next->next, NULL};
    
    int choice, value, position;
    
    cout << "🔧 Initial Doubly Linked List: ";
    displayDList(head);
    cout << "\n";
    
    do {
        cout << CYAN << "Current Doubly Linked List: " << RESET;
        displayDList(head);
        cout << "\n";
        
        cout << "1. Insert at Position\n";
        cout << "2. Show current list\n";
        cout << "0. Finish and exit\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();
        
        switch (choice) {
            case 1:
                cout << "Enter position to insert (1-5): ";
                position = safeIntInput();
                cout << "Enter value: ";
                value = safeIntInput();
                
                if (position < 1 || position > 5) {
                    cout << RED << "❌ Invalid position! Must be between 1-5\n\n" << RESET;
                } else {
                    DNode* newNode = new DNode{value, NULL, NULL};
                    
                    if (position == 1) {
                        // Insert at start
                        newNode->next = head;
                        head->prev = newNode;
                        head = newNode;
                    } else {
                        DNode* temp = head;
                        for (int i = 1; i < position - 1 && temp != NULL; i++) {
                            temp = temp->next;
                        }
                        
                        if (temp != NULL) {
                            newNode->next = temp->next;
                            newNode->prev = temp;
                            if (temp->next != NULL) {
                                temp->next->prev = newNode;
                            }
                            temp->next = newNode;
                        }
                    }
                    cout << GREEN << "✅ Inserted " << value << " at position " << position << "\n\n" << RESET;
                }
                break;
                
            case 2:
                cout << CYAN << "Current List: " << RESET;
                displayDList(head);
                cout << "\n";
                break;
                
            case 0:
                break;
                
            default:
                cout << RED << "Invalid choice!\n\n" << RESET;
        }
    } while (choice != 0);
    
    // Display final list
    cout << CYAN << "\n=== FINAL DOUBLY LINKED LIST ===\n" << RESET;
    displayDList(head);
    
    // Clean up memory
    deleteDList(head);
    
    pageBreak();
}

void insertQuizDLL() {
    char opt;
    int count = 0;
    clearScreen();
    cout << CYAN << BOLD << "===== Double LL Insert at Position - Quiz =====\n\n" << RESET;
    
    cout << "1. What is worst-case time complexity of position insertion?\n";
    cout << "a) O(1)\n";
    cout << "b) O(n)\n";
    cout << "c) O(log n)\n";
    cout << "d) O(n²)\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct! O(n) when inserting near end.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option B is correct.\n\n" << RESET;
    }
    
    cout << "2. How many pointer updates for middle insertion?\n";
    cout << "a) 2\n";
    cout << "b) 3\n";
    cout << "c) 4\n";
    cout << "d) 5\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'C' || opt == 'c') {
        cout << GREEN << "✓ Correct! 4 updates: new node's prev/next, previous node's next, next node's prev.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option C is correct.\n\n" << RESET;
    }
    
    cout << "3. What special case must be handled?\n";
    cout << "a) Inserting at start\n";
    cout << "b) Inserting at end\n";
    cout << "c) Empty list\n";
    cout << "d) All of above\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'D' || opt == 'd') {
        cout << GREEN << "✓ Correct! All special cases need handling.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option D is correct.\n\n" << RESET;
    }
    
    cout << "4. What happens if position is greater than list size?\n";
    cout << "a) Insert at end\n";
    cout << "b) Insert at start\n";
    cout << "c) Error message\n";
    cout << "d) Program crashes\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'A' || opt == 'a') {
        cout << GREEN << "✓ Correct! Typically insert at end for invalid positions.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option A is correct.\n\n" << RESET;
    }
    
    cout << "5. Which traversal is needed?\n";
    cout << "a) Forward only\n";
    cout << "b) Backward only\n";
    cout << "c) Both directions\n";
    cout << "d) No traversal\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'A' || opt == 'a') {
        cout << GREEN << "✓ Correct! Forward traversal to find position.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option A is correct.\n\n" << RESET;
    }
    
    cout << CYAN << "====================================\n" << RESET;
    cout << "You got " << GREEN << count << RESET << " out of 5 correct!\n";
    cout << CYAN << "====================================\n" << RESET;
    
    pageBreak();
}

void insertAnyMenuDLL() {
    int choice;
    do {
        clearScreen();
        cout << CYAN << BOLD << "===== Double LL Insert at Position =====\n" << RESET;
        cout << "1. View Algorithm\n";
        cout << "2. Try It Yourself\n";
        cout << "3. Take Quiz\n";
        cout << "0. Back\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();

        switch (choice) {
            case 1: insertAlgorithmDLL(); break;
            case 2: insertTryDLL(); break;
            case 3: insertQuizDLL(); break;
            case 0: break;
            default: 
                cout << RED << "Invalid choice!\n" << RESET; 
                cin.ignore(); 
                cin.get();
        }
    } while (choice != 0);
}

// ===== Double Linked List Insert Menu =====
void insertDLLMenu() {
    int choice;
    do {
        clearScreen();
        cout << CYAN << BOLD << "===== Double Linked List Insert Operations =====\n" << RESET;
        cout << "1. Insert at Start\n";
        cout << "2. Insert at End\n";
        cout << "3. Insert at Position\n";
        cout << "0. Back\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();

        switch (choice) {
            case 1: insertStartMenuDLL(); break;
            case 2: insertEndMenuDLL(); break;
            case 3: insertAnyMenuDLL(); break;
            case 0: break;
            default: 
                cout << RED << "Invalid choice!\n" << RESET; 
                cin.ignore(); 
                cin.get();
        }
    } while (choice != 0);
}

// ===== Stack Implementation =====
void stackAlgorithm() {
    clearScreen();
    cout << CYAN << BOLD << "\t\t================================================\n" << RESET;
    cout << GREEN << BOLD << "\t\t║               STACK ALGORITHM               ║\n" << RESET;
    cout << CYAN << BOLD << "\t\t================================================\n\n" << RESET;

    cout << "\tStack Operations:\n";
    cout << "\t1. Push: Add element to top\n";
    cout << "\t2. Pop: Remove element from top\n";
    cout << "\t3. Top: View top element\n";
    cout << "\t4. isFull: Check if stack is full\n";
    cout << "\t5. isEmpty: Check if stack is empty\n\n";
    
    cout << "\tPush Algorithm:\n";
    cout << "\tStep 1: Check if stack is full\n";
    cout << "\tStep 2: If not full, increment top\n";
    cout << "\tStep 3: Add element at top position\n\n";
    
    cout << "\tPop Algorithm:\n";
    cout << "\tStep 1: Check if stack is empty\n";
    cout << "\tStep 2: If not empty, get top element\n";
    cout << "\tStep 3: Decrement top\n";
    cout << "\tStep 4: Return element\n\n";
    
    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << YELLOW << BOLD << "\t\t              ⏳ TIME COMPLEXITY\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << GREEN << "\t✅ All Operations: O(1) - Constant time\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;

    cout << "\n\tPress ENTER to return...";
    cin.ignore();
    cin.get();
}

void stackTry() {
    clearScreen();
    cout << CYAN << BOLD << "===== Stack - Try It Yourself =====\n\n" << RESET;
    
    const int MAX = 5;
    int stack[MAX];
    int top = -1;
    int choice, value;
    
    do {
        cout << CYAN << "Current Stack: " << RESET;
        if (top == -1) {
            cout << "Empty\n";
        } else {
            for (int i = 0; i <= top; i++) {
                cout << stack[i] << " ";
            }
            cout << "← top\n";
        }
        
        cout << "\nStack Operations:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Top\n";
        cout << "4. Check if Full\n";
        cout << "5. Check if Empty\n";
        cout << "0. Exit\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();
        
        switch (choice) {
            case 1:
                if (top == MAX - 1) {
                    cout << RED << "❌ Stack Overflow! Cannot push.\n\n" << RESET;
                } else {
                    cout << "Enter value to push: ";
                    value = safeIntInput();
                    top++;
                    stack[top] = value;
                    cout << GREEN << "✅ Pushed " << value << " onto stack\n\n" << RESET;
                } pageBreak();
                break;
                
            case 2:
                if (top == -1) {
                    cout << RED << "❌ Stack Underflow! Cannot pop.\n\n" << RESET;
                } else {
                    value = stack[top];
                    top--;
                    cout << GREEN << "✅ Popped " << value << " from stack\n\n" << RESET;
                } pageBreak();
                break;
                
            case 3:
                if (top == -1) {
                    cout << RED << "❌ Stack is empty! No top element.\n\n" << RESET;
                } else {
                    cout << GREEN << "✅ Top element: " << stack[top] << "\n\n" << RESET;
                } pageBreak();
                break;
                
            case 4:
                if (top == MAX - 1) {
                    cout << RED << "✅ Stack is FULL\n\n" << RESET;
                } else {
                    cout << GREEN << "✅ Stack is NOT full (" << top + 1 << "/" << MAX << ")\n\n" << RESET;
                } pageBreak();
                break;
                
            case 5:
                if (top == -1) {
                    cout << RED << "✅ Stack is EMPTY\n\n" << RESET;
                } else {
                    cout << GREEN << "✅ Stack is NOT empty\n\n" << RESET;
                } pageBreak();
                break;
                
            case 0:
                break;
                
            default:
                cout << RED << "Invalid choice!\n\n" << RESET;
        }
    } while (choice != 0);
    
    pageBreak();
}

void stackQuiz() {
    char opt;
    int count = 0;
    clearScreen();
    cout << CYAN << BOLD << "===== Stack - Quiz =====\n\n" << RESET;
    
    cout << "1. What is the principle of Stack?\n";
    cout << "a) First In First Out (FIFO)\n";
    cout << "b) Last In First Out (LIFO)\n";
    cout << "c) Random Access\n";
    cout << "d) Priority Based\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct! LIFO - Last In First Out.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option B is correct.\n\n" << RESET;
    }
    
    cout << "2. What is the time complexity of push operation?\n";
    cout << "a) O(1)\n";
    cout << "b) O(n)\n";
    cout << "c) O(log n)\n";
    cout << "d) O(n²)\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'A' || opt == 'a') {
        cout << GREEN << "✓ Correct! O(1) constant time.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option A is correct.\n\n" << RESET;
    }
    
    cout << "3. What happens when you pop from an empty stack?\n";
    cout << "a) Returns 0\n";
    cout << "b) Returns -1\n";
    cout << "c) Stack Underflow\n";
    cout << "d) Program crashes\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'C' || opt == 'c') {
        cout << GREEN << "✓ Correct! Stack Underflow error.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option C is correct.\n\n" << RESET;
    }
    
    cout << "4. Which operation returns the top element without removing it?\n";
    cout << "a) Push\n";
    cout << "b) Pop\n";
    cout << "c) Peek/Top\n";
    cout << "d) isEmpty\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'C' || opt == 'c') {
        cout << GREEN << "✓ Correct! Peek/Top operation.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option C is correct.\n\n" << RESET;
    }
    
    cout << "5. What is the initial value of top pointer?\n";
    cout << "a) 0\n";
    cout << "b) 1\n";
    cout << "c) -1\n";
    cout << "d) NULL\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'C' || opt == 'c') {
        cout << GREEN << "✓ Correct! -1 indicates empty stack.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option C is correct.\n\n" << RESET;
    }
    
    cout << CYAN << "====================================\n" << RESET;
    cout << "You got " << GREEN << count << RESET << " out of 5 correct!\n";
    cout << CYAN << "====================================\n" << RESET;
    
    pageBreak();
}

void stackMenu() {
    int choice;
    do {
        clearScreen();
        cout << CYAN << BOLD << "===== Stack Operations =====\n" << RESET;
        cout << "1. View Algorithm\n";
        cout << "2. Try It Yourself\n";
        cout << "3. Take Quiz\n";
        cout << "0. Back\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();

        switch (choice) {
            case 1: stackAlgorithm(); break;
            case 2: stackTry(); break;
            case 3: stackQuiz(); break;
            case 0: break;
            default: 
                cout << RED << "Invalid choice!\n" << RESET; 
                cin.ignore(); 
                cin.get();
        }
    } while (choice != 0);
}

// ===== Queue Implementation =====
void queueAlgorithm() {
    clearScreen();
    cout << CYAN << BOLD << "\t\t================================================\n" << RESET;
    cout << GREEN << BOLD << "\t\t║               QUEUE ALGORITHM               ║\n" << RESET;
    cout << CYAN << BOLD << "\t\t================================================\n\n" << RESET;

    cout << "\tQueue Operations:\n";
    cout << "\t1. Enqueue: Add element to rear\n";
    cout << "\t2. Dequeue: Remove element from front\n";
    cout << "\t3. Front: View front element\n";
    cout << "\t4. isFull: Check if queue is full\n";
    cout << "\t5. isEmpty: Check if queue is empty\n\n";
    
    cout << "\tEnqueue Algorithm:\n";
    cout << "\tStep 1: Check if queue is full\n";
    cout << "\tStep 2: If not full, add element at rear\n";
    cout << "\tStep 3: Increment rear\n\n";
    
    cout << "\tDequeue Algorithm:\n";
    cout << "\tStep 1: Check if queue is empty\n";
    cout << "\tStep 2: If not empty, get front element\n";
    cout << "\tStep 3: Increment front\n";
    cout << "\tStep 4: Return element\n\n";
    
    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << YELLOW << BOLD << "\t\t              ⏳ TIME COMPLEXITY\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << GREEN << "\t✅ All Operations: O(1) - Constant time\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;

    cout << "\n\tPress ENTER to return...";
    cin.ignore();
    cin.get();
}

void queueTry() {
    clearScreen();
    cout << CYAN << BOLD << "===== Queue - Try It Yourself =====\n\n" << RESET;
    
    const int MAX = 5;
    int queue[MAX];
    int front = 0, rear = -1, size = 0;
    int choice, value;
    
    do {
        cout << CYAN << "Current Queue: " << RESET;
        if (size == 0) {
            cout << "Empty\n";
        } else {
            for (int i = 0; i < size; i++) {
                cout << queue[(front + i) % MAX] << " ";
            }
            cout << "← rear\n";
            cout << "              ";
            for (int i = 0; i < size; i++) {
                if (i == 0) cout << "^";
                else cout << "  ";
            }
            cout << " front\n";
        }
        
        cout << "\nQueue Operations:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Front\n";
        cout << "4. Check if Full\n";
        cout << "5. Check if Empty\n";
        cout << "0. Exit\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();
        
        switch (choice) {
            case 1:
                if (size == MAX) {
                    cout << RED << "❌ Queue Overflow! Cannot enqueue.\n\n" << RESET;
                } else {
                    cout << "Enter value to enqueue: ";
                    value = safeIntInput();
                    rear = (rear + 1) % MAX;
                    queue[rear] = value;
                    size++;
                    cout << GREEN << "✅ Enqueued " << value << " into queue\n\n" << RESET;
                } pageBreak();
                break;
                
            case 2:
                if (size == 0) {
                    cout << RED << "❌ Queue Underflow! Cannot dequeue.\n\n" << RESET;
                } else {
                    value = queue[front];
                    front = (front + 1) % MAX;
                    size--;
                    cout << GREEN << "✅ Dequeued " << value << " from queue\n\n" << RESET;
                } pageBreak();
                break;
                
            case 3:
                if (size == 0) {
                    cout << RED << "❌ Queue is empty! No front element.\n\n" << RESET;
                } else {
                    cout << GREEN << "✅ Front element: " << queue[front] << "\n\n" << RESET;
                } pageBreak();
                break;
                
            case 4:
                if (size == MAX) {
                    cout << RED << "✅ Queue is FULL\n\n" << RESET;
                } else {
                    cout << GREEN << "✅ Queue is NOT full (" << size << "/" << MAX << ")\n\n" << RESET;
                } pageBreak();
                break;
                
            case 5:
                if (size == 0) {
                    cout << RED << "✅ Queue is EMPTY\n\n" << RESET;
                } else {
                    cout << GREEN << "✅ Queue is NOT empty\n\n" << RESET;
                } pageBreak();
                break;
                
            case 0:
                break;
                
            default:
                cout << RED << "Invalid choice!\n\n" << RESET;
        }
    } while (choice != 0);
    
    pageBreak();
}

void queueQuiz() {
    char opt;
    int count = 0;
    clearScreen();
    cout << CYAN << BOLD << "===== Queue - Quiz =====\n\n" << RESET;
    
    cout << "1. What is the principle of Queue?\n";
    cout << "a) First In First Out (FIFO)\n";
    cout << "b) Last In First Out (LIFO)\n";
    cout << "c) Random Access\n";
    cout << "d) Priority Based\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'A' || opt == 'a') {
        cout << GREEN << "✓ Correct! FIFO - First In First Out.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option A is correct.\n\n" << RESET;
    }
    
    cout << "2. What is the time complexity of enqueue operation?\n";
    cout << "a) O(1)\n";
    cout << "b) O(n)\n";
    cout << "c) O(log n)\n";
    cout << "d) O(n²)\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'A' || opt == 'a') {
        cout << GREEN << "✓ Correct! O(1) constant time.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option A is correct.\n\n" << RESET;
    }
    
    cout << "3. What happens when you dequeue from an empty queue?\n";
    cout << "a) Returns 0\n";
    cout << "b) Returns -1\n";
    cout << "c) Queue Underflow\n";
    cout << "d) Program crashes\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'C' || opt == 'c') {
        cout << GREEN << "✓ Correct! Queue Underflow error.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option C is correct.\n\n" << RESET;
    }
    
    cout << "4. Which operation adds an element to the queue?\n";
    cout << "a) Push\n";
    cout << "b) Pop\n";
    cout << "c) Enqueue\n";
    cout << "d) Dequeue\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'C' || opt == 'c') {
        cout << GREEN << "✓ Correct! Enqueue operation.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option C is correct.\n\n" << RESET;
    }
    
    cout << "5. In circular queue, how is the rear pointer calculated?\n";
    cout << "a) rear = rear + 1\n";
    cout << "b) rear = (rear + 1) % MAX\n";
    cout << "c) rear = rear - 1\n";
    cout << "d) rear = MAX - 1\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct! Modulo operation for circular behavior.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option B is correct.\n\n" << RESET;
    }
    
    cout << CYAN << "====================================\n" << RESET;
    cout << "You got " << GREEN << count << RESET << " out of 5 correct!\n";
    cout << CYAN << "====================================\n" << RESET;
    
    pageBreak();
}

void queueMenu() {
    int choice;
    do {
        clearScreen();
        cout << CYAN << BOLD << "===== Queue Operations =====\n" << RESET;
        cout << "1. View Algorithm\n";
        cout << "2. Try It Yourself\n";
        cout << "3. Take Quiz\n";
        cout << "0. Back\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();

        switch (choice) {
            case 1: queueAlgorithm(); break;
            case 2: queueTry(); break;
            case 3: queueQuiz(); break;
            case 0: break;
            default: 
                cout << RED << "Invalid choice!\n" << RESET; 
                cin.ignore(); 
                cin.get();
        }
    } while (choice != 0);
}

// ===== Circular Linked List Node Structure =====
struct CNode {
    int data;
    CNode* next;
};

// Function to display circular linked list
void displayCList(CNode* head) {
    if (head == NULL) {
        cout << "Empty List\n";
        return;
    }
    
    CNode* temp = head;
    cout << "HEAD → ";
    do {
        cout << temp->data << " → ";
        temp = temp->next;
    } while (temp != head);
    cout << "HEAD (back to start)\n";
}

// Function to delete entire circular list
void deleteCList(CNode* head) {
    if (head == NULL) return;
    
    CNode* current = head;
    CNode* nextNode;
    
    do {
        nextNode = current->next;
        delete current;
        current = nextNode;
    } while (current != head);
}

// ===== Circular Linked List Delete at Start =====
void deleteCircularStartAlgorithm() {
    clearScreen();
    cout << CYAN << BOLD << "\t\t================================================\n" << RESET;
    cout << GREEN << BOLD << "\t\t║  CIRCULAR LL DELETE AT START ALGORITHM      ║\n" << RESET;
    cout << CYAN << BOLD << "\t\t================================================\n\n" << RESET;

    cout << "\tStep 1: Check if list is empty\n";
    cout << "\tStep 2: If only one node, delete it and set head to NULL\n";
    cout << "\tStep 3: Otherwise, traverse to last node\n";
    cout << "\tStep 4: Update last node's next to head's next\n";
    cout << "\tStep 5: Delete old head node\n";
    cout << "\tStep 6: Update head to new first node\n\n";
    
    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << YELLOW << BOLD << "\t\t              ⏳ TIME COMPLEXITY\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << RED << "\t❌ Worst Case:  O(n) - Need to find last node\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;

    cout << "\n\tPress ENTER to return...";
    cin.ignore();
    cin.get();
}

void deleteCircularStartTry() {
    clearScreen();
    cout << CYAN << BOLD << "===== Circular LL Delete at Start - Try It Yourself =====\n\n" << RESET;
    
    // Create initial circular list: 10 → 20 → 30 → 40 → back to 10
    CNode* head = new CNode{10, NULL};
    head->next = new CNode{20, NULL};
    head->next->next = new CNode{30, NULL};
    head->next->next->next = new CNode{40, head};  // Circular link
    head->next->next->next->next = head;  // Complete the circle
    
    int choice;
    
    cout << "🔧 Initial Circular Linked List: ";
    displayCList(head);
    cout << "\n";
    
    do {
        cout << CYAN << "Current Circular Linked List: " << RESET;
        displayCList(head);
        cout << "\n";
        
        cout << "1. Delete at Start\n";
        cout << "2. Show current list\n";
        cout << "0. Finish and exit\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();
        
        switch (choice) {
            case 1:
                if (head == NULL) {
                    cout << RED << "❌ List is empty! Cannot delete.\n\n" << RESET;
                } else if (head->next == head) {
                    // Only one node
                    cout << GREEN << "✅ Deleted " << head->data << " from start\n\n" << RESET;
                    delete head;
                    head = NULL;
                } else {
                    CNode* temp = head;
                    CNode* last = head;
                    
                    // Find the last node
                    while (last->next != head) {
                        last = last->next;
                    }
                    
                    cout << GREEN << "✅ Deleted " << head->data << " from start\n\n" << RESET;
                    head = head->next;
                    last->next = head;
                    delete temp;
                }
                break;
                
            case 2:
                cout << CYAN << "Current List: " << RESET;
                displayCList(head);
                cout << "\n";
                break;
                
            case 0:
                break;
                
            default:
                cout << RED << "Invalid choice!\n\n" << RESET;
        }
    } while (choice != 0 && head != NULL);
    
    // Display final list
    cout << CYAN << "\n=== FINAL CIRCULAR LINKED LIST ===\n" << RESET;
    if (head == NULL) {
        cout << "List is empty\n";
    } else {
        displayCList(head);
    }
    
    // Clean up memory
    deleteCList(head);
    
    pageBreak();
}

void deleteCircularStartQuiz() {
    char opt;
    int count = 0;
    clearScreen();
    cout << CYAN << BOLD << "===== Circular LL Delete at Start - Quiz =====\n\n" << RESET;
    
    cout << "1. What is the main challenge in circular LL deletion at start?\n";
    cout << "a) Finding the head node\n";
    cout << "b) Updating the last node's next pointer\n";
    cout << "c) Memory allocation\n";
    cout << "d) Sorting the list\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct! Last node must point to new head.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option B is correct.\n\n" << RESET;
    }
    
    cout << "2. What special case must be handled?\n";
    cout << "a) When list has only one node\n";
    cout << "b) When list is sorted\n";
    cout << "c) When list has even number of nodes\n";
    cout << "d) When list is large\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'A' || opt == 'a') {
        cout << GREEN << "✓ Correct! Single node case needs special handling.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option A is correct.\n\n" << RESET;
    }
    
    cout << "3. What is the time complexity?\n";
    cout << "a) O(1)\n";
    cout << "b) O(n)\n";
    cout << "c) O(log n)\n";
    cout << "d) O(n²)\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct! O(n) to find last node.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option B is correct.\n\n" << RESET;
    }
    
    cout << "4. After deletion, what does last node point to?\n";
    cout << "a) NULL\n";
    cout << "b) Old head\n";
    cout << "c) New head\n";
    cout << "d) Itself\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'C' || opt == 'c') {
        cout << GREEN << "✓ Correct! Last node points to new head.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option C is correct.\n\n" << RESET;
    }
    
    cout << "5. What happens if we delete from single node list?\n";
    cout << "a) Head becomes NULL\n";
    cout << "b) Head points to itself\n";
    cout << "c) Program crashes\n";
    cout << "d) List becomes linear\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'A' || opt == 'a') {
        cout << GREEN << "✓ Correct! Head set to NULL for empty list.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option A is correct.\n\n" << RESET;
    }
    
    cout << CYAN << "====================================\n" << RESET;
    cout << "You got " << GREEN << count << RESET << " out of 5 correct!\n";
    cout << CYAN << "====================================\n" << RESET;
    
    pageBreak();
}

void deleteCircularStartMenu() {
    int choice;
    do {
        clearScreen();
        cout << CYAN << BOLD << "===== Circular LL Delete at Start =====\n" << RESET;
        cout << "1. View Algorithm\n";
        cout << "2. Try It Yourself\n";
        cout << "3. Take Quiz\n";
        cout << "0. Back\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();

        switch (choice) {
            case 1: deleteCircularStartAlgorithm(); break;
            case 2: deleteCircularStartTry(); break;
            case 3: deleteCircularStartQuiz(); break;
            case 0: break;
            default: 
                cout << RED << "Invalid choice!\n" << RESET; 
                cin.ignore(); 
                cin.get();
        }
    } while (choice != 0);
}

// ===== Circular Linked List Delete at End =====
void deleteCircularEndAlgorithm() {
    clearScreen();
    cout << CYAN << BOLD << "\t\t================================================\n" << RESET;
    cout << GREEN << BOLD << "\t\t║   CIRCULAR LL DELETE AT END ALGORITHM       ║\n" << RESET;
    cout << CYAN << BOLD << "\t\t================================================\n\n" << RESET;

    cout << "\tStep 1: Check if list is empty\n";
    cout << "\tStep 2: If only one node, delete it and set head to NULL\n";
    cout << "\tStep 3: Otherwise, traverse to second last node\n";
    cout << "\tStep 4: Update second last's next to point to head\n";
    cout << "\tStep 5: Delete last node\n\n";
    
    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << YELLOW << BOLD << "\t\t              ⏳ TIME COMPLEXITY\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << RED << "\t❌ Worst Case:  O(n) - Need to find second last node\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;

    cout << "\n\tPress ENTER to return...";
    cin.ignore();
    cin.get();
}

void deleteCircularEndTry() {
    clearScreen();
    cout << CYAN << BOLD << "===== Circular LL Delete at End - Try It Yourself =====\n\n" << RESET;
    
    // Create initial circular list: 10 → 20 → 30 → 40 → back to 10
    CNode* head = new CNode{10, NULL};
    head->next = new CNode{20, NULL};
    head->next->next = new CNode{30, NULL};
    head->next->next->next = new CNode{40, head};
    head->next->next->next->next = head;
    
    int choice;
    
    cout << "🔧 Initial Circular Linked List: ";
    displayCList(head);
    cout << "\n";
    
    do {
        cout << CYAN << "Current Circular Linked List: " << RESET;
        displayCList(head);
        cout << "\n";
        
        cout << "1. Delete at End\n";
        cout << "2. Show current list\n";
        cout << "0. Finish and exit\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();
        
        switch (choice) {
            case 1:
                if (head == NULL) {
                    cout << RED << "❌ List is empty! Cannot delete.\n\n" << RESET;
                } else if (head->next == head) {
                    cout << GREEN << "✅ Deleted " << head->data << " from end\n\n" << RESET;
                    delete head;
                    head = NULL;
                } else {
                    CNode* temp = head;
                    CNode* prev = NULL;
                    
                    while (temp->next != head) {
                        prev = temp;
                        temp = temp->next;
                    }
                    
                    cout << GREEN << "✅ Deleted " << temp->data << " from end\n\n" << RESET;
                    prev->next = head;
                    delete temp;
                }
                break;
                
            case 2:
                cout << CYAN << "Current List: " << RESET;
                displayCList(head);
                cout << "\n";
                break;
                
            case 0:
                break;
                
            default:
                cout << RED << "Invalid choice!\n\n" << RESET;
        }
    } while (choice != 0 && head != NULL);
    
    cout << CYAN << "\n=== FINAL CIRCULAR LINKED LIST ===\n" << RESET;
    if (head == NULL) {
        cout << "List is empty\n";
    } else {
        displayCList(head);
    }
    
    deleteCList(head);
    pageBreak();
}

void deleteCircularEndQuiz() {
    char opt;
    int count = 0;
    clearScreen();
    cout << CYAN << BOLD << "===== Circular LL Delete at End - Quiz =====\n\n" << RESET;
    
    cout << "1. What is the main challenge in circular LL deletion at end?\n";
    cout << "a) Finding the head node\n";
    cout << "b) Finding the second last node\n";
    cout << "c) Memory allocation\n";
    cout << "d) Sorting the list\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct! Need to find second last node.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option B is correct.\n\n" << RESET;
    }
    
    cout << "2. What does the second last node point to after deletion?\n";
    cout << "a) NULL\n";
    cout << "b) Old last node\n";
    cout << "c) Head node\n";
    cout << "d) Itself\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'C' || opt == 'c') {
        cout << GREEN << "✓ Correct! Second last points to head.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option C is correct.\n\n" << RESET;
    }
    
    cout << "3. What is the time complexity?\n";
    cout << "a) O(1)\n";
    cout << "b) O(n)\n";
    cout << "c) O(log n)\n";
    cout << "d) O(n²)\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct! O(n) to traverse.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option B is correct.\n\n" << RESET;
    }
    
    cout << "4. What special case must be handled?\n";
    cout << "a) When list has only one node\n";
    cout << "b) When list is sorted\n";
    cout << "c) When list has even number of nodes\n";
    cout << "d) When list is large\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'A' || opt == 'a') {
        cout << GREEN << "✓ Correct! Single node case needs handling.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option A is correct.\n\n" << RESET;
    }
    
    cout << "5. How is circular LL different from singly LL for end deletion?\n";
    cout << "a) No difference\n";
    cout << "b) Last node points to head instead of NULL\n";
    cout << "c) Requires less memory\n";
    cout << "d) Faster deletion\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct! Last node points to head.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option B is correct.\n\n" << RESET;
    }
    
    cout << CYAN << "====================================\n" << RESET;
    cout << "You got " << GREEN << count << RESET << " out of 5 correct!\n";
    cout << CYAN << "====================================\n" << RESET;
    pageBreak();
}

void deleteCircularEndMenu() {
    int choice;
    do {
        clearScreen();
        cout << CYAN << BOLD << "===== Circular LL Delete at End =====\n" << RESET;
        cout << "1. View Algorithm\n";
        cout << "2. Try It Yourself\n";
        cout << "3. Take Quiz\n";
        cout << "0. Back\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();

        switch (choice) {
            case 1: deleteCircularEndAlgorithm(); break;
            case 2: deleteCircularEndTry(); break;
            case 3: deleteCircularEndQuiz(); break;
            case 0: break;
            default: 
                cout << RED << "Invalid choice!\n" << RESET; 
                cin.ignore(); 
                cin.get();
        }
    } while (choice != 0);
}

// ===== Circular Linked List Delete at Middle =====
void deleteCircularMidAlgorithm() {
    clearScreen();
    cout << CYAN << BOLD << "\t\t================================================\n" << RESET;
    cout << GREEN << BOLD << "\t\t║  CIRCULAR LL DELETE AT MIDDLE ALGORITHM     ║\n" << RESET;
    cout << CYAN << BOLD << "\t\t================================================\n\n" << RESET;

    cout << "\tStep 1: Check if list is empty\n";
    cout << "\tStep 2: Traverse to position-1 node\n";
    cout << "\tStep 3: Update previous node's next to target's next\n";
    cout << "\tStep 4: Delete target node\n";
    cout << "\tStep 5: Handle special cases (first and last node)\n\n";
    
    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << YELLOW << BOLD << "\t\t              ⏳ TIME COMPLEXITY\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;
    cout << RED << "\t❌ Worst Case:  O(n) - Need to traverse to position\n" << RESET;
    cout << CYAN << "\t\t================================================\n" << RESET;

    cout << "\n\tPress ENTER to return...";
    cin.ignore();
    cin.get();
}

void deleteCircularMidTry() {
    clearScreen();
    cout << CYAN << BOLD << "===== Circular LL Delete at Middle - Try It Yourself =====\n\n" << RESET;
    
    CNode* head = new CNode{10, NULL};
    head->next = new CNode{20, NULL};
    head->next->next = new CNode{30, NULL};
    head->next->next->next = new CNode{40, head};
    head->next->next->next->next = head;
    
    int choice, position;
    int nodeCount = 4;
    
    cout << "🔧 Initial Circular Linked List: ";
    displayCList(head);
    cout << "\n";
    
    do {
        cout << CYAN << "Current Circular Linked List: " << RESET;
        displayCList(head);
        cout << "\n";
        
        cout << "1. Delete at Position\n";
        cout << "2. Show current list\n";
        cout << "0. Finish and exit\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();
        
        switch (choice) {
            case 1:
                cout << "Enter position to delete (1 to " << nodeCount << "): ";
                position = safeIntInput();
                
                if (position < 1 || position > nodeCount) {
                    cout << RED << "❌ Invalid position!\n\n" << RESET;
                } else if (head == NULL) {
                    cout << RED << "❌ List is empty!\n\n" << RESET;
                } else if (position == 1) {
                    if (head->next == head) {
                        cout << GREEN << "✅ Deleted " << head->data << " from position " << position << "\n\n" << RESET;
                        delete head;
                        head = NULL;
                    } else {
                        CNode* temp = head;
                        CNode* last = head;
                        
                        while (last->next != head) {
                            last = last->next;
                        }
                        
                        cout << GREEN << "✅ Deleted " << head->data << " from position " << position << "\n\n" << RESET;
                        head = head->next;
                        last->next = head;
                        delete temp;
                    }
                    nodeCount--;
                } else if (position == nodeCount) {
                    CNode* temp = head;
                    CNode* prev = NULL;
                    
                    while (temp->next != head) {
                        prev = temp;
                        temp = temp->next;
                    }
                    
                    cout << GREEN << "✅ Deleted " << temp->data << " from position " << position << "\n\n" << RESET;
                    prev->next = head;
                    delete temp;
                    nodeCount--;
                } else {
                    CNode* temp = head;
                    CNode* prev = NULL;
                    
                    for (int i = 1; i < position; i++) {
                        prev = temp;
                        temp = temp->next;
                    }
                    
                    cout << GREEN << "✅ Deleted " << temp->data << " from position " << position << "\n\n" << RESET;
                    prev->next = temp->next;
                    delete temp;
                    nodeCount--;
                }
                break;
                
            case 2:
                cout << CYAN << "Current List: " << RESET;
                displayCList(head);
                cout << "\n";
                break;
                
            case 0:
                break;
                
            default:
                cout << RED << "Invalid choice!\n\n" << RESET;
        }
    } while (choice != 0 && head != NULL);
    
    cout << CYAN << "\n=== FINAL CIRCULAR LINKED LIST ===\n" << RESET;
    if (head == NULL) {
        cout << "List is empty\n";
    } else {
        displayCList(head);
    }
    
    deleteCList(head);
    pageBreak();
}

void deleteCircularMidQuiz() {
    char opt;
    int count = 0;
    clearScreen();
    cout << CYAN << BOLD << "===== Circular LL Delete at Middle - Quiz =====\n\n" << RESET;
    
    cout << "1. What is the time complexity of middle deletion in circular LL?\n";
    cout << "a) O(1)\n";
    cout << "b) O(n)\n";
    cout << "c) O(log n)\n";
    cout << "d) O(n²)\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct! O(n) to traverse.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option B is correct.\n\n" << RESET;
    }
    
    cout << "2. What special cases must be handled?\n";
    cout << "a) Deleting first node\n";
    cout << "b) Deleting last node\n";
    cout << "c) Both A and B\n";
    cout << "d) No special cases\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'C' || opt == 'c') {
        cout << GREEN << "✓ Correct! Both first and last node cases.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option C is correct.\n\n" << RESET;
    }
    
    cout << "3. How many pointer updates for middle deletion?\n";
    cout << "a) 1\n";
    cout << "b) 2\n";
    cout << "c) 3\n";
    cout << "d) 4\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'A' || opt == 'a') {
        cout << GREEN << "✓ Correct! Only previous node's next needs update.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option A is correct.\n\n" << RESET;
    }
    
    cout << "4. What is the main advantage of circular LL?\n";
    cout << "a) Faster access\n";
    cout << "b) Can traverse entire list from any node\n";
    cout << "c) Less memory usage\n";
    cout << "d) Automatic sorting\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'B' || opt == 'b') {
        cout << GREEN << "✓ Correct! Can traverse entire list from any node.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option B is correct.\n\n" << RESET;
    }
    
    cout << "5. What happens when deleting the only node?\n";
    cout << "a) Head becomes NULL\n";
    cout << "b) Head points to itself\n";
    cout << "c) Program crashes\n";
    cout << "d) List becomes linear\n";
    cout << YELLOW << "Your answer: " << RESET;
    opt = getValidMCQInput();
    if(opt == 'A' || opt == 'a') {
        cout << GREEN << "✓ Correct! Head set to NULL.\n\n" << RESET;
        count++;
    } else {
        cout << RED << "✗ Incorrect. Option A is correct.\n\n" << RESET;
    }
    
    cout << CYAN << "====================================\n" << RESET;
    cout << "You got " << GREEN << count << RESET << " out of 5 correct!\n";
    cout << CYAN << "====================================\n" << RESET;
    pageBreak();
}

void deleteCircularMidMenu() {
    int choice;
    do {
        clearScreen();
        cout << CYAN << BOLD << "===== Circular LL Delete at Middle =====\n" << RESET;
        cout << "1. View Algorithm\n";
        cout << "2. Try It Yourself\n";
        cout << "3. Take Quiz\n";
        cout << "0. Back\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();

        switch (choice) {
            case 1: deleteCircularMidAlgorithm(); break;
            case 2: deleteCircularMidTry(); break;
            case 3: deleteCircularMidQuiz(); break;
            case 0: break;
            default: 
                cout << RED << "Invalid choice!\n" << RESET; 
                cin.ignore(); 
                cin.get();
        }
    } while (choice != 0);
}

// ===== Circular Linked List Delete Menu =====
void deleteCircularMenu() {
    int choice;
    do {
        clearScreen();
        cout << CYAN << BOLD << "===== Circular Linked List Delete Operations =====\n" << RESET;
        cout << "1. Delete at Start\n";
        cout << "2. Delete at End\n";
        cout << "3. Delete at Middle\n";
        cout << "0. Back\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();

        switch (choice) {
            case 1: deleteCircularStartMenu(); break;
            case 2: deleteCircularEndMenu(); break;
            case 3: deleteCircularMidMenu(); break;
            case 0: break;
            default: 
                cout << RED << "Invalid choice!\n" << RESET; 
                cin.ignore(); 
                cin.get();
        }
    } while (choice != 0);
}

// ===== Double Linked List Delete Menu =====
void deleteDLLMenu() {
    int choice;
    do {
        clearScreen();
        cout << CYAN << BOLD << "===== Double Linked List Delete Operations =====\n" << RESET;
        cout << "1. Delete at Start\n";
        cout << "2. Delete at End\n";
        cout << "3. Delete at Middle\n";
        cout << "0. Back\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();

        switch (choice) {
            case 1: deleteDStartMenu(); break;
            case 2: deleteDEndMenu(); break;
            case 3: deleteDMidMenu(); break;
            case 0: break;
            default: 
                cout << RED << "Invalid choice!\n" << RESET; 
                cin.ignore(); 
                cin.get();
        }
    } while (choice != 0);
}

// ===== Double Linked List Main Menu =====
void doulinkedListMenu() {
    int choice;
    do {
        clearScreen();
        cout << CYAN << BOLD << "===== Double Linked List Menu =====\n" << RESET;
        cout << "1. Insert Operations\n";
        cout << "2. Delete Operations\n";
        cout << "3. Search Operations\n";
        cout << "4. Update Operations\n";
        cout << "0. Back to Linked List Menu\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();

        switch (choice) {
            case 1: 
                insertDLLMenu(); 
                break;
            case 2: 
                deleteDLLMenu(); 
                break;
            case 3: 
                searchDLLMenu(); 
                break;
            case 4: 
                updateDLLMenu(); 
                break;
            case 0: 
                break;
            default: 
                cout << RED << "Invalid choice!\n" << RESET; 
                cin.ignore(); 
                cin.get();
        }
    } while (choice != 0);
}

// ===== Circular Linked List Main Menu =====
void CirlinkedListMenu() {
    int choice;
    do {
        clearScreen();
        cout << CYAN << BOLD << "===== Circular Linked List Menu =====\n" << RESET;
        cout << "1. Delete Operations\n";
        cout << "0. Back to Linked List Menu\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();

        switch (choice) {
            case 1: 
                deleteCircularMenu(); 
                break;
            case 0: 
                break;
            default: 
                cout << RED << "Invalid choice!\n" << RESET; 
                cin.ignore(); 
                cin.get();
        }
    } while (choice != 0);
}

// ===== Main Linked List Menu =====
void linkedListMenu() {
    int choice;
    do {
        clearScreen();
        cout << CYAN << BOLD << "===== LINKED LIST DATA STRUCTURE =====\n" << RESET;
        cout << "1. Single Linked List\n";
        cout << "2. Double Linked List\n";
        cout << "3. Circular Linked List\n";
        cout << "0. Back to Main Menu\n";
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();

        switch (choice) {
            case 1: 
                sinlinkedListMenu(); 
                break;
            case 2: 
                doulinkedListMenu(); 
                break;
            case 3: 
                CirlinkedListMenu(); 
                break;
            case 0: 
                break;
            default: 
                cout << RED << "Invalid choice!\n" << RESET; 
                cin.ignore(); 
                cin.get();
        }
    } while (choice != 0);
}

// ===== Main Menu =====
void mainMenu() {
    int choice;
    do {
        clearScreen();
        cout << CYAN << BOLD << "╔════════════════════════════════════════════════════════════════╗\n" << RESET;
        cout << GREEN << BOLD << "║                   DATA STRUCTURES LEARNING SYSTEM              ║\n" << RESET;
        cout << CYAN << BOLD << "╠════════════════════════════════════════════════════════════════╣\n" << RESET;
        cout << MAGENTA << BOLD << "║    1. Arrays                                                   ║\n" << RESET;
        cout << MAGENTA << BOLD << "║    2. Linked Lists                                             ║\n" << RESET;
        cout << MAGENTA << BOLD << "║    3. Stack                                                    ║\n" << RESET;
        cout << MAGENTA << BOLD << "║    4. Queue                                                    ║\n" << RESET;
        cout << RED << BOLD << "║    0. Exit                                                     ║\n" << RESET;
        cout << CYAN << BOLD << "╚════════════════════════════════════════════════════════════════╝\n" << RESET;
        cout << YELLOW << "Enter your choice: " << RESET;
        choice = safeIntInput();

        switch (choice) {
            case 1: arraysMenu(); break;
            case 2: linkedListMenu(); break;
            case 3: stackMenu(); break;
            case 4: queueMenu(); break;
            case 0: 
                clearScreen();
                cout << GREEN << BOLD << "Thank you for using Data Structures Learning System!\n" << RESET;
                cout << CYAN << "Goodbye! 👋\n" << RESET;
                break;
            default: 
                cout << RED << "Invalid choice!\n" << RESET; 
                cin.ignore(); 
                cin.get();
        }
    } while (choice != 0);
}

void show()
{
    cout << "\n\n";
    cout << "\t\t\t=====================================" << endl;
    cout << GREEN << BOLD <<"\t\t\t     🚀 DSA Tutorial Application 🚀   " << endl;
    cout << "\t\t\t=====================================" << endl;
    cout << "\n";

    cout << "\t\t✨ WELCOME TO DSA TUTORIAL APPLICATION!! ✨" << endl;
    cout << "" << endl;
    cout << "  📘 The word 'algorithm' comes from 'al-Khwarizmi', named after a" << endl;
    cout << "  Persian scholar, who introduced 'algebra'. In Latin his name" << endl;
    cout << "  was written as 'Algortmi', which later translated to the modern" << endl;
    cout << "  term 'Algorithm'." << endl;
    cout << "\n  💡 Algorithm means 'Step-by-step problem solving method'." << endl;
    cout << "\n  🗂 A data structure is a way to store data. Algorithms is about how" << endl;
    cout << "  to solve different problems, often by searching through and" << endl;
    cout << "  manipulating data structures." << endl;

    cout << "\n\n";
    cout << "\t\t\t=====================================" << endl;
    cout << "\t\t\t         📖 THIS TUTORIAL 📖        " << endl;
    cout << "\t\t\t=====================================" << endl;
    cout << "\n";

    cout << "  1️⃣ is made to help you learn Data Structures and Algorithms (DSA)" << endl;
    cout << "     fast and easy." << endl;
    cout << "  2️⃣ contains 'ALGORITHMS' related to each topic and sub-topics." << endl;
    cout << "  3️⃣ provides with 'TRY IT YOURSELF' exercises at the end of each" << endl;
    cout << "     chapter." << endl;
    cout << "  4️⃣ provides relevant quizes at the end of each chapter." << endl;

    cout << "\n\n\t\t\t=====================================" << endl;
    cout << "\t\t\t            🎯LET'S BEGIN! 🎯" << endl;
    cout << "\t\t\t=====================================\n\n" << endl;
    cout<<"  Press Enter To Start"; 
	cin.ignore();cin.get();    
}

// ===== Placeholder implementations for missing functions =====
void deleteDStartMenu() {
    clearScreen();
    cout << CYAN << BOLD << "Double LL Delete at Start - Coming Soon!\n" << RESET;
    pageBreak();
}

void deleteDEndMenu() {
    clearScreen();
    cout << CYAN << BOLD << "Double LL Delete at End - Coming Soon!\n" << RESET;
    pageBreak();
}

void deleteDMidMenu() {
    clearScreen();
    cout << CYAN << BOLD << "Double LL Delete at Middle - Coming Soon!\n" << RESET;
    pageBreak();
}

void updateDLLMenu() {
    clearScreen();
    cout << CYAN << BOLD << "Double LL Update Operations - Coming Soon!\n" << RESET;
    pageBreak();
}

void searchDLLMenu() {
    clearScreen();
    cout << CYAN << BOLD << "Double LL Search Operations - Coming Soon!\n" << RESET;
    pageBreak();
}

// Placeholder implementations for other missing functions
void deleteAlgorithmSD() {}
void deleteTrySD() {}
void deletequizSD() {}
void deleteAlgorithmED() {}
void deleteTryED() {}
void deletequizED() {}
void deleteAlgorithmMD() {}
void deleteTryMD() {}
void deletequizMD() {}
void updateAlgorithmDLL() {}
void updateTryDLL() {}
void updatequizDLL() {}
void DLLSearchAlgorithm() {}
void DLLSearchTry() {}
void DLLSearchquiz() {}

// ===== Main Function =====
int main() {
    setupConsole();
    show();
    clearScreen();
    cout << GREEN << BOLD << "🚀 Initializing Data Structures Learning System...\n" << RESET;
    cout << CYAN << "System ready! Press Enter to continue...\n" << RESET;
    cin.get();
    
    mainMenu();
    
    return 0;
}