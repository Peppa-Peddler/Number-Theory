# Number Theory
> The branch of mathematics that deals with the properties and relationships of numbers, especially the positive integers.

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

```
    2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71,
    73, 79, 83, 89, 97, 101, 103, 107, 109, 113, 127, 131, 137, 139, 149, 151,
    157, 163, 167, 173, 179, 181, 191, 193, 197, 199, 211, 223, 227, 229, 233,
    239, 241, 251, 257, 263, 269, 271, 277, 281, 283, 293, 307, 311, 313, 317,
    331, 337, 347, 349, 353, 359, 367, 373, 379, 383, 389, 397, 401, 409, 419,
    421, 431, 433, 439, 443, 449, 457, 461, 463, 467, 479, 487, 491, 499, 503,
    509, 521, 523, 541, 547, 557, 563, 569, 571, 577, 587, 593, 599, 601, 607,
    613, 617, 619, 631, 641, 643, 647, 653, 659, 661, 673, 677, 683, 691, 701,
    709, 719, 727, 733, 739, 743, 751, 757, 761, 769, 773, 787, 797, 809, 811,
    821, 823, 827, 829, 839, 853, 857, 859, 863, 877, 881, 883, 887, 907, 911,
    919, 929, 937, 941, 947, 953, 967, 971, 977, 983, 991, 997, ...
```

1. Every number `n > 1` is either prime or is composed by the *product* of prime numbers.
2. There exists and infinity of prime numbers.
3. If a prime `p` doesn't divide `a`, then `(p,a) = 1`
4. If `p` is prime and `p | ab`, then `p | a` or `p | b`. In general if `p |
   a1 ... an`, then there is at lease one i such that `p | ai`.
