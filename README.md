
*****************
# Monty

`monty` is an interpreter of Monty ByteCodes files, which is a scripting language just like Python.

## About  Monty language
This is a language that contains specific instructions to manipulate data information (stacks or queues), where each instruction (*called opcode*) is sended per line. Files which contains Monty byte codes usually have  `.m` extension.
*******************************************
Example (`file.m`):
```bash
$ cat file.m
# Pushing element to  stack
push 0
push 1
push 2
# Printing all elements
pall
push 3
push 4
pop
# Rotating  stack to  bottom
rotr
pall
rotl
# Setting FIFO
queue
push 5
# Setting LIFO
stack
push 5
$
```

## Technologies
* Interpreter was written with C language
* C files are compiled using `gcc 4.8.4`
* C files are written according to  C90 standard
* Tested on Ubuntu 14.04 LTS

## Usage
To compile all files:

```bash
$ gcc -Wall -Werror -Wextra -pedantic *.c -o monty
$
```

 **synopsis** of  interpreter is  following:

```bash
$ ./monty [filename]
$
```

To run  interpreter:

```bash
$ ./monty file.m
2
1
0
0
3
2
1
$
```

## Features
### Opcodes
`monty` executes  following opcodes:

| Opcode | Description |
| -------- | ----------- |
| `push` | Pushes an element to  stack |
| `pall` | Prints all  values on  stack |
| `pint` | Prints  value at  top of  stack |
| `pop` | Removes  top element of  stack |
| `swap` | Swaps  top two elements of  stack |
| `queue` | Sets  format of  data to a queue (FIFO) |
| `stack` | Sets  format of  data to a stack (LIFO) |
| `nop` | Doesn't do anything |
| `add` | Adds  top two elements of  stack |
| `sub` | Subtracts  top element of  stack from  second top element of  stack |
| `mul` | Multiplies  second top element of  stack with  top element of  stack |
| `div` | Divides  second top element of  stack by  top element of  stack |
| `mod` | Computes  rest of  division of  second top element of  stack by  top element of  stack |
| `pchar` | Prints  char at  top of  stack |
| `pstr` | Prints  string starting at  top of  stack |
| `rotl` | Rotates  stack to  top |
| `rotr` | Rotates  stack to  bottom |

Comments, indicated with `#`, are not executed by  interpreter.

When a **nonextistent opcode** is passed,  interpreter prints an error message and stops:

```bash
$ cat errorfile.m
push 1
pint
pcx
$ ./monty errorfile.m
1
L3: unknown instruction pcx
```

### Return value
When there is no errors, `monty` returns `0`. Otherwise, returns `1`
