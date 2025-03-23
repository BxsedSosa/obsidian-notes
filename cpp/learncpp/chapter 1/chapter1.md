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

When compiler reaches these values, the check then sees if theres `double quotes`, `single quotes`, or just `numbers`. And if any of these checks miss, it probably will result in a compilation error.

Values that are directly placed into the source code are called `literals`.

## [[Random Access Memory]]

`RAM` is the main memory in a computer. When running any program, the OS loads up the program into RAM. All the hardcoded data thats in the program then loads into the memory.
