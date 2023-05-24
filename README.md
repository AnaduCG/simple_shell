# 0x16. C - Simple Shell
Alx group project on a simple LINUX shell to be done by two contributors.

## Introduction
The simple shell is a basic command-line interface that allows you to interact with an operating system. This documentation provides instructions on how to use the simple shell to run commands and execute programs.

The simple shell project aims to implement a version of the basic Unix shell.

The shell is a program that interprets commands for the kernel and acts as an interface between the user and the kernel.

##Program Compilation
To run this version of the shell, you need to frit clone the repo in your local machine then compile it using the following gcc command:

`gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh`

This command compiles the executable program, and you can run it by executing:

`./hsh`

##Program Usage
Once the shell program is running, you can start entering commands. The shell supports both built-in commands and external executable files.

Built-in Commands
The following built-in commands are supported:

- cd [directory]: Change the current working directory to the specified directory.
- env: Display the current environment variables.
- exit: Exit the shell.
* To run a built-in command, simply type the command followed by any necessary arguments and press Enter.

Example:

`$ cd Documents`

## External Executable Files
The simple shell can also execute external executable files that are stored on your computer. To run an executable file, you need to provide the path to the file.

For example, if you have an executable file called myprogram in the current directory, you can run it by entering the following command:

`$ ./myprogram`

The shell will execute the program and display any output.

## Overview of Implemented Functions
* main.c
This file contains functions that handle all the running of the program and accepting input from the user.

* execute.c
The command.c file executes the commands entered by the user.

* exit.c
This file handles the "exit" commands inputted to the shell.

* main.h
main.h contains all the function prototypes and header files used in the shell program.

Path.c
The path.c file handles the PATH environment variable when executing commands.

Conclusion
The simple shell provides a basic command-line interface that allows you to interact with an operating system. By following the instructions in this documentation, you should be able to use the simple shell to run commands and execute programs.