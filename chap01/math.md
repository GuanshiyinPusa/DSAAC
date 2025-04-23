# Some Handy Math

## Exponents
X<sup>A</sup> · X<sup>B</sup> = X<sup>A+B</sup>  
X<sup>A</sup> / X<sup>B</sup> = X<sup>A−B</sup>  
(X<sup>A</sup>)<sup>B</sup> = X<sup>AB</sup>  
X<sup>N</sup> + X<sup>N</sup> = 2X<sup>N</sup> ≠ X<sup>2N</sup>  
2<sup>N</sup> + 2<sup>N</sup> = 2<sup>N+1</sup>

## Logarithms
- Definition: X<sup>A</sup> = B if and only if log<sub>X</sub>B = A
- Theorem 1.1:  
  log<sub>C</sub>B = log B / log A, C > 0
- Theorem 1.2:  
  log(AB) = log A + log B  
  log(A/B) = log A − log B  
  log(A<sup>B</sup>) = B·log A  
  log X < X for all X > 0  
  log 1 = 0, log 2 = 1, log 1024 = 10, log 1048576 = 20

## Series
∑<sub>i=0</sub><sup>N</sup> A<sup>i</sup> = (A<sup>N+1</sup> − 1) / (A − 1)  
If 0 < A < 1, then ∑<sub>i=0</sub><sup>N</sup> A<sup>i</sup> ≤ 1 / (1 − A)

∑<sub>i=0</sub><sup>N</sup> i = N(N+1)/2 ≈ N<sup>2</sup>/2  
∑<sub>i=0</sub><sup>N</sup> i<sup>2</sup> = N(N+1)(2N+1)/6 ≈ N<sup>3</sup>/2  
∑<sub>i=0</sub><sup>N</sup> i<sup>k</sup> ≈ log<sub>e</sub>N

∑<sub>i=1</sub><sup>N</sup> f(N) = N·f(N)

∑<sub>i=n₀</sub><sup>N</sup> f(i) = ∑<sub>i=1</sub><sup>N</sup> f(i) − ∑<sub>i=1</sub><sup>n₀−1</sup> f(i)

## Proof

### By Induction
1. Providing a base case  
2. Inductive hypothesis

### Counterexample

### Contradiction
Assume that the theorem is false and show that this assumption implies that  
some known property is false, and hence the original assumption was erroneous.

## Recursion
- Four fundamental rules of recursion:
    - **Base cases**: You must always have some base cases, which can be solved without recursion.
    - **Making progress**: For the cases to be solved recursively, the recursive call must always move toward a base case.
    - **Design rule**: Assume that all the recursive calls work.
    - **Compound interest rule**: Never duplicate work by solving the same instance of a problem in separate recursive calls.
