# Number Guessing Game in C

A fun and interactive command-line number guessing game where players try to guess a randomly generated number within a limited number of attempts.

## 🎮 Features

- 🎯 Random number generation between 1 and 100
- 🔢 Input validation for numbers only
- 🎨 Color-coded feedback (red for too high, blue for too low)
- 🔥 Proximity hints ("getting warmer" or "very close")
- 🏆 Attempt counter with remaining attempts
- 🎉 Victory message with number of attempts
- 💔 Game over message with the correct number
- 🛡️ Protection against invalid inputs

## 🚀 Quick Start

1. **Clone the repository**

   ```bash
   git clone https://github.com/yourusername/number-guessing-game.git
   cd number-guessing-game
   ```

2. **Compile the game**

   ```bash
   gcc -o guess main.c
   ```

3. **Run the game**

   ```bash
   ./guess
   ```

## 🎯 How to Play

1. The game will generate a random number between 1 and 100.
2. You have 10 attempts to guess the number.
3. After each guess, the game will tell you if your guess was too high or too low.
4. You'll get hints when you're getting close to the number.
5. Try to guess the number in as few attempts as possible!

## 🎲 Example Gameplay

```bash
=== NUMBER GUESSING GAME ===

I'm thinking of a number between 1 and 100.
Can you guess what it is? You have 10 attempts.

Attempt 1/10 - Enter your guess: 50
Too high! (You're getting warmer!)

Attempt 2/10 - Enter your guess: 25
Too low! 

Attempt 3/10 - Enter your guess: 37
Too low! (You're very close!)

CONGRATULATIONS!
You guessed the number in 4 attempts!

Thanks for playing!
```

## 🛠️ Requirements

- GCC or any C compiler
- A terminal that supports ANSI color codes (most modern terminals do)

## 📝 License

This project is open source and available under the [MIT License](LICENSE).

## 🤝 Contributing

Contributions are welcome! Feel free to submit issues or pull requests.
