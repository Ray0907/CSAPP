# Program Optimization

- Generally Useful Optimizations
  - Optimizations that you or the compiler should do regardless of processor / compiler
  - Code Motion
    - Reduce frequency with which computation performed
      - If it will always produce same result
      - Especially moving code out of loop
- Exploiting Instruction-Level Parallelism

  - Need general understanding of modern processor design
    - Hardware can execute multiple instructions in parallel
  - Performance limited by data dependencies
  - Simple transformations can yiled dramatic performance improvement
    - Compilers ofen cannot make these transformations
    - Lack of associativity and distributivity in floating-point arithmetic

- Getting High Performance
  - Good compiler and flags
  - Don't do anything stupid
    - Watch out for hidden algorithmic inefficiencies
    - Write compiler-friendly code
      - watch out for optimization blockers: procedure calls & memory references
    - Look carefully at innermost loops (where most work is done)
  - Tune code for machine
    - Exploit instruction-level parallelism
    - Avoid unpredictable branches
    - Make code cache friendly (Covered later in course)
