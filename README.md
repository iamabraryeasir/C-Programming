# C Programming Notes🔥⚡📝

Tutorial Following: [C Language Tutorial for Beginners](https://youtu.be/irqbmMNs2Bo)
<br>
Video Completed: [00:36:20](httpshttps://youtu.be/irqbmMNs2Bo?t=2180)

## 🗂️ Index:

| Chapter No.  | Topics Covered                          |
| :----------: | :-------------------------------------- |
| `Chapter 01` | `Variables, Data types & Input/Output.` |
| `Chapter 02` | `Instructions & Operators.`             |
| `Chapter 03` | `Conditional Statements.`               |
| `Chapter 04` | `Loop Control Statements.`              |
| `Chapter 05` | `Functions & Recursion.`                |
| `Chapter 06` | `Pointers.`                             |
| `Chapter 07` | `Arrays.`                               |
| `Chapter 08` | `Strings.`                              |
| `Chapter 09` | `Structures.`                           |
| `Chapter 10` | `File I/O.`                             |
| `Chapter 11` | `Dynamic Memory Allocation.`            |

## 0️⃣1️⃣ Chapter 01.

### 👉 First C Program in C:

```c
#include <stdio.h>

int main()
{
    printf("Hello, C Program!!");
    return 0;
}
```

### 👉 Data Types in C:

There are basically 4 fundamentals in C:

| S.No. | Data Type         | Keyword  | Formate Specifier | Size (Bytes) |
| :---: | :---------------- | :------- | :---------------: | :----------: |
|  01   | Character         | `char`   |       `%c`        |      1       |
|  02   | Integer           | `int`    |       `%d`        |      4       |
|  03   | Floating Numbers  | `float`  |       `%f`        |      4       |
|  04   | Double/Big Values | `double` |       `%lf`       |      8       |

To check the size of any data type. We need to use `sizeof` function. Syntax:

```c
// printf("%d", sizeof(data_type_name));

printf("%d", sizeof(int));
```

We can customize the primary data types using some keywords before them like:

- long
- short
- signed
- unsigned

### 👉 Variables in C:

Variable is the name of a memory location which stores some data. Basic Syntax of a Variable in C:

```c
// data_type variable_name = variable_value;

int age = 20;
```

There are basically 2 things to do for making a proper variable in C:

1. Declaring a Variable.
2. Initializing a value to it.

Declaring a Variable basically means allocating the memory space. Syntax:

```c
// data_type variable_name;
int age;
```

Initializing basically means assigning a value to the allocated memory space. Syntax:

```c
// variable_name = variable_value;

age = 20;
```

Both of them can also be done in the same line. Syntax:

```c
// data_type variable_name = variable_value;

int age = 20;
```

To print the value of a variable here is the syntax:

```c
int age = 20;

printf("My age is %d.", age);
```

### 👉 Variable Naming Rules:

1. Variables are Case Sensitive.
2. Variable names can't start with a number.
3. Variable names must start with a alphabet or underscore.
4. No commas and blank spaces are allowed in variable names.
5. No other special characters than underscore ( \_ ) is allowed in variable names.
6. Key Words can not be used as reserve words.

### 👉 Constant in C:

The value that don't change(fixed). There are basically 3 types of constants in C:

1. Integer Constant.
2. Real Constant.
3. Character Constant.

### 👉 Constant Variables in C:

There are basically 2 ways to write constant variable in C:

1. Using `const` keyword.
2. Using `#define`.

<u>**Using `const` keyword:**</u> To declare a constant variable using const keyword we just need to add const before the variable declaration.

```c
const int num = 23;
```

<u>**Using `#define`:**</u> To declare a constant variable using #define we need to follow the following syntax and add it before the main function.

```c
// #define variable_name variable_value

#define PI 3.1417
```

### 👉 Keywords in C:

Keywords are Reserved words that have special meaning to the compiler. There are `32 Keywords` in standard ANSI C.

|          |        |          |          |
| :------: | :----: | :------: | :------: |
|   auto   | break  |   case   |   char   |
| continue |   do   | default  |  const   |
|  double  |  else  |   enum   |  extern  |
|   for    |   if   |   goto   |  float   |
|   int    |  long  | register |  return  |
|  signed  | static |  sizeof  |  short   |
|  struct  | switch | typedef  |  union   |
|   void   | while  | volatile | unsigned |

### 👉 Program Structure in C:

```c
#include <stdio.h> // Preprocessor Directive.

int main() // Main function.
{
    /*
    Other program codes.
    */
    return 0;
}

```

`#include <stdio.h>` is called Preprocessor Directive. And `stdio.h` is called the standard input output header file. `.h` means header file it means code written by someone else.

`main()` function is the execution starting point for all c program. In any c program the starting of program execution will start from the main function. If there is no main function there will be no execution. Every executable c program must have a main function. Inside main function the program will execute line by line top to bottom. And after every program statement there must be a `Semicolon (;)`.

`return 0` returns a integer value to the OS. If the program execution is successful then it will return 0. But there is any error in the program it will return a non zero value.

### 👉 Showing Output in C:

To show output in C we use `printf` function. Basically what printf does is it prints a string in the terminal. Syntax:

```c
printf("Text to Show.");

\\ new line
printf("Text to Show.\n");
```

### 👉 User Input in C:

To take user inputs in C we need to use the `scanf`function. Syntax:

```c
// scanf("formate_specifier", &variable_name);

scanf("%d", &age);
```

There no direct data type for string in C. So to take String input in c we need the help of something called array. Syntax:

```c
char name[10];

scanf("%s", &name);
```
