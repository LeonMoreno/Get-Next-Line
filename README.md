<h1 align="center">
	📖 Get_Next_Line
</h1>

<p align="center">
	<img alt="GitHub code size in bytes" src="https://img.shields.io/github/languages/code-size/LeonMoreno/Get-Next-Line?color=lightblue" />
	<img alt="Number of lines of code" src="https://img.shields.io/tokei/lines/github/LeonMoreno/Get-Next-Line?color=critical" />
	<img alt="Code language count" src="https://img.shields.io/github/languages/count/LeonMoreno/Get-Next-Line?color=yellow" />
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/LeonMoreno/Get-Next-Line?color=blue" />
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/LeonMoreno/Get-Next-Line?color=green" />
</p>


## 💡 About the project

	🚀 TLDR: The aim of this project is to make you code a function that returns a line, read from a file descriptor.

## Key points:
* Learn a highly interesting new concept in C programming: static variables.
* C Advanced Pointers.
* system calls in C.
* Unix logic.
* Memory management anomalies in C.


## Objectives:
* Read the text available on the file descriptor one line at a time until the end of it.
* Return the line that has just been read. If there is nothing else to read or if an error has occurred it should return NULL


## Skills:
* Unix
* Rigor
* Algorithms & AI

## List of functions:

### Functions from `<ctype.h>` library

* [`ft_isascii`](/src/ft_is//ft_isascii.c)		- test for ASCII character.



## 🛠️ Usage

### Requirements

The library is written in C language and needs the **`gcc` compiler** and some standard **C libraries** to run.

### Instructions

**1. Compiling the library**

 Commande       	|  Actions 	|
|----------------	|----------	|
| `make`      	  | Compile les .c et créer libft.a  	|
| `make clean`    | Supprime les .o.  	|
| `make flcean`  	| Supprime les .o et libft.a.  	|
| `make re`     	| Exécute fclean et make.  	|
| `make bonus`          | For bonus functions.        |
| `make norm`          | Verification with the norminettes. |


**2. Using it in your code**

To use the library functions in your code, simply include its header:

```C
#include "libft.h"
```

`gcc [main] libft.a && ./a.out` | Compile a main with the library, and then execute the program.


## 📋 Third-party testers

You can use any of this third party testers to test the project

* [Tripouille/libfTester](https://github.com/Tripouille/libftTester)
* [ska42/libft-war-machine](https://github.com/ska42/libft-war-machine)
* [alelievr/libft-unit-test](https://github.com/alelievr/libft-unit-test)
