# 15-number-puzzle-game

## ES1101: Introduction to Programming

## Project Description

This project is a command-line C program that implements the classic "Arrange Puzzle" (1 to 15), also known as the 15-puzzle game. The primary objective is to arrange 15 numbered tiles in sequential order within a 4x4 grid by sliding them into the single empty space, or "hole".

The game features include puzzle randomization, capturing user input for moves (left, down, right, up, quit), validating moves, and declaring a win condition when all numbers are correctly ordered.

## Technologies Used

*   **Language:** C Programming Language
*   **Compiler (Example):** `g++`

To compile and run this project, you need a C compiler installed on your system.

## Usage Instructions

When the game starts, a randomized 4x4 matrix will be displayed. Follow the prompts to move the "hole" (represented by the number 16 in the code logic, but appearing as a blank space in the output):

| Key | Action |
| :-- | :--- |
| `'l'` or `'1'` | Move the hole to the **Left** |
| `'d'` | Move the hole **Down** |
| `'r'` | Move the hole to the **Right** |
| `'u'` | Move the hole **Up** |
| `'q'` | **Quit** the game |

If you attempt an invalid move (e.g., moving left when the hole is on the far left edge), the console will print `"Invalid move"`. Upon successful completion of the puzzle, a "CONGRATULATIONS! YOU WON THE GAME!!" message is displayed.

## Core Functions

The program's functionality is organized into several key functions:

*   `swap()`: A utility function for interchanging the values of two elements.
*   `printArray()`: Used internally to print the linear array of elements.
*   `printMatrix()`: Prints the current state of the 4x4 game board in a readable matrix format.
*   `randomize()`: Shuffles the array of numbers (1-16) using the computer's internal clock (`time(NULL)`) to ensure a unique game every time.


