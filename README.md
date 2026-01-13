# Alternating Prime-Composite Generator

This project implements a stochastic number generator in C that enforces a specific **Number Theory Pattern**. It generates a sequence that alternates strictly between **Prime Numbers** and **Non-Prime (Composite) Numbers**.

## ⚙️ Algorithm Logic

The generator operates in the range $[1, 100]$ and uses a state machine approach to determine the requirement for the next number.

1.  **State 1 (Prime Requirement):** * Generates random numbers until a Prime is found.
    * Uses Trial Division to verify primality ($O(\sqrt{n})$).
2.  **State 0 (Non-Prime Requirement):** * Once a Prime is printed, the state toggles.
    * The loop now searches for a Non-Prime number (Composite or 1).
3.  **Loop:** This cycle repeats until $N$ integers are generated.

### Sequence Example
`Input N: 4`
* **1st:** Random Prime $\to$ `7`
* **2nd:** Random Non-Prime $\to$ `15`
* **3rd:** Random Prime $\to$ `23`
* **4th:** Random Non-Prime $\to$ `100`

## 🚀 Usage

1.  Compile the code:
    ```bash
    gcc main.c -o prime_seq
    ```
2.  Run the executable:
    ```bash
    ./prime_seq
    ```
3.  Enter the sequence length ($N$).

---
*This repository demonstrates modular arithmetic, primality testing, and control flow in C.*
