### Machine Level Programming V Advanced

- X86-64 Linux memeory layout

  - Stack
    - Runtime stack(8 MB limit)
    - E.G., local variables
  - Heap
    - Dynamically allocated as needed
    - When call malloc(), calloc(), new()
  - Data
    - Statically allocated data
    - E.g., global vars, **_static_** vars, string constants
  - Text /Shared Libraries
    - Executable machine instructions
    - Read-only

- Summary of compound types in c

  - Arrays
    - Contiguous allocation of memory
    - Aligned to satisfy every element's alignmentrequirement
    - Pointer to first element
    - No bounds checking
  - Structure

    - Allocate bytes in order declared
    - Pad in middle and at end to satisfy alignment

  - Unions
    - Overlay declarations
    - Way to circumvent type system

# Thwarting Buffer Overflow Attacks

- Stack Randomization
  - Address-Space Layout Randomization(ASLR)
- Stack Corruption Detection
- Limiting Executable Code Regions
