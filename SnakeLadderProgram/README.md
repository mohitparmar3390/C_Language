### 🐍 Snake Ladder Game

A simple **Snake and Ladder Game developed in C Language** for practicing programming logic and core C programming concepts.

The project implements a basic game board, dice rolling, player movement, snakes, and ladders.

## 🚧 Project Status

**Work in Progress**

### Currently Implemented

* 🎲 Six-sided dice rolling
* 👥 Two-player positions
* 🐍 Snake positions
* 🪜 Ladder positions
* 🚶 Player movement logic
* 🎯 Board position handling
* 🏆 Basic winning-position validation
* 🎮 Snake and Ladder board display logic

### 🔨 Still Under Development

* Complete game loop
* Player turn handling
* Winning condition
* User input for rolling the dice
* Displaying game progress after every turn

## 🛠️ Concepts Used

This project demonstrates the following C programming concepts:

* Functions
* Arrays
* Loops
* Conditional Statements
* Global Variables
* `rand()` for random number generation
* `srand()` for random seed generation
* `time()` from `time.h`
* Function parameters and return values
* Basic game logic

## 🎮 Game Rules

* The game is played by **two players**.
* Each player starts from position `0`.
* Players roll a six-sided dice.
* The dice value determines how many positions the player moves.
* 🪜 Landing on a ladder moves the player upward.
* 🐍 Landing on a snake moves the player downward.
* A player cannot move beyond position `100`.
* The first player to reach position `100` wins.

## 🐍 Snakes and 🪜 Ladders

| Position |         Effect |
| -------: | -------------: |
|        6 | 🪜 Ladder → 46 |
|       23 |  🐍 Snake → 13 |
|       45 |  🐍 Snake → 38 |
|       61 |  🐍 Snake → 43 |
|       65 |  🐍 Snake → 57 |
|       77 | 🪜 Ladder → 82 |
|       98 |  🐍 Snake → 88 |

## 📂 Project Structure

```text
Snake-Ladder/
│
├── snakeandladder.c
└── README.md
```

## ▶️ How to Run

### 1. Clone the Repository

```bash
git clone <your-repository-url>
```

### 2. Open the Project Folder

```bash
cd Snake-Ladder
```

### 3. Compile the Program

Using GCC:

```bash
gcc snakeandladder.c -o snakeandladder
```

### 4. Run the Program

#### Windows

```bash
snakeandladder.exe
```

or

```bash
.\snakeandladder.exe
```

## 💻 Example

```text
Snake and Ladder Game

#P1    2    3    4    5    6    ...
...
```

> The complete interactive game loop is currently under development.

## 📚 Learning Purpose

This project was created to strengthen understanding of:

* C programming fundamentals
* Arrays and indexing
* Functions
* Loops
* Random number generation
* Game-state management
* Basic problem-solving and programming logic

## 🚀 Future Improvements

* Add complete two-player game loop
* Add dice-roll input
* Display current player
* Add proper winning message
* Add replay option
* Improve board UI
* Add sound effects
* Add support for more players
* Improve code structure by separating game logic into functions

## 👨‍💻 Author

**Mohit Parmar**
