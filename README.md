# C Programming Notes 🔥⚡📝

## 🧑‍💻 Developer Environment:

👉 `VS Code + MSYS2 (GCC/G++)`

- [VS Code](https://code.visualstudio.com/) => It is a Code Editor Developed by Microsoft. It is mostly loved Code Editor among developers today. We need to install some extensions to make it more comfortable to write and run C Code. The list of extensions is:

  - [C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools) => The C/C++ extension adds language support for C/C++ to Visual Studio Code, including editing (IntelliSense) and debugging features.
  - [Code Runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner) => To run C Code in terminal automatically.

- [MSYS2](https://github.com/msys2/msys2-installer/releases/download/2024-05-07/msys2-x86_64-20240507.exe) => MSYS2 is a collection of tools and libraries providing you with an easy-to-use environment for building, installing and running native Windows software. Basically it is to install the `C Compiler (GCC/G++)` without any hassle.

## 👉 Showing Output in C:

- <u>Printf Function:</u> The `printf` function is used to show output in C. It allows you to display text and variables to the console. Syntax:

  ```c
  printf("formatted string", variable_1, variable_2,...);
  ```

- <u>Displaying Text:</u> To print any text using printf. Just enclose the massage/text in double quotes. Syntax:

  ```c
  printf("Hello, C Program!!");
  ```

- <u>New Line:</u> Use `\n` within the string to move to a new line. Syntax:

  ```c
  printf("Hello, \nC Program!!");
  ```

- <u>Inserting Variable Values:</u> We need to use `formate specifiers` to insert variable values inside the string. Like:
  - `%d` or `%i` => For Integers.
  - `%c` => For Characters.
  - `%f` => For Floating Point Values.
  - `%lf` => For Double Values.

## 👉 Importance of Main Method/Function:

- <u>Entry Point:</u> It's the entry point of a C program, where the execution starts. When a C program is executed, the execution starts from the main function.
- <u>Required:</u> Every executable C Program must have a main function.
- <u>Return Type:</u> A successful program execution returns 0 to the OS and a unsuccessful program execution returns a non-zero value.
- <u>Fixed Name:</u> The name main is recognized as the programmes starting point by the compiler.

## 👉 Comments in C:

- Used to add notes in Code.
- Not consider as the part of code.
- Helpful for Code organization.
- Usually written for the Developers.
- There are `2 types of comments in C`:
  1. Single Line Comment.
     ```c
     // This is a single line comment.
     ```
  2. Multi Line Comment.
     ```c
     /*
     This is a
     Multi Line
     Comment.
     */
     ```

## 👉 Manually Compile a C Program.

```bash
gcc file_name.c -o output_file_name
```
