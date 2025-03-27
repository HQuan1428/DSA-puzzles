# Chapter 2: Recursive and Backtracking

## What is Recursion?
Any function which calls itself is called recursive.
A recursive method solves a problem by calling a copy of itself to work on a smaller problem.
This is called the recursion step. The recursion step can result in many more such recursive calls.

It is important to ensure that the resursion terminates. Each time the function calls itself with a slightly simpler version of the original problem. The sequence of smaller problems must eventually converge on the base case.

## Why Recursion? 
Recursion is useful technique brrowed from mathematics. Recursive code is generally shorter and easier to write than iterative code. 
Recursion is most useful for tasks that can be defined interms of simlar subtasks. 

## Format of a Recursive Function
A Recursive function performs a task in part by calling itself to perform the subtasks. At some point, the function encounters a subtask that it can perform without calling itself(base case). The former, where the function calls itself to perform a subtask(recursive case).
We can write all recursive functions using the format:
```c
if(test for the base case)
    return some base case value
else if (test for another base case)
    return some other base case value
    // the recursive case
else 
    return(some work and then a recursive call)
```

As an example consider the factorial function: n!
```c
n! = 1           if n = 0
n! = n * (n-1)!  if n > 0
```

In the base case, when n is 0 or 1, the function simply returns 1.
```c
// calculate factional of a positive integer
int Fact(int n) {
    if(n == 1) {
        return 1;
    }
    else if (n == 0) {
        return 1
    }
    else // recursive case multiply n by (n-1) factorial
        return n * Fact(n-1);
}
```

## Recursion and Memory (Visualization)

## Recursion versus Iteration
Which way is better? - iteration or recursion ?
### Recursion
- Terminates when a base case is reached.
- Each recursiove call requires extra space on the stack frame(memory).
- If we get infinite recursion, the program may runout of memory and resul in stack overflow.
- Solutions to some problems are easier to formulate recursively.
### Iteration
- Terminates when a condition is proven to be false
- Each iteration does not require extra space.
- An infinite loop could loop forever since there is no extra memory being created.
- Iterative solutions to a problem may not always be as obvious as a recursive solution.

## Notes on Recursion
- Recursive algorithms have two types of cases, recursive cases and base cases.
- Every recursive function case must terminate at a base case.
- Generally, iterative solutions are more efficient than recursive solutions.
- A recursive algorithm can be implemented without recursive function calls using a stack.
- For some problems, there are no obvious iterative algorithms
- Some problems are best suited for recursive solutions while others are not.

## What is Backtracking?
Backtracking is an improvement of the brute force aproach. 

## Problems and Solution