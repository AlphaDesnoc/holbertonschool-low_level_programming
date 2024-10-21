# C - Hello World
## 0. Preprocessor
Write a script that runs a C file through the preprocessor and save the result into another file.
> - The C file name will be saved in the variable <code>$CFILE</code>
> - The output should be saved in the file <code>c</code>
[View Task](./0-preprocessor)
## 1. Compiler
Write a script that compiles a C file but does not link.
> - The C file name will be saved in the variable <code>$CFILE</code>
> - The output file should be named the same as the C file, but with the extension <code>.o</code> instead of <code>.c</code>.

<ul>
<li>Example: if the C file is <code>main.c</code>, the output file should be <code>main.o</code></li>
</ul>
> - Example: if the C file is <code>main.c</code>, the output file should be <code>main.o</code>
[View Task](./1-compiler)
## 2. Assembler
Write a script that generates the assembly code of a C code and save it in an output file.
> - The C file name will be saved in the variable <code>$CFILE</code>
> - The output file should be named the same as the C file, but with the extension <code>.s</code> instead of <code>.c</code>.

<ul>
<li>Example: if the C file is <code>main.c</code>, the output file should be <code>main.s</code></li>
</ul>
> - Example: if the C file is <code>main.c</code>, the output file should be <code>main.s</code>
[View Task](./2-assembler)
## 3. Name
Write a script that compiles a C file and creates an executable named cisfun.
> - The C file name will be saved in the variable <code>$CFILE</code>
[View Task](./3-name)
## 4. Hello, puts
Write a C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line.
> - Use the function <code>puts</code>
> - You are not allowed to use <code>printf</code>
> - Your program should end with the value <code>0</code>
[View Task](./4-puts.c)
## 5. Hello, printf
Write a C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.
> - Use the function <code>printf</code>
> - You are not allowed to use the function <code>puts</code>
> - Your program should return <code>0</code>
> - Your program should compile without warning when using the <code>-Wall</code> <code>gcc</code> option
[View Task](./5-printf.c)
## 6. Size is not grandeur, and territory does not make a nation
Write a C program that prints the size of various types on the computer it is compiled and run on.
> - You should produce the exact same output as in the example
> - Warnings are allowed
> - Your program should return <code>0</code>
> - If you are using a linux on Vagrant you might have to install the package  <code>libc6-dev-i386</code> to test the <code>-m32</code> <code>gcc</code> option (normally you dont need to do anything on your sandbox).
[View Task](./6-size.c)
