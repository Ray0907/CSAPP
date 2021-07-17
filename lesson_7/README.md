# Machine-Level Programming III: Procedures

- Register saving convention
  - caller saved
    - caller saves temporary values in its frame before the call
  - callee saved
    - callee saves temporary values in its frame before using
    - callee restores them before returning to caller
- X86-64 **_Register_**

  - %rax
    - Return value
    - also caller-saved
    - can be modified by procedure
  - %rdi, ...., %r9
    - Arguments
    - a.k.a caller-saved
    - can be modified by procedure
  - %r10, %r11
    - caller-saved
    - can be modified by procedure
  - %rbx, %r12, %r13, %r14
    - callee-saved
    - callee must save & restore
  - %rbp
    - callee-saved
    - callee must save & restore
    - may be used as frame pointer
    - can mix & match
  - %rsp
    - special form of callee save
    - restored to original value upon exit from procedure

- X86-64 Procedure summary

  - important points

    - stack is the right data structure for procedure call / return
    - if P calls Q then Q returns before P

  - Recursion ( & mutual recursion) handled by normal calling converntions
    - can safely store values in localstack frame and in callee-saved registers
    - put function arguments at top of stack
    - result return in %rax
  - Pointers are addresses of values
    - on stack or global
