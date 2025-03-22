# Statements

A statement is a piece of code, it may be a single line of code ended by a semicolon `;` or a block of code that is being executed in sequence

There are different types of statements in C++:

- Declaration
- Selection
- Iteration
- Expression
- Compound
- Jump
- Exception handling

## Declaration Statement

This one probably being the most basic one that people will see a decent amount. It's when you are declaring a new variable/const hence the name `Declaration`.

```cpp
int main() {
    int a; // `a` is declared here of type int
    string b; // 'b' is declared here of type string
    return 0;
}
```

## Selection Statements

Selection statements are when you have a if, if...else, or a switch. These conditions are considered `selection` statements since you are telling the program to do `this` if its true or if its false do something else.

```cpp
int main() {
    int a, b, c;

    // if a and b are equal then c = a + b
    // else c = a times b

    if (a == b)
        c = a + b;
    else
        c = a * b;

    return c;
}
```

## Iteration Statements

A iteration statement happens when using a `loop` to repeat a block of code over and over again. By using these loops:

- while
- do...while
- for

these are all considered `iteration statements`.

```cpp
int main() {
    int num = 5;

    while (num > 0) {
        std::cout << num << " ";
        num -= 1;
    }

    return 0;
}
```

```
Output: 5 4 3 2 1
```

## Expression Statements

These statements are when the program evaluates am expression, prints out an output to the console, takes an input, assigns some value to a variable, or calls a function.

If an expression is ommitted and only a semicolon is there `;` then this is called a `null statement`

```cpp
int main() {
    int a, b;

    if (a > 0)
        ;                   // null statement
    else
        int c = a / b;      // expression statement

    return 0;
}
```

## Compound Statements

A compound statement is a group of statements enclosed in curly braces. Executing each statement from top to bottom one at time.

```cpp
if (num >= 1) {
    int a = 10;

    std::cout << a << endl;
}
```

## Jump Statements

Jump statements are used to give or get control of a function. Examples of these statements are `break`, `continue`, `return`, or `goto`. These statements are used to transfer flow control unconditionally.

```cpp
int sum(int a, int b) {
    return a + b;
}
```

## Exception Handling Statements

This statement is when using the `try`, `catch`, and `finally` statements. The `try` block identifies the exception and throws it. The `catch` block then catches what the `try` block threw. The `finally` block then executes no matter what the outcome of the `try` or `catch` was.
