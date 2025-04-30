# General Rules

## Rule 1 -- For loops:
The running time of a for loop is at most the running time of the statements
inside the for loop (including tests) times the number of iterations.

## Rule 2 -- Nested for loops:
Analyze these inside out. The total running time of a statement inside a group of nested for loops is the running time of the statement multiplied by the product of the sizes of all the for loops.

As an example, the following program fragment is O(N<sup>2</sup>):
```
for( i=0; i<n; i++ )
    for( j=0; j<n; j++ )
        k++;
```

## Rule 3 -- Consecutive statements:
These just add (which means that the maximum is the one that counts.
As an example, the following program fragment, which has O(N) work followed by O(N<sup>2</sup>) work, is also O(N<sup>2</sup>):
```
for( i=0; i<n; i++)
        a[i] = 0;
    for( i=0; i<n; i++ )
        for( j=0; j<n; j++ )
            a[i] += a[j] + i + j;
```
## Rule 4 -- If/else
For the fragment:
```
if(Condition)
    S1
else
    S2
```
the running time of an if/else statement is never more than the running time of the test plus the larger of the running times of S1 and S2.

## Example on recursion
```
long int
Fib(int N)
{
    if (N <= 1) // 1
        return 1;   // 2
    else
        return Fib(N-1) + Fib(N-2)  // 3
}
```

Let T(N) be the running time of Fib(int N)

If N = 0 or N = 1, then the running time is some constant value, which is the
time to do the test at line 1 and return.
T(0) = T(1) = 1 because constants do not matter

For N > 2, the time to execute the funciton si the contstant work at line 1 plus
the work at line 3. Line 3 consists of an addition and two function calls.
The total time required is then T(N-1) + T(N-2) + 2, where the 2 accounts for
the work at line 1 plus the addtion at line 3.
