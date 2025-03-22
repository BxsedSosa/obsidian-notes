# Introduction

## The 7 steps to solving a problem

### Step 1

**Define the problem to solve**

This step is where you may have a problem you want to solve with programming, but the questions you are asking may be too vague. Here is the time to break apart your issue into smaller bits to make it easier to attack the problem.

If I were to create a to-do list, what would be some steps I'd need to take to make it simpler to understand. By saying you want to create a ambiguous project, it may seem daunting since you may not know where to start.

By breaking apart the to-do list, we can start at:
1. How would I take an input
    - Where would this input go?
    - Is the list of things to-do one big list? or 1 main task and we create subtask

2. How are we going to view these to-do's

3. How would we save the data that is given so when re-opening the program old to-do's are still there

etc...

### Step 2

**Design a solution**

This step requires that the first step is thought out, because without the problem fleshed out it may seem hard to come up with a good solution.

Here you are finding all the tools you'd need to put all of it together. Writing psuedo code, creating logic trees, or just making a map of how things will be proccessed comes a long way when designing a solution.

### Step 3

**Write a program that implements the solution**

This step is more straight forward, you are just taking `step 2` and writing it into whatever code you are going to complete the project with.

### Step 4

**Compiling your source code**

When compiling your C++ code the compiler sequentially goes through all the `.cpp` files in the program then completed 2 important task:

1. The compiler first makes sure that the source code that is written is within the C++ syntax guidelines, if not the compiler would throw you an error and cutting the compiler to exit. This will keep occurring until the programmer fixes the compiler is asking for.

2. After the syntax is cleared, then the compiler then takes the `.cpp` files and translates them into `object files` which will contain the machine language instructions

### Step 5

**Linking object files and libraries and creating the desired output file**

Once the object files in `step 4` are completed, the linker is then started up. The job of the linker is to take all the object files & produce the desired output such as a executable. If any issues happen during the linking stage the compiler will abort and throw a error message telling you why the issue occurred.

How the linker works:
1. The linker first checks all `object files`, and makes sure they all are valid

2. The linker then makes sure that cross-file dependencies are resolved.
    - If you defined a function in one `.cpp` file then use it in a different `.cpp` file, the linker makes sure that these two files are connected
    - If the linker is unable to figure out a reference to something from another file it will then abort and throw an error

3. After the linker puts together the `library files` that might have been added (i.e. [[standard-library]] [[3rd-party-libraries]])

4. The final step is where the linker then outputs the desired outcome, if you wanted a executable then that would the output.
