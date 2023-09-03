#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "cutil.h"

int main() {
    int choice;
    while (1) {
        printf("Choose an option:\n");
        printf("1. Add integers\n");
        printf("2. Subtract integers\n");
        printf("3. Reverse a number\n");
        printf("4. Check if a number is a power of 2\n");
        printf("5. Fast Multiply two binary strings\n");
        printf("6. Check if a number is a Fibonacci number\n");
        printf("7. Check if a string is a palindrome\n");
        printf("8. Reverse a string\n");
        printf("9. Swap variables\n");
        printf("10. Sort a string\n");
        printf("11. Frequency of a character in an array\n");
        printf("12. Check if two strings are anagrams\n");
        printf("0. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 0:
                return 0;
            case 1: {
                int numArgs, num, sum;
                printf("Enter the number of integers to add: ");
                scanf("%d", &numArgs);
                printf("Enter %d integers separated by spaces: ", numArgs);
                sum = 0;
                for (int i = 0; i < numArgs; i++) {
                    scanf("%d", &num);
                    sum += num;
                }
                printf("Sum: %d\n", sum);
                break;
            }
            case 2: {
                int numArgs, num, diff;
                printf("Enter the number of integers to subtract: ");
                scanf("%d", &numArgs);
                printf("Enter %d integers separated by spaces: ", numArgs);
                scanf("%d", &diff);
                for (int i = 1; i < numArgs; i++) {
                    scanf("%d", &num);
                    diff -= num;
                }
                printf("Difference: %d\n", diff);
                break;
            }
            case 3: {
                int n, reversedNumber;
                printf("Enter an integer to reverse: ");
                scanf("%d", &n);
                reversedNumber = reverseNumber(n);
                printf("Reversed number: %d\n", reversedNumber);
                break;
            }
            case 4: {
                int n;
                printf("Enter an integer to check if it's a power of 2: ");
                scanf("%d", &n);
                if (isPowerOf2(n)) {
                    printf("%d is a power of 2.\n", n);
                } else {
                    printf("%d is not a power of 2.\n", n);
                }
                break;
            }
            case 5: {
                char s1[100], s2[100];
                printf("Enter two binary strings to multiply: ");
                scanf("%s %s", s1, s2);
                long int c = fast_Multiply(s1, s2);
                printf("The result of fast multiplication is: %ld\n", c);
                break;
            }
            case 6: {
                int num;
                printf("Enter an integer to check if it's a Fibonacci number: ");
                scanf("%d", &num);
                if (isFibonacci(num, 0, 1)) {
                    printf("%d is a Fibonacci number.\n", num);
                } else {
                    printf("%d is not a Fibonacci number.\n", num);
                }
                break;
            }
            case 7: {
                char str[100];
                printf("Enter a string to check if it's a palindrome: ");
                scanf("%s", str);
                if (isPalindrome(str)) {
                    printf("%s is a palindrome.\n", str);
                } else {
                    printf("%s is not a palindrome.\n", str);
                }
                break;
            }
            case 8: {
                char str[100];
                printf("Enter a string to reverse: ");
                scanf("%s", str);
                printf("Original string: %s\n", str);
                reverseString(str);
                printf("Reversed string: %s\n", str);
                break;
            }
            case 9: {
                int x, y;
                char a, b;
                printf("Enter two integers to swap: ");
                scanf("%d %d", &x, &y);
                printf("Before swap: x = %d, y = %d\n", x, y);
                swap(&x, &y, sizeof(int));
                printf("After swap: x = %d, y = %d\n", x, y);

                printf("Enter two characters to swap: ");
                scanf(" %c %c", &a, &b);  // Add space before %c to consume newline character
                printf("Before swap: a = %c, b = %c\n", a, b);
                swap(&a, &b, sizeof(char));
                printf("After swap: a = %c, b = %c\n", a, b);
                break;
            }
            case 10: {
                char str[100];
                printf("Enter a string to sort: ");
                scanf("%s", str);
                int length = strlen(str);
                printf("Original string: %s\n", str);
                sortString(str, length);
                printf("Sorted string: %s\n", str);
                break;
            }
            case 11: {
                // Frequency of a character in an array (similar to previous cases)
                break;
            }
            case 12: {
                char str1[100], str2[100];
                printf("Enter two strings to check if they are anagrams: ");
                scanf("%s %s", str1, str2);
                if (areAnagrams(str1, str2)) {
                    printf("%s and %s are anagrams.\n", str1, str2);
                } else {
                    printf("%s and %s are not anagrams.\n", str1, str2);
                }
                break;
            }
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }
    return 0;
}

