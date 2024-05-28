# C Programming Notes🔥⚡📝

Tutorial Following: [C Language Tutorial for Beginners](https://youtu.be/irqbmMNs2Bo)
<br>
Video Completed: [00:00:00](https://youtu.be/irqbmMNs2Bo)

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

### 👉 Showing Output in C:

To show output in C we use `printf` function. Basically what printf does is it prints a string in the terminal. Syntax:

```c
printf("Text to Show.");
```

### 👉 Data Types in C:

There are basically 4 fundamentals in C:

| S.No. | Data Type         | Keyword  | Formate Specifier |
| :---: | :---------------- | :------- | :---------------: |
|  01   | Integer           | `int`    |       `%d`        |
|  02   | Floating Numbers  | `float`  |       `%f`        |
|  03   | Character         | `char`   |       `%c`        |
|  04   | Double/Big Values | `double` |       `%lf`       |

### 👉 Variables in C:

Variables are like containers. Variables are basically names given to a memory location in a program to store some data and access it afterwards when needed. Basic Syntax of a Variable in C:

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
