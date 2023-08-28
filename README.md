# CUtilLib: Efficient String and Integer Manipulation
[![Version](https://img.shields.io/badge/version-1.0.0-blue)](https://github.com/Anshbir18/C_StaticLib_Project/releases)


Welcome to CUtilLib! This project is aimed at providing a comprehensive utility library for the efficient manipulation of strings and integers in the C programming language.CUtilLib, offers a wide range of functionalities to simplify routine tasks and complex operations involving strings and integers. Its purpose is to streamline development workflows and ensure accuracy and reliability.

# Goals

The primary goals of CUtilLib are:

1. **Simplify Manipulation**: Provide a library that simplifies everyday tasks related to strings and integers, minimizing the need for developers to reinvent the wheel.
   
2. **Efficiency**: Develop efficient algorithms for sorting, searching, anagram detection,palindrome detection and other operations, ensuring optimal performance.



# Specifications

### String Operations

- **Search**: Locate substrings within strings efficiently.
- **Sort**: Arrange characters in strings in lexicographical order.
- **Anagram Detection**: Identify anagrams among strings.
- **Palindrome Detection**: Detect palindromes within strings.
- **Frequency Count**: Count character occurrences in strings.

### Integer Operations

- **Addition**: Easily perform integer addition for arithmetic calculations.

- **Subtraction**: Execute integer subtraction for various mathematical computations.

- **Multiplication**: Utilize fast multiplication algorithms to efficiently multiply integers, ensuring optimal usage.

- **Division**: Perform division operations on integers, providing accurate results for mathematical operations.

- **Even/Odd Check**: Determine whether an integer is even or odd, assisting in various logic and program flow.

- **Power of 2 Check**: Quickly determine if an integer is a power of 2, critical analysis for memory and performance evaluations.


### Integer Array Operations

- **Find Middle**: Quickly discover the middle element of integer arrays, an essential step in various algorithms involving data partitioning.

- **Sort**: Effortlessly organize integer arrays in ascending order using the most optimal algorithm, ensuring efficient searching and organized data presentation.

- **Search**: Efficiently search for specific elements within integer arrays, employing well-optimized search techniques for rapid data retrieval.

# Design


<img width="933" alt="image" src="https://github.com/Anshbir18/viva_demo_project_again/assets/86255109/4686c610-4d3b-496d-82bf-c8f98a961596">


## Data Flow

Data flows through the library's functions, interacting with the various components to perform the desired operations.

## User Interface

The user interface primarily involves including the appropriate header and linking the library when compiling your C code.

# Installation and Usage

To use CUtilLib in your project, follow these steps:

1. Clone the repository: `git clone https://github.com/Anshbir18/C_StaticLib_Project.git`
2. Navigate to the library directory: `cd cutillib`
3. Compile the library: `gcc -c cutil.c -o cutil.o`
4. Create the static library: `ar rcs libcutil.a cutil.o`
5. Include the library header in your C code: `#include "cutil.h"`
6. Link your program with the static library: `-L/path/to/library -lcutil`

# Examples

Here are some simple examples showcasing the use of CUtilLib:

```c
#include <stdio.h>
#include<stdbool.h>
#include<string.h>

#include "lib_cutil.h" // our static library

int main() {
    // String operations
    char str[] = "radar";
    if (isPalindrome(str)) {
        printf("The string is a palindrome.\\n");
    } else {
        printf("The string is not a palindrome.\\n");
    }

    // Integer operations
    int num = 8;
    if (isPowerOf2(num)) {
        printf("%d is a power of 2.\\n", num);
    } else {
        printf("%d is not a power of 2.\\n", num);
    }

    return 0;
}
