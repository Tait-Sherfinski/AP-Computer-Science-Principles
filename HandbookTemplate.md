<h1>Handbook on Programming in C</h1>

**AP Computer Science Principles 2024-2025**

Tait Sherfinski

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
    ```C
    int x = 0;
    float y = 0.0;
    ```

Enumerated Types:
  - Enumerated types are used give names to constants, making code easier to read
  - They are only used on values or sets of values that will not change
  - The keyword enum is used to declare and enumerated type
  ```C
  enum week{mon, tue, wed, thu, fri};
  enum week day;
  ```

Void Type:
  - Void is used to indicate the absence of a value

Derived Types:
  - As the name implies, derived types are derived from other data types in C
  - These types include 
    - Functions
    - Arrays
    - Pointers
  - Declaration of derived types varies between each type
    - Function declaration:
    ```C
    int function(int num1, int num2) {
      return num1 * num2;
    }
    ```
    - Array declaration:
    ```C
    int arr[] = {1, 2, 3, 4, 5};
    ```
    - Pointer declaration:
    ```C
    int *pointer;
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
Other input and output options are exclusively used for char inputs, these include
  - getchar
  - putchar
  - gets
  - fgets
  - puts
  - fputs

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

Other arithmetic operators such as exponents can only be accessed with external libraries

___

# 5. Assignment Operations

C has 11 assignment operators
  * Equal to(=): assigns a variable to a value
  * Plus equals(+=): adds a value in addition to an existing value
  * Minus equals(-=): subtracts a value from an existing value
  * Times equals(*=): multiplies a value to an existing value
  * Divide equals(/=): divides a value from an existing value
  * Mod equals(%=): returns the value of one value from another

___

# 6. Comments

When programming, comments are used to make code more readable or to explain what a portion of code does.

To write a comment in C, simply put 2 forward slashes before your message:

```C
// This is what a comment looks like in C
```

___

# 7. Decision Structures

C has 5 different statements that can be used to handle decision making:
  - If Statement
  ```C
  if (boolean expression) {
    expression;
  }
  ```
  - If-Else Statement
  ```C
  if (boolean expression) {
    expression;
  }
  else {
    expression;
  }
  ```
  - Nested If Statement
  ```C
  if (boolean expression) {
    if (boolean expression2) {
      expression;
    }
    else {
      expression;
    }
  }
  else {
    if (boolean expression3) {
      expression;
    }
    else {
      expression;
    }
  }
  ```
  - Switch Statement
  ```C
  switch(expression) {
    case expression1 :
    statement(s);
    
    case expression2 :
    statement(s);
    
    default :
    statement(s)
  }
  ```
  - Nested Switch Statement
  ```C
  switch (expression1) {
   case 1 :
   switch (expression2){
      case a :
         statement;
      case b :
         statement;
   }
   case 2 :
   switch (expression2){
      case c :
         statement;
      case d :
         statement;
    }  
  }
  ```

___

# 8. Conditional Operators

The conditional operator(?) in C is very similar to an if-else statement. The benefit of using the conditional operator in place of an if-else statement is that it takes up less space and is the shortest way to represent a decision structure.<br>

The conditional operator can be used in 3 different syntaxes:<br><br>
Syntax 1:
```C
variable = expression1 ? expression2 : expression3;
```
Syntax 2:
```C
variable = (condition) ? expression2 : expression3;
```
Syntax 3:
```C
(condition) ? (variable = expression2) : 
(variable = expression3);
```

___

# 9. Logic Operators

Logic operators in C evaluate whether something is true or false. They are often used for statements and loops such as if-statements and while loops.

There are 3 different logic operators in C:
  - And(&&): <br>
    Used to indicate whether or not all given statements are true
    ```C
    if (statement1 && statement2) {
      expression;
    }
    ```
  - Or(||): <br>
    Indicates if at least one given statement is true
    ```C
    if (statement1 || statement2) {
      expression;
    }
    ```
  - Not(!): <br>
    Indicates that a statement is not true
    ```C
    if (!statement1) {
      expression;
    }
    ```





___





# 10. Advanced Decision Structures

???





___





# 11. String Methods

The <string.h> library in C contains an assortment of functions regarding the handling of strings.<br>

These functions include:<br>

- strcmp:<br>
  compares 2 strings and returns 0 if they are equal, returns a value less than 0 if the first string is shorter than the second, or a value greater than 0 if the second string is shorter than the first string
  ```C
  char str[] = "Thing";
  char str2[] = "Thing";
  return strcmp(str, str2);
  // returns 0  
  ```
- strlen: <br>
  returns the length of a given string
  ```C
  char str[] = "HelloWorld";
  return strlen(str);
  // returns 10
  ```
- strstr: <br>
  Searches for the first occurence of a substring within a given string and returns a pointer to that string. If no occurences are found, it return null.
  ```C
  char str[] = "HelloWorld";
  char substr[] = "Wor";
  return strstr(str, substr);
  // returns "World"
  ```





___





# 12. Random Generation

To generate a random number or numbers in C, the rand() function in used. The user must give a maximum and minimum range for the random number to be generated in.

```C
int min = 5;
int max = 10
int randomNum = rand() % (max - min + 1) + min;
return randomNum;
// returns 6
```

___

# 13. Looping Structures

There are 3 ways to initiate a loop in C:

- For loop: <br>
Starts at an initial value and increments until a maximum or minimum value is reached
```C
for (int i = 0; i < 5; i++) {
  printf("This will print 5 times\n");
}
// output:
// This will print 5 times
// This will print 5 times
// This will print 5 times
// This will print 5 times
// This will print 5 times
```
- While loops: <br>
Continuously repeats while a certain condition is true. If a condition is always true, it will loop infinitely until terminating the program
```C
int x = 0;
while (x < 5) {
  printf("This will print 5 times\t");
  x++;
}
// output:
// This will print 5 times  This will print 5 times This will print 5 times This will print 5 times This will print 5 times
```
- Do-while loops: <br>
A do-while loop is very similar to a regular while loop, however, do-while loops ensure that, even if the condition is not true, the loop will run at least once.

```C
int x = 0;
do {
  printf("This will print twice\n");
  x++;
} while (x < 2);
// output:
// This will print twice
// This will print twice
```





___





# 14. Functions/Methods

Functions are blocks of code that are used to complete specific tasks. All C programs have at least one functions, this being the main() function. <br>

The basic syntax for a function in C has the return type of the function, the name of the function, and the parameters taken in, although, parameters are not required.
```C
return_type function_name(parameter);
```
<br>Additional functions are usually accessed within other functions including main.<br>

C also has built-in functions and libraries which contain functions. Common libraries include stdio.h, string.h, and math.h. <br>

These libraries are used to access very basic functions that most C programs will use, including printf, scanf, common math functions, and string methods.

```C
#include <stdio.h>

int someFunction(int num) {
  return num * 5;
}

int main() {
  int x;

  printf("Enter a number: ");
  scanf("%d", &x);

  int y = someFunction(x);
  printf("%d", y);
}
// Enter a number: 4
// 20
```





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
* [GeeksforGeeks](https://www.geeksforgeeks.org/)