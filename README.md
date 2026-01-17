# Calculator

Short Description 💬
-----------------
A small, console-based calculator application. Implemented in C++, it provides a simple interactive menu to perform common arithmetic operations: addition, subtraction, multiplication, division, integer modulo, and squaring. The program is designed as a lightweight demonstration of basic I/O, control flow, and simple input checks in C++.

Announcement 📢
------------
This project is written using C++17.

Features ✅
--------
- Addition (supports floating point numbers) ➕  
- Subtraction (supports floating point numbers) ➖  
- Multiplication (current implementation disallows negative inputs) ✖️  
- Division (checks for division by zero; current implementation disallows negative inputs) ➗  
- Modulo (integer modulo, positive integers only) 🔁  
- Squaring a number (works with floating point numbers) ✳️

Example usage / sample session 💡
------------------------------
Below is an example interaction with the program (user input shown after prompts):

```
[1] - Addition
[2] - Subtraction
[3] - Multiplication
[4] - Division
[5] - Get Mod
[6] - Squaring
[0] - Exit
Choose: 1
Enter the first number: 12.5
Enter the second number: 3.75
Sum of numbers: 16.25

[1] - Addition
[2] - Subtraction
[3] - Multiplication
[4] - Division
[5] - Get Mod
[6] - Squaring
[0] - Exit
Choose: 4
Enter the first number: 9
Enter the second number: 3
Division of numbers: 3

[1] - Addition
[2] - Subtraction
[3] - Multiplication
[4] - Division
[5] - Get Mod
[6] - Squaring
[0] - Exit
Choose: 5
Enter the first number: 10
Enter the second number: 3
Mod of the numbers: 1

[1] - Addition
[2] - Subtraction
[3] - Multiplication
[4] - Division
[5] - Get Mod
[6] - Squaring
[0] - Exit
Choose: 6
Enter a number: 4
Square of the number: 16
```

Notes and limitations ⚠️
---------------------
- The current implementation uses global variables and has limited input validation. Non-numeric input may break the program.
- The current code rejects negative numbers for multiplication and division.
- Modulo expects integers and positive operands; the divisor must not be zero.
- Consider adding robust input parsing, removing global state, and relaxing negative-number restrictions for wider usability.

Author 👤
------
GitHub: @wdemirkoll

📅 January 2026
