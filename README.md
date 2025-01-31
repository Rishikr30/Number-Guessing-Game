# Number-Guessing-Game 
# Number Guessing Game 🎯

## About the Project  
The **Number Guessing Game** is a simple C program where the player tries to guess a randomly generated number.  
With each guess, the program provides hints such as:  
- `"Lower number please"` if the guess is too high.  
- `"Higher number please"` if the guess is too low.  
- When the correct number is guessed, it displays the number of attempts taken.  

This project is great for beginners learning **C programming**, **loops**, and **random number generation**.

## Features  
✅ Generates a random number between 1 and 100.  
✅ Gives hints based on user input.  
✅ Keeps track of the number of attempts.  
✅ Uses a loop for repeated guessing until the correct number is found.  

## How to Run the Project  
### 1️⃣ Clone the Repository  
```sh
git clone https://github.com/Rishikr30/Number-Guessing-Game.git
cd Number-Guessing-Game

2️⃣ Compile the Code

Make sure you have a C compiler installed (e.g., GCC). Then, compile the program using:

gcc guessing_game.c -o guessing_game

3️⃣ Run the Program

./guessing_game

Code Explanation

srand(time(0));          // Seeds the random number generator
number = rand() % 100 + 1; // Generates a random number between 1 and 100

The program uses rand() to generate a random number.

The loop continues until the user guesses the correct number.

The number of attempts is counted and displayed at the end.


Example Output

Welcome to the Number Guessing Game!
I have chosen a number between 1 and 100. Can you guess it?
Enter your guess: 50
Higher number please.
Enter your guess: 75
Lower number please.
Enter your guess: 63
Congratulations! You guessed the correct number in 3 attempts.

Contributing

Feel free to fork this repository and enhance the project!
Some ideas for improvement:
