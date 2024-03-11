# Little Giant library


Little Giant is library written in C for big integers computation.
This bignum structure handle, for now, natural and positive integers only.


# Roadmap

## TODO 

- implementation of the utility functions for little-giant data structure
- create a test branch (googleTest or simple test in C)

The, start implementing arithmetical algorithms  

## Algorithms
There is a list, still not complete, about algorithms I want to implements:

- multiplication: Karatsuba, Toom-Cook
- modular multiplication: Montgomery multiplication paper by Joppe W. Bos, Thorsten Kleinjung and Dan Page
- exponentiation: binary
- modular exponentiation: binary
- binary GCD: Fast-GB by Damien Stehlé and Paul Zimmermann
- primality test: Miller-Rabin, Lucas-Lehmer

Much more incoming.


# Listing

### Structure
- s1: Little_Giant alias LG

### Constants
- c1: output constants
    - c1.1: positive return
    - c1.2: negative return (error)

- c2: initial size of the lg_number

### Functions

- f1: Implementation of Little Giant bignum type
    - f1.1: init_littleg
    - f1.2: set_littleg_ul
    - f1.3: set_littleg_lg
    - f1.4: set_littleg_zero