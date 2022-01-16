# Exceptional control flow: exceptions and processes

- Altering the control flow
  - upto now: two mechanisms for changing control flow:
    - jumps and branches
    - call and return
      React to change in **program state**
- Insufficient for a useful system

  - Difficult to react to changes in **_system state_**
    - Data arrives from a disk or a network adapter
    - Instructin divides by zero
    - User hits Ctrl-C at the keyboard
    - System timer expires

- Asynchronous Exceptions (Interrupts)

  - Caused by events external to the processor
    - Indicated by setting the processot's interrupt pin
    - Handler returns to next instructino
  - Examples
    - Timer interrupt
      - Every few ms, an external timer chip triggers an interrupt.
      - Used by the kernel to take back control from user programs.

- Summary
  - Exceptions
    - Events that require nonstandard control flow
    - Generated externally (interrupts) or internally (traps and faults)
  - Processes
    - At any given time, system has multiple active processes
    - Only one can execute at a time on a single core, though
    - Each process appears to have total control of process + private memory space
  - Spawnging processes
    - Call **fork**
    - One call, two returns
  - Process completion
    - Call **_exit_**
    - One call, no return
  - Reaping and waiting for processes
    - Call **wait** or **waitpid**
  - Loading and running programs
    - Call **execve** (or variant)
    - One call, (normally) no return
