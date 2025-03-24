# Chapter 1

## Statements

In programming a statement is a type of instructions that the program has to preform.

Statement are a very common instruction in C++ so seeing them and understanding what they are and what they look like is a good idea. They are the smallest independent unit of computation in C++. Think of a statement as a complete sentence in English but each statement in coding you are asking for the computer to do something in deep detail. Most (but not all) statements in C++ are ended with a semicolon `;`. Here are the different types of C++ [[Statements]]:

- Declaration statements
- Jump statements
- Expression statement
- Compound statement
- Selection statement
- Iteration statement
- Try block statement

## Functions and the `main` Function

A collection of statements put together in one block of code could be called a `function`. A `function` being a collection of statements, each statement within the function is completed from top to bottom/sequentially.

**Rule**
One rule within C++, it is a requirement to have a function called `main` that puts everything all together for the compiler to put everything you needed together.

When running a program that was compiled, starting from top going to the bottom. It runs every line of code, but if there were to be any errors that could cause the program to abort and end early. This is when you would have to try and debug what the issue is in this case.

The name of a function i.e. `main` is called its `identifier`.

## Data & Values

In computers we need to read, write, or delete `data`. Data is a integral part of all computers because we need to save data for us to make analysis for anything we are collecting data from. Which that could mean we are getting data for our health, for customer that we might have, or world data.

When programming, a single piece of `data` is called a `value` or sometimes `data value`:

- Numbers (e.g. 5 or -6.7)
- Characters (when a characters is placed in between single quotes 'h' or '$')
- Text (when character(s) are placed in between double quotes "Hi" or "h")

When compiler reaches these values, the check then sees if there's `double quotes`, `single quotes`, or just `numbers`. And if any of these checks miss, it probably will result in a compilation error.

Values that are directly placed into the source code are called `literals`.

## [[Random Access Memory]]

`RAM` is the main memory in a computer. When running any program, the OS loads up the program into RAM. All the hardcoded data that's in the program then loads into the memory.

## Input/Output Library

The [[standard-library]] has a library called `iostream` which takes in data for inputs and also outputs data to the console.

```cpp
#include <iostream>
```

### std::cout

`iostream` has predefined variables such as `std::cout`. `std::cout` sends data from the program to the console. Like in the `Hello world` program that we created in [[chapter0]]

```cpp
#include <iostream>

int main() {
    std::cout << "Hello world!" << std::endl;
    return 0;
}
```

In this example `std::cout` starts out the statement, then followed with the **insertion operator** `<<`. The insertion operator, takes that data the is on the right side and outputs that to the console.

```cpp
#include <iostream>

int main() {
    std::cout << 4 << std::endl;
    return 0;
}
```

This example showcases that it can be other data types that can be outputted to the console.

```
Tip:

Think of `<<` & `>>` as conveyor belts that are moving data in that direction.
```

### std::endl

This function allows for you to start a new line when outputting to the console. This allows you to keep the data that's being outputted in a more clean and concise style. `endl` means `end line`

### `std::cout` is buffered

The meaning behind `buffered` is that the way data is processed to the console is like a train. The train fills out the seats and if it were to be full then it will deliver those people. Then come back after dropping them off. This means that there is a potential that your data didn't make it through and could be missing from the output if the train happened to be full.

Since the outputs are `buffered` that means if the program were to

### `std::endl` vs `\n`

Using `std::endl` is no efficient to use, it completes two jobs:

1. It first outputs a new line to the console
2. Then flushes the buffer (Very slow process)

When it comes to flushing the buffer in C++, its probably unecessary. So it's best to leave that for C++ to do on its own.

By using `\n`, we get to start the new line on the output. Without the process of flushing the buffer. So this method is less taxing on processing which should help with small speed gains.

```cpp
#include <iostream>

int main() {
    int x{5};
    std::cout << "x is equal to: " << x << '\n';
    // Single quotes

    std::cout << "Yep." << "\n";
    // Double quotes

    std::cout << "And that's all, folks!\n";
    // Double quotes, but with exising text

    return 0;
}
```

### std::cin

`std::cin` being another predefined variable in `iostream`. This function now takes inputs from the console. Using `std::cin` and the extraction operator `>>` to move the input to a variable.

```cpp
#include <iostream>

int main() {
    std::cout << "Enter a number: ";

    int x{};         // Define variable x
    std::cin >> x;   // Get number from keyboard & store it to variable x

    std::cout << "You entered " << x << '\n';
    return 0;
}
```

This code snippet, starts off with outputting what the program wants. Then define a variable `x` that will be a int (integer). The next line now uses the `std::cin` waits for keyboard inputs and enter for the program to continue. Finally, then output the number that was inputted to `x`

C++ I/O libraries do not provide a way to accept keyboard input without the user having to press enter. You would need to use a third party library for this kind of feature.

### `std::cin` is buffered

Just like how `std::cout` is a 2 stage process. `std::cin` works in a similar way:

1. Each individual characters you enter are added to the input buffer of `std::cin`. Once the enter key is pressed then `\n` character added to end.
2. The extraction operator `>>` removes characters from the front of the buffer and transfer it to the variable.

### The basic extraction process

`>>` operator simplified:

1. If `std::cin` is not in a good state, no extraction is attempted and extraction process aborts immediately.
2. If leading whiteaspaces are there it will be removed by default by the buffer. This will discard an unextracted newline character remaining from a prior line of input.
3. If the input buffer is empty, `>>` will wait till user enters more data.
4. The `>>` operator extracts as many consecutive characters as it can, until it reaches a newline character or a character that isn't valid for the variable to hold.
