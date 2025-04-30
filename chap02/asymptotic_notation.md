# Asymptotic Notations

## Rule 1
### Big-O Notation (O)
A function f(n) is O(g(n)) if there exist positive constants c and n₀ such that f(n) ≤ c·g(n) for all n ≥ n₀.

### Big-Omega Notation (Ω)
A function f(n) is Ω(g(n)) if there exist positive constants c and n₀ such that f(n) ≥ c·g(n) for all n ≥ n₀.

### Theta Notation (Θ)
A function f(n) is Θ(g(n)) if there exist positive constants c₁, c₂, and n₀ such that c₁·g(n) ≤ f(n) ≤ c₂·g(n) for all n ≥ n₀.

### Little-o Notation (o)
A function f(n) is o(g(n)) if for every positive constant c, there exists a constant n₀ such that f(n) < c·g(n) for all n ≥ n₀.

### Little-omega Notation (ω)
A function f(n) is ω(g(n)) if for every positive constant c, there exists a constant n₀ such that f(n) > c·g(n) for all n ≥ n₀.

## Rules for Asymptotic Notation

### Addition Rule
If T₁(n) = O(f(n)) and T₂(n) = O(g(n)), then T₁(n) + T₂(n) = O(max(f(n), g(n)))

### Multiplication Rule
If T₁(n) = O(f(n)) and T₂(n) = O(g(n)), then T₁(n) × T₂(n) = O(f(n) × g(n))

### Reflexivity Rule
If f(n) = O(g(n)) and g(n) = O(f(n)), then f(n) = Θ(g(n))

### Transitivity Rule
If f(n) = O(g(n)) and g(n) = O(h(n)), then f(n) = O(h(n))

# Growth Rate Table (Slowest to Fastest)

| Function    | Name                  |
|-------------|----------------------|
| O(c)        | Constant time        |
| O(log n)    | Logarithmic time     |
| O((log n)²) | Log-squared time     |
| O(n)        | Linear time          |
| O(n log n)  | Linearithmic time    |
| O(n²)       | Quadratic time       |
| O(n³)       | Cubic time           |
| O(2ⁿ)       | Exponential time     |

## Rule 2
If T(n) is a polynomial of degree k, then T(n) = Θ(n^k)

## Rule 3
log^k(n) = O(n) for any constant k > 0, which tells us that logarithms grow very slowly

### Additional Notes
It is very bad style to include constants or low-order terms inside Big-O.

We can always determine the relative growth rates of two functions f(N) and g(N) by computing lim N→∞ f(N)/g(N), using L'Hôpital's rule if necessary:

- If the limit is 0, this means that f(N) = o(g(N))
- If the limit is c ≠ 0, this means that f(N) = Θ(g(N))
- If the limit is ∞, this means that g(N) = o(f(N))
- If the limit oscillates, there is no relation
