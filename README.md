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

If an integer `d` divides two integers a and b, then d is called *Common Divisor* of a and b.

### Teorem:
    Let `a` and `b` be integers, exists a common divisor `d` of `a` and `b`,
    such that: `d = ax + by`, where `x` and `y` are integers and every divisor of
    `a` and `b` divides `d`.
