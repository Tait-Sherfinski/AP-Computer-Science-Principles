<h1>Handbook on Programming in C</h1>

**AP Computer Science Principles 2024-2025**

Tait Sherfinski

<!-- This is a comment (which will not be displayed in the live file);
replace all "???" with your own text. -->




___





<h1>Table of Contents</h1>

- [1. Compiling and Running](#1-compiling-and-running)
- [2. Data Types](#2-data-types)
- [3. Console I/O](#3-console-io)
- [4. Arithmetic Operations](#4-arithmetic-operations)
- [5. Assignment Operations](#5-assignment-operations)
- [6. Comments](#6-comments)
- [7. Decision Structures](#7-decision-structures)
- [8. Conditional Operators](#8-conditional-operators)
- [9. Logic Operators](#9-logic-operators)
- [10. Advanced Decision Structures](#10-advanced-decision-structures)
- [11. String Methods](#11-string-methods)
- [12. Random Generation](#12-random-generation)
- [13. Looping Structures](#13-looping-structures)
- [14. Functions/Methods](#14-functionsmethods)
- [15. Elementary Data Structures](#15-elementary-data-structures)
  - [15.1 Arrays/Lists](#151-arrayslists)
  - [15.2 Matrices](#152-matrices)
- [References](#references)

<!-- 
- [16. Major Keywords](#16-major-keywords)
- [17. Error Handling](#17-error-handling)
- [18. Working with Files](#18-working-with-files)
- [19. Major Language Features](#19-major-language-features)
  - [19.1 Classes](#191-classes)
  - [19.2 Inheritance](#192-inheritance)
  - [19.3 Generic Typing (Templates)](#193-generic-typing-templates)
  - [19.4 Pointers](#194-pointers)
- [20. Importing Local Libraries](#20-importing-local-libraries)
- [21. Working with Time](#21-working-with-time)
- [22. Importing Libaries from Package managers](#22-importing-libaries-from-package-managers)
- [23. Bitwise Operators](#23-bitwise-operators)
- [24. Common Data Structures](#24-common-data-structures)
- [25. Advanced Language Features](#25-advanced-language-features)
-->




___





# 1. Compiling and Running

C is a high-level programming language, meaning it needs to be converted to its equivalent machine code
* The compilation process has 4 steps: 
    * Preprocessing
    * Compiling
    * Assembling
    * Linking
* Preprocessing:
    * Removes all comments in the source file
    * Includes the code of the header file
    * Replaces all macros by their values
* Compiling: 
    * placeholder text





___





# 2. Data Types


Basic Types:
  - Basic types are used for arithmetic
  - There are two basic types:
      - Integer(int): used to declare whole numbers
      - Floating Point(float): used to declare numbers with up to 6 decimal places 

Enumerated Types:
  - Placeholder text

Void Type:
  - Void is used to indicate the absence of a value

Derived Types:
  - Placeholder text

```C
int x = 0;
float y = 0.0;
```





___





# 3. Console I/O

C has mulitple functions for inputs and outputs. Each function having a specific use case.

To initiate an input, printf() can be used to make a prompt.

```C
printf("Some random prompt: ");
 ```
Depending on the data type of the varible, there are a variety of options to grab the input from the prompt

One of the most versatile options is scanf(). Scanf can be used to grab an integer, floating-point number, or a char.
```C
// integer input
int x;

printf("Enter a number: ");
scanf("%d", x);

// floating-point input
float y;

printf("Enter a number: ");
scanf("%f", y);

// char input;
char *z;
printf("Enter some text: ");
scanf("%c", z);
```






___





# 4. Arithmetic Operations

C has 7 basic arithmetic operators:
  - Addition(+)
  - Subtraction(-)
  - Multiplication(*)
  - Division(/)
  - Modulus(%)
  - Increment increase by one(++)
  - Increment decrease by one(--)

Other arithmetic operators such as exponents can only be used with external libraries





___





# 5. Assignment Operations

C has 11 assignment operators
  * Equal to(=)
  * Plus equals(+=)
  * Minus equals(-=)
  * Times equals(*=)
  * Divide equals(/=)
  * Mod equals(%=)
  * Left shift(<<=)
  * Right shift(>>=)
  * And equals(&=)
  * 





___





# 6. Comments

When programming, comments are used to make code more readable or to explain what a portion of code does.

To write a comment in C, simply put 2 forward slashes before your message:

```C
// This is what a comment looks like in C
```







___





# 7. Decision Structures

???





___





# 8. Conditional Operators

???





___





# 9. Logic Operators

???





___





# 10. Advanced Decision Structures

???





___





# 11. String Methods

???





___





# 12. Random Generation

???





___





# 13. Looping Structures

???





___





# 14. Functions/Methods

???





___





# 15. Elementary Data Structures

???





## 15.1 Arrays/Lists

???






## 15.2 Matrices

???





___





<!-- 
EVERYTHING BELOW IS OPTIONAL; 
UNCOMMENT BY REMOVING THE ARROW TAGS SURROUNDING
(i.e., delete the "< !--" and "-- >" tags)

CHANGE THE SECTION NUMBERS AS DESIRED
-->

<!-- # 16. Major Keywords

???





___ -->





<!-- # 17. Error Handling

???





___ -->





<!-- # 18. Working with Files

???





___ -->





<!-- # 19. Major Language Features

???







## 19.1 Classes

???





## 19.2 Inheritance

???





## 19.3 Generic Typing (Templates)

???





## 19.4 Pointers

???





___ -->





<!-- # 20. Importing Local Libraries

???





___ -->





<!-- # 21. Working with Time

???





___ -->





<!-- # 22. Importing Libaries from Package managers

???





___ -->





<!-- # 23. Bitwise Operators

???





___ -->





<!-- # 24. Common Data Structures

???





___ -->





<!-- # 25. Advanced Language Features

???





___ -->





# References

* [Markdown Cheatsheet](https://gist.github.com/jonschlinkert/5854601)
* [description](http://example.com)
* [C Tutorial](https://www.tutorialspoint.com/cprogramming/index.htm)
