# Diamond Pattern Generator

This project contains a C program that generates a diamond pattern based on a user-provided number. Unlike traditional implementations that use nested loops and have higher complexity, this example uses a single loop with a matrix-like approach to achieve the same result.

## How It Works

The program prompts the user to enter a number `n`, which determines the size of the diamond. The maximum width of the diamond is calculated as `2 * n - 1`. The program then iterates through each cell of a virtual matrix of size `max_width * max_width` using a single loop.

For each cell, the program calculates:
- The current row and column.
- The absolute distance to the middle line.

Based on these calculations, the program decides whether to print a number or a space, and whether the current position is in the top or bottom half of the diamond.

