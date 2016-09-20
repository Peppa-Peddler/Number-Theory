# Number Theory
> The branch of mathematics that deals with the properties and relationships of numbers, especially the positive integers.

## Table of contents

1. [Integer Numbers] (#integer-numbers)
2. [Peano axioms] (#peano-axioms)
3. [Divisibility] (#divisibility)
4. [Greatest Common Divisor] (#greatest-common-divisor)
5. [Prime Numbers] (#prime-numbers)
6. [Fundamental Theorem of Arithmetic] (#fundamental-theorem-of-arithmetic)
7. [Modulo Operation] (#modulo-operation)
8. [Euclidean Algorithm] (#euclidean-algorithm)
0. [Fermat's little theorem] (#fermats-little-theorem)
8. [Modular exponentiation] (#modular-exponentiation)
8. [Modular inverses] (#modular-inverses)

## Integer numbers
> An integer is a number that can be written without a fractional component

## Peano axioms

> In mathematics, the natural numbers are those used for counting and ordering.

The Natural numbers are formal defined by the **Peano axioms**:

1. 0 is a natural number.
2. Every Natural number `n` has a succesor, and is denoted as `s(n)`.
3. 0 is not the succesor of any natural number: `s(n) != 0`.
4. If `s(x) = s(y)`, then `x = y`.
5. If 0 belongs to a `set S`, and `n belongs to S` implies `s(n) belongs to S`;
   then `Every natural number belongs to S`.

The fifth axiom is called the **axiom of induction**. If `s(n) = n + 1`, this
axiom also works if `0, 1, 2, 3, 4, ..., n-1 belongs to S` implies `n belongs to S`.

## Divisibility
>A divisibility rule is a shorthand way of determining whether a given number is divisible by a fixed divisor without performing the division, usually by examining its digits.

We say `d` *divides* `n` and we write `d | n` if `n = cd` for some `c`, where `d, n, c, d` are integers. We also say that `n` is a *multiple* of `d`, `d` is a *divider* of `n`, or `d` is a factor of `n`.

### Properties:

`a, b, c, d, e, ..., n` are integers.

1. `n | n` (reflection)
2. `d | n` and `n | m` implies `d | m` (Transitivity)
3. `d | n` and `d | m` implies `d | ( an + bm )` (Linearity)
4. `d | n` implies `ad | an` (Multiplication)
5. `ad | an` and `a != 0` implies `d | n` (Simplication)
6. `1 | n`
7. `n | 0`
8. `0 | n` implies `n = 0`
9. `d | n` and `n != 0` implies `|d| <= |n|`
9. `d | n` and `n | d` implies `|d| = |n|`
10. `d | n` and `d != 0` implies `(n/d) | n`

*Division Theorem:* For any number `a` and `b != 0`, exists `q > 0` and `r` with `0 <= r < q`, such
that: `a = qb + r`

## Greatest Common Divisor

If an integer `d` divides two integers `a` and `b`, then `d` is called *Common Divisor* of `a` and `b`.

**Teorem:** Let `a` and `b` be integers, exists a common divisor `d` of `a` and `b`, such that: `d = ax + by`, where `x` and `y` are integers and every divisor of `a` and `b` divides `d`.

`d` is called the *Greatest Common Divisor* of `a` and `b` and is denoted as `gcd(a, b)` or just `(a, b)`. The *diofantic equation* `d = ax + by` is called **Bézout's identity**. If `(a, b) = 1` then `a` and `b` are *coprime*.

### Properties:

1. `(a, b) = (b ,a)` (Commutativity)
2. `(a, (b, c)) = ((a, b), c)` (Asociativity)
2. `(ac, bc) = |c|(a, b)` (Distributivity)
2. `(a, 1) = (1, a) = 1`, `(a, 0) = (0, a) = |a|`

**Euclides Lema:** if `a | bc` and `(a, b) = 1`, then `a | c`.

## Prime Numbers

An integer `n` is called **prime** if `n > 1` and its only divisors are 1 and
itself. If `n > 1` and is not prime, then is called 'composite'.

> 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151, 157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233, 239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317, 331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419, 421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499, 503, 509, 521, 523, 541, 547, 557, 563, 569, 571, 577, 587, 593, 599, 601, 607, 613, 617, 619, 631, 641, 643, 647, 653, 659, 661, 673, 677, 683, 691, 701, 709, 719, 727, 733, 739, 743, 751, 757, 761, 769, 773, 787, 797, 809, 811, 821, 823, 827, 829, 839, 853, 857, 859, 863, 877, 881, 883, 887, 907, 911, 919, 929, 937, 941, 947, 953, 967, 971, 977, 983, 991, 997, ...

1. Every number `n > 1` is either prime or is composed by the *product* of prime numbers.
2. There exists and infinity of prime numbers.
3. If a prime `p` doesn't divide `a`, then `(p,a) = 1`
4. If `p` is prime and `p | ab`, then `p | a` or `p | b`. In general if `p |
   a1 ... an`, then there is at least one `i` such that `p | ai`.

## Fundamental Theorem of arithmetic

Every integer `n > 1` can be represented as a product of prime factors in a
**unique way**. [proof] (https://en.wikipedia.org/wiki/Fundamental_theorem_of_arithmetic).

## Modulo operation

> the modulo operation finds the remainder after division of one number by
> another

Given `a` and `n`, `a mod n` is the remainder of the *Euclidean division* of
`a`
by `n`.

**Calculation:** from the *Division theorem* we have: `a mod n = a - [a / b]b`,
where `[x]` is the `floor` operator.

### Congruence Modulo

`a ≡ b (mod m)` (which is read as *'a' is congruent to 'b' module 'm'*) if `a mod m = b mod b`.

Let `a' ≡ a (mod m)` and `b' ≡ b (mod m)`:

1. `a ≡ b (mod m)` and `b ≡ c (mod m)`, then `a ≡ c (mod m)`
2. `a + b ≡ a' + b' (mod m)`
3. `a - b ≡ a' - b' (mod m)`
4. `ab ≡ a' b' (mod m)`
5. `a ≡ b (mod m)` implies `ka ≡ kb (mod m)`
6. If `k` and `m` are coprimes, then `ka ≡ kb (mod m)` implies `a ≡ b (mod m)`
7. `a ≡ b (mod m)` implies `a^n ≡ b^n (mod m)`
8. If `a ≡ b (mod m)`, then `P(a) ≡ P(b)`, for `P(x)` a *polynomial*.

## Euclidean Algorithm

**Theorem:** `(a, b) = (b, a mod b)`

*Proof:* Since `a mod b = a - kb` (see division theorem), It's enough to proof
that `(a, b) = (a - b, b)`. Let `d = (a, b)` and `e = (a - b, b)`, then `d | a - b`, so `d | e`
with `d <= e` (1). Since `e | a - b` and `e | b`, then `e | a` and we have `e <= d` (2). From (1) and (2)
we have `(a, b) = (a - b, b)`.

### Algorithm:

[[c++](codes/euclides.cpp)] [[clojure](codes/euclides.clj)]

```haskell
gcd a 0 = a
gcd a b = gcd b (mod a b)
```

### Extended algorithm:
The extended algorithm returns the value of `x` and `y` from the *Bézout's identity*: `ax + by = (a, b)`.

**Solution:** Given `x'` and `y'` from `x'b + y'(a mod b) = (b , a mod b) = (a, b)`,
then `x'b + y'( a - [a / b]b ) = (a , b)` (*Division theorem*) we end up with
`b(x' - y'[a/b]) + ay' = (a, b)`. We finally have `x = y'` and `y = ( x' - y'[a/b] )`

Code: [[c++](codes/euclides_extended.cpp)]

## Fermat's little theorem

**theorem:** `a^p ≡ a (mod p)` where `p` is *prime*.

*Proofs:* [wiki](https://en.wikipedia.org/wiki/Proofs_of_Fermat%27s_little_theorem)

When `a` is not divisible by `p`, then we can
divide both sides by `a`: `a^(p-1) ≡ 1 (mod p)`.

*Proof* of `a^(p-1) ≡ 1 (mod p)` with `p` prime and `a` not divisible by `p`:
Let `S = {1, 2, 3, ..., p - 1}` and `i` and `j` two elements of `S`, if `ia ≡ ja (mod p)`
then `i ≡ j (mod p)` and since `i, j < p` we have `i = j`. This means if `i !=
j` then `ia != ja (mod p)`, with this we have `1a x 2a x 3a ... (p-1)a ≡ 1 x 2
3 ... (p-1) (mod p)`, then `(p-1)! a^(p-1) ≡ (p-1)! (mod p)`. Since p is prime
`((p-1)!,p) = 1`. We end up with `a^(p-1) ≡ 1 (mod p)`.

Fermat's theorem is a variation of [Euler's totient theorem](https://en.wikipedia.org/wiki/Euler%27s_theorem)

## Modular exponentiation

**Problem:** Find `x < c` such that `a^b = x (mod c)` where `a, b, c` are integers.

**Algorithm:** If `b = 0`, then x = 1. If b is pair then let `x'` in `a^(b/2) ≡ x'
(mod c)` and `x ≡ x'^2 (mod c)`, otherwhise with `x' ≡ a^(b-1/2) (mod c)` we
have `x ≡ ax^2 (mod c)`.

Code: [[c++](codes/mod_exp.cpp)]

## Modular inverses

Is there a number `x` for some `a, n` both integers, such that: `ax ≡ 1 (mod n)`? We would call this number x the **inverse of** `a` **modulo** `n`, and this number exists when `a` and `n` are *coprimes*.

`a` and `n` are coprimes since `ax ≡ 1 (mod n)` implies `n | ax - 1`. The
reverse is prooved by the **Bézout's identity**: `ax + ny = 1` so `ax + ny ≡
1 (mod n)`, then `ax ≡ 1 (mod n)`. With this, `x` can be found by using the **Extended Euclidean algorithm**.

If `n` is prime, We can find the inverse by considering the **The Fermat's little
theorem**: `a ^ (n-1) ≡ 1 (mod n)`, We have `aa^(n-2) ≡ 1 (mod n)`; So `x =
a^(n-2)`. Here we can use the **Modular Exponentiation**.
