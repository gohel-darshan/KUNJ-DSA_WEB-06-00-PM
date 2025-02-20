
// // ( 2 player rock , paper , scissors game )

// #include <iostream>
// #include <random>
// using namespace std;

// class game{

// public:
// string player1 ;
// string player2 ;
// int choo = 0;

//     void instruction(){
//         cout<<endl<<"------------- WElCOME TO ROCK, PAPER, SCISSORS GAME -------------"<<endl<<endl;
//         cout<<"----[ RULES ]----"<<endl;
//         cout<<"1. ROCK beats SCISSORS"<<endl;
//         cout<<"2. PAPER beats ROCK"<<endl;
//         cout<<"3. SCISSORS beats PAPER"<<endl<<endl<<"-----------------------------------------------------------------"<<endl<<endl;
//         cout<<"PLAYER 1 & PLAYER 2 "<<endl<<endl;
//         cout<<"----------------- PLAY WITH ? -----------------"<<endl;
//         cout<<"CHOOSE : 1. 2 player "<<endl;
//         cout<<"         2. play with AI"<<endl<<endl; 
//         cout<<"( Who to play with? ) Write number here : ";
//         cin>>choo;
//         cout<<endl<<endl;

//         if (choo == 1)
//         {
//           choose();
//         }
//         else if(choo == 2){
//           ai();
//         }
//         else{
//          cout<<"Type number correctly example : for play with AI type 2"<<endl;
//         }
        
        
//     }

//     void choose(){

//         cout<<"CHOOSE : rock , paper , scissors"<<endl;
//         cout<<"PLAYER 1 = ";
//         cin>>player1;
        
//         cout<<endl<<"CHOOSE : rock , paper , scissors"<<endl;
//         cout<<"PLAYER 2 = ";
//         cin>>player2;
//     }

//     void ai(){

//         cout<<"CHOOSE : rock , paper , scissors"<<endl;
//         cout<<"PLAYER 1 = ";
//         cin>>player1;

//          random_device rd;  
//          mt19937 gen(rd()); 

//          uniform_int_distribution<> dis(1, 3);

//          int random_number = dis(gen);

//          if (random_number==1)
//          {
//             player2="rock";
//             cout<<"player 2 (AI) = rock"<<endl<<endl;
//             cout<<"_______playing with AI_______"<<endl;
//          }
//          if (random_number==2)
//          {
//             player2="paper";
//             cout<<"player 2 (AI) = paper"<<endl<<endl;
//             cout<<"_______playing with AI_______"<<endl;
            
//          }
//          if (random_number==3)
//          {
//             player2="scissors";
//             cout<<"player 2 (AI) = scissors"<<endl<<endl;
//             cout<<"_______playing with AI_______"<<endl;
//          }
//     }

//     void condition(){
        
//         if(player1 == "rock" && player2 == "rock" ||
//            player1 == "paper" && player2 == "paper" ||
//            player1 == "scissors" && player2 == "scissors" ){

//             cout<<endl<<"----- DRAW -----"<<endl;

//         }
       
//         if(player1 == "rock" && player2 == "paper" ||
//            player1 == "rock" && player2 == "scissors" ||
//            player1 == "paper" && player2 == "scissors" ||
//            player1 == "paper" && player2 == "rock" ||
//            player1 == "scissors" && player2 == "paper" ||
//            player1 == "scissors" && player2 == "rock" 
//            ){
//         }
//         else{
//            cout<<endl<<"----- Please enter correct words ! -----"<<endl;
//         }
  
//         if(player1 == "rock" && player2 == "paper"){
//            cout<<endl<<"----- PLAYER 2 WINS -----"<<endl;
//         }
//         else if(player1 == "scissors" && player2 == "rock"){
//            cout<<endl<<"----- PLAYER 2 WINS -----"<<endl;
//         }
//         else if(player1 == "paper" && player2 == "scissors"){
//            cout<<endl<<"----- PLAYER 2 WINS -----"<<endl;
//         }
//         else if(player1 == "rock" && player2 == "scissors"){
//            cout<<endl<<"----- PLAYER 1 WINS -----"<<endl;
//         }
//         else if(player1 == "paper" && player2 == "rock"){
//            cout<<endl<<"----- PLAYER 1 WINS -----"<<endl;
//         }
//         else if(player1 == "scissors" && player2 == "paper"){
//            cout<<endl<<"----- PLAYER 1 WINS -----"<<endl;
//         }   
//     }
// };

// int main() {
 
//  game obj1;
//  obj1.instruction();
//  obj1.condition();
 
// }

// #include <iostream>
// #include <vector>

// using namespace std;

// // Function to print the game board
// void printBoard(const vector<vector<char>>& board) {
//     cout << "Tic-Tac-Toe Board:\n";
//     for (int i = 0; i < 3; ++i) {
//         for (int j = 0; j < 3; ++j) {
//             cout << board[i][j] << " ";
//         }
//         cout << endl;
//     }
// }

// // Function to check if a player has won
// bool checkWin(const vector<vector<char>>& board, char player) {
//     // Check rows and columns
//     for (int i = 0; i < 3; ++i) {
//         if ((board[i][0] == player && board[i][1] == player && board[i][2] == player) ||
//             (board[0][i] == player && board[1][i] == player && board[2][i] == player)) {
//             return true;
//         }
//     }
//     // Check diagonals
//     if ((board[0][0] == player && board[1][1] == player && board[2][2] == player) ||
//         (board[0][2] == player && board[1][1] == player && board[2][0] == player)) {
//         return true;
//     }
//     return false;
// }

// // Function to check if the board is full
// bool isBoardFull(const vector<vector<char>>& board) {
//     for (int i = 0; i < 3; ++i) {
//         for (int j = 0; j < 3; ++j) {
//             if (board[i][j] == ' ') {
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// int main() {
//     // Initialize the board with empty spaces
//     vector<vector<char>> board(3, vector<char>(3, ' '));

//     // Player turns (X goes first)
//     char currentPlayer = 'X';
//     int row, col;

//     while (true) {
//         // Print the board
//         printBoard(board);

//         // Get player input
//         cout << "Player " << currentPlayer << ", enter row and column (0-2): ";
//         cin >> row >> col;

//         // Check if the input is valid
//         if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
//             cout << "Invalid move. Try again.\n";
//             continue;
//         }

//         // Place the player's move on the board
//         board[row][col] = currentPlayer;

//         // Check if the current player won
//         if (checkWin(board, currentPlayer)) {
//             printBoard(board);
//             cout << "Player " << currentPlayer << " wins!\n";
//             break;
//         }

//         // Check if the board is full (draw)
//         if (isBoardFull(board)) {
//             printBoard(board);
//             cout << "It's a draw!\n";
//             break;
//         }

//         // Switch to the next player
//         currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
//     }

//     return 0;
// }


// 

// #include <iostream>
// #include <vector>
// #include <cstdlib>
// #include <ctime>
// #include <conio.h>
// #include <windows.h>

// using namespace std;

// // Define the size of the game board
// const int width = 30;
// const int height = 20;

// // Define the board and snake
// char board[height][width];
// struct Snake {
//     int x, y;
//     Snake(int x_, int y_) : x(x_), y(y_) {}
// };
// vector<Snake> snake;

// // Food coordinates
// int foodX, foodY;
// bool foodEaten = false;

// // Direction of the snake
// enum Direction { UP, DOWN, LEFT, RIGHT };
// Direction dir = RIGHT;

// // Function to setup the board
// void setup() {
//     // Initialize the board
//     for (int i = 0; i < height; ++i) {
//         for (int j = 0; j < width; ++j) {
//             if (i == 0 || i == height - 1 || j == 0 || j == width - 1)
//                 board[i][j] = '#';  // Border
//             else
//                 board[i][j] = ' ';  // Empty space
//         }
//     }

//     // Set up initial snake position
//     snake.push_back(Snake(width / 2, height / 2));

//     // Randomly place food on the board
//     srand(time(0));
//     foodX = rand() % (width - 2) + 1;
//     foodY = rand() % (height - 2) + 1;
//     foodEaten = false;
// }

// // Function to draw the game board
// void draw() {
//     system("cls");  // Clear the screen (works on Windows)

//     // Draw the board
//     for (int i = 0; i < height; ++i) {
//         for (int j = 0; j < width; ++j) {
//             if (i == snake[0].y && j == snake[0].x)
//                 cout << "O";  // Snake head
//             else {
//                 bool isBodyPart = false;
//                 for (int k = 1; k < snake.size(); ++k) {
//                     if (i == snake[k].y && j == snake[k].x) {
//                         cout << "o";  // Snake body
//                         isBodyPart = true;
//                         break;
//                     }
//                 }
//                 if (!isBodyPart) {
//                     if (i == foodY && j == foodX)
//                         cout << "*";  // Food
//                     else
//                         cout << board[i][j];  // Empty space or border
//                 }
//             }
//         }
//         cout << endl;
//     }
// }

// // Function to take user input for the direction
// void input() {
//     if (_kbhit()) {
//         char ch = _getch();
//         if (ch == 'w' || ch == 'W')
//             dir = UP;
//         else if (ch == 's' || ch == 'S')
//             dir = DOWN;
//         else if (ch == 'a' || ch == 'A')
//             dir = LEFT;
//         else if (ch == 'd' || ch == 'D')
//             dir = RIGHT;
//     }
// }

// // Function to move the snake
// void move() {
//     int prevX = snake[0].x;
//     int prevY = snake[0].y;
//     int prev2X, prev2Y;
//     snake[0].x = (dir == LEFT) ? prevX - 1 : (dir == RIGHT) ? prevX + 1 : prevX;
//     snake[0].y = (dir == UP) ? prevY - 1 : (dir == DOWN) ? prevY + 1 : prevY;

//     for (int i = 1; i < snake.size(); ++i) {
//         prev2X = snake[i].x;
//         prev2Y = snake[i].y;
//         snake[i].x = prevX;
//         snake[i].y = prevY;
//         prevX = prev2X;
//         prevY = prev2Y;
//     }

//     // Check if the snake eats food
//     if (snake[0].x == foodX && snake[0].y == foodY) {
//         foodEaten = true;
//         snake.push_back(Snake(prevX, prevY));  // Add new segment to snake
//         foodX = rand() % (width - 2) + 1;
//         foodY = rand() % (height - 2) + 1;
//     }
// }

// // Function to check if the game is over
// bool gameOver() {
//     // Check if snake hits the wall
//     if (snake[0].x == 0 || snake[0].x == width - 1 || snake[0].y == 0 || snake[0].y == height - 1)
//         return true;

//     // Check if snake hits itself
//     for (int i = 1; i < snake.size(); ++i) {
//         if (snake[i].x == snake[0].x && snake[i].y == snake[0].y)
//             return true;
//     }

//     return false;
// }

// int main() {
//     setup();

//     while (!gameOver()) {
//         draw();
//         input();
//         move();

//         if (foodEaten) {
//             foodEaten = false;  // Reset food eaten flag
//         }

//         Sleep(100);  // Control the speed of the snake's movement
//     }

//     cout << "Game Over! Press any key to exit." << endl;
//     _getch();  // Wait for user input before exiting

//     return 0;
// }


// #include <iostream>
// #include <cstdlib>
// #include <ctime>
// #include <vector>
// #include <algorithm>

// using namespace std;

// class GuessTheNumberGame {
// public:
//     GuessTheNumberGame(int minRange, int maxRange, int maxAttempts) :
//         minRange(minRange), maxRange(maxRange), maxAttempts(maxAttempts) {
//         // Initialize random seed
//         srand(time(0));
//         // Generate a secret number
//         secretNumber = rand() % (maxRange - minRange + 1) + minRange;
//         // Generate obstacles
//         generateObstacles();
//     }

//     void play() {
//         int attemptsLeft = maxAttempts;
//         int guess;
        
//         cout << "Welcome to the Guess the Number with Obstacles game!\n";
//         cout << "I have picked a secret number between " << minRange << " and " << maxRange << ".\n";
//         cout << "Avoid the misleading numbers and guess the secret number to win.\n";
        
//         while (attemptsLeft > 0) {
//             cout << "\nYou have " << attemptsLeft << " attempts left.\n";
//             cout << "Enter your guess: ";
//             cin >> guess;

//             // Check if guess is valid
//             if (guess < minRange || guess > maxRange) {
//                 cout << "Invalid guess. Please pick a number between " << minRange << " and " << maxRange << ".\n";
//                 continue;
//             }

//             // Check if the guess is a misleading number
//             if (find(obstacles.begin(), obstacles.end(), guess) != obstacles.end()) {
//                 cout << "Oops! You guessed a misleading number. You lose an attempt.\n";
//                 attemptsLeft--;
//                 continue;
//             }

//             // Check if the guess is correct
//             if (guess == secretNumber) {
//                 cout << "Congratulations! You've guessed the correct number: " << secretNumber << "!\n";
//                 break;
//             }

//             // Give a hint
//             if (guess < secretNumber)
//                 cout << "The secret number is higher.\n";
//             else
//                 cout << "The secret number is lower.\n";

//             attemptsLeft--;
//         }

//         if (attemptsLeft == 0) {
//             cout << "\nGame over! You've run out of attempts. The secret number was " << secretNumber << ".\n";
//         }
//     }

// private:
//     int secretNumber;
//     int minRange;
//     int maxRange;
//     int maxAttempts;
//     vector<int> obstacles;

//     // Function to generate obstacles
//     void generateObstacles() {
//         int numObstacles = (maxRange - minRange) / 10;  // Generate obstacles based on range size
//         while (obstacles.size() < numObstacles) {
//             int obstacle = rand() % (maxRange - minRange + 1) + minRange;
//             if (obstacle != secretNumber && find(obstacles.begin(), obstacles.end(), obstacle) == obstacles.end()) {
//                 obstacles.push_back(obstacle);
//             }
//         }
//     }
// };

// int main() {
//     int minRange = 1;
//     int maxRange = 100;
//     int maxAttempts = 10;

//     GuessTheNumberGame game(minRange, maxRange, maxAttempts);
//     game.play();

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <ctime>
// #include <cstdlib>
// #include <conio.h>

// using namespace std;

// // Define the size of the maze
// const int WIDTH = 20;
// const int HEIGHT = 10;

// // Maze grid
// char maze[HEIGHT][WIDTH];

// // Player position
// int playerX = 1;
// int playerY = 1;

// // Goal position
// int goalX = WIDTH - 2;
// int goalY = HEIGHT - 2;

// // Directions for player movement
// enum Direction { UP, DOWN, LEFT, RIGHT };

// // Function to initialize the maze with walls, player, and goal
// void initializeMaze() {
//     for (int i = 0; i < HEIGHT; ++i) {
//         for (int j = 0; j < WIDTH; ++j) {
//             // Create the border walls
//             if (i == 0 || i == HEIGHT - 1 || j == 0 || j == WIDTH - 1) {
//                 maze[i][j] = '#';
//             } else {
//                 maze[i][j] = ' '; // Empty space
//             }
//         }
//     }

//     // Set the player's initial position
//     maze[playerY][playerX] = 'P';

//     // Set the goal position
//     maze[goalY][goalX] = 'G';

//     // Add some random obstacles to the maze
//     srand(time(0));
//     for (int i = 0; i < 15; ++i) {
//         int obstacleX = rand() % (WIDTH - 2) + 1;
//         int obstacleY = rand() % (HEIGHT - 2) + 1;
//         if (maze[obstacleY][obstacleX] == ' ') {
//             maze[obstacleY][obstacleX] = '#';
//         }
//     }
// }

// // Function to display the maze
// void displayMaze() {
//     system("cls"); // Clear screen
//     for (int i = 0; i < HEIGHT; ++i) {
//         for (int j = 0; j < WIDTH; ++j) {
//             cout << maze[i][j];
//         }
//         cout << endl;
//     }
// }

// // Function to move the player in the maze
// bool movePlayer(Direction dir) {
//     int newX = playerX;
//     int newY = playerY;

//     // Calculate new position based on direction
//     switch (dir) {
//         case UP:    newY--; break;
//         case DOWN:  newY++; break;
//         case LEFT:  newX--; break;
//         case RIGHT: newX++; break;
//     }

//     // Check if the new position is within bounds and not a wall
//     if (newX >= 1 && newX < WIDTH - 1 && newY >= 1 && newY < HEIGHT - 1 && maze[newY][newX] != '#') {
//         // Update player position
//         maze[playerY][playerX] = ' ';
//         playerX = newX;
//         playerY = newY;
//         maze[playerY][playerX] = 'P';
//         return true;
//     }

//     return false; // Invalid move (blocked by wall or out of bounds)
// }

// // Function to check if the player has reached the goal
// bool hasReachedGoal() {
//     return playerX == goalX && playerY == goalY;
// }

// // Main game loop
// int main() {
//     initializeMaze();

//     while (true) {
//         displayMaze();

//         // Check if the player has reached the goal
//         if (hasReachedGoal()) {
//             cout << "Congratulations! You've reached the goal!" << endl;
//             break;
//         }

//         // Get player input
//         char move = _getch();
//         switch (move) {
//             case 'w': case 'W': movePlayer(UP); break;
//             case 's': case 'S': movePlayer(DOWN); break;
//             case 'a': case 'A': movePlayer(LEFT); break;
//             case 'd': case 'D': movePlayer(RIGHT); break;
//         }
//     }

//     return 0;
// }

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

// --- Maze Escape Game ---
void mazeEscapeGame() {
    const int WIDTH = 10;
    const int HEIGHT = 10;
    char maze[HEIGHT][WIDTH] = {
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
        {'#', ' ', ' ', ' ', '#', ' ', ' ', ' ', 'P', '#'},
        {'#', ' ', '#', ' ', '#', '#', '#', ' ', ' ', '#'},
        {'#', ' ', '#', ' ', ' ', ' ', '#', '#', ' ', '#'},
        {'#', ' ', '#', ' ', '#', ' ', ' ', '#', ' ', '#'},
        {'#', ' ', ' ', ' ', '#', ' ', ' ', ' ', ' ', '#'},
        {'#', ' ', '#', ' ', '#', ' ', ' ', '#', ' ', '#'},
        {'#', ' ', ' ', ' ', ' ', '#', '#', ' ', ' ', '#'},
        {'#', ' ', '#', '#', ' ', ' ', ' ', ' ', 'G', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}
    };
    int playerX = 8, playerY = 1;
    maze[playerY][playerX] = 'P';

    while (true) {
        system("cls");
        for (int i = 0; i < HEIGHT; ++i) {
            for (int j = 0; j < WIDTH; ++j) {
                cout << maze[i][j];
            }
            cout << endl;
        }

        if (playerX == 8 && playerY == 8) {
            cout << "\nYou reached the goal! Congratulations!" << endl;
            break;
        }

        char move;
        cout << "\nEnter your move (W/A/S/D): ";
        move = getchar();
        getchar();  // Consume the newline character

        maze[playerY][playerX] = ' ';

        if (move == 'w' || move == 'W') { if (maze[playerY - 1][playerX] != '#') playerY--; }
        if (move == 's' || move == 'S') { if (maze[playerY + 1][playerX] != '#') playerY++; }
        if (move == 'a' || move == 'A') { if (maze[playerY][playerX - 1] != '#') playerX--; }
        if (move == 'd' || move == 'D') { if (maze[playerY][playerX + 1] != '#') playerX++; }

        maze[playerY][playerX] = 'P';
    }
}

// --- Number Guessing Game ---
void numberGuessingGame() {
    srand(time(0));
    int number = rand() % 100 + 1;
    int guess, attempts = 0;
    
    cout << "Guess the number between 1 and 100: ";
    do {
        cin >> guess;
        attempts++;
        if (guess > number) cout << "Too high! Try again: ";
        else if (guess < number) cout << "Too low! Try again: ";
    } while (guess != number);

    cout << "Correct! You guessed the number in " << attempts << " attempts." << endl;
}

// --- Simple Calculator ---
void simpleCalculator() {
    double num1, num2;
    char op;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;
    cout << "Enter second number: ";
    cin >> num2;

    switch (op) {
        case '+': cout << "Result: " << num1 + num2 << endl; break;
        case '-': cout << "Result: " << num1 - num2 << endl; break;
        case '*': cout << "Result: " << num1 * num2 << endl; break;
        case '/': if (num2 != 0) cout << "Result: " << num1 / num2 << endl; else cout << "Error: Division by zero" << endl; break;
        default: cout << "Invalid operator!" << endl;
    }
}

// --- Tic-Tac-Toe ---
void ticTacToe() {
    char board[3][3] = { { '1', '2', '3' }, { '4', '5', '6' }, { '7', '8', '9' } };
    int choice;
    char player = 'X';

    for (int turn = 0; turn < 9; turn++) {
        system("cls");
        cout << "Tic-Tac-Toe Game\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }

        cout << "Player " << player << ", choose a number (1-9): ";
        cin >> choice;

        int row = (choice - 1) / 3;
        int col = (choice - 1) % 3;

        if (board[row][col] != 'X' && board[row][col] != 'O') {
            board[row][col] = player;
        } else {
            cout << "Spot taken! Try again.\n";
            turn--;
            continue;
        }

        // Switch player
        player = (player == 'X') ? 'O' : 'X';
    }
    cout << "Game Over!" << endl;
}

// --- Hangman ---
void hangmanGame() {
    string word = "PROGRAMMING";
    string guessedWord(word.length(), '_');
    int tries = 6;
    char guess;
    
    while (tries > 0) {
        cout << "Word: " << guessedWord << endl;
        cout << "Tries left: " << tries << endl;
        cout << "Guess a letter: ";
        cin >> guess;
        guess = toupper(guess);
        
        bool correct = false;
        for (size_t i = 0; i < word.length(); i++) {
            if (word[i] == guess && guessedWord[i] == '_') {
                guessedWord[i] = guess;
                correct = true;
            }
        }
        
        if (!correct) {
            tries--;
            cout << "Incorrect guess!" << endl;
        }
        
        if (guessedWord == word) {
            cout << "Congratulations! You guessed the word: " << word << endl;
            break;
        }
    }

    if (guessedWord != word) {
        cout << "Game Over! The word was: " << word << endl;
    }
}

// --- Rock, Paper, Scissors ---
void rockPaperScissors() {
    srand(time(0));
    string choices[3] = { "Rock", "Paper", "Scissors" };
    int userChoice, compChoice;
    
    cout << "Rock, Paper, Scissors Game\n";
    cout << "Choose: 0 - Rock, 1 - Paper, 2 - Scissors: ";
    cin >> userChoice;
    
    compChoice = rand() % 3;
    
    cout << "You chose " << choices[userChoice] << endl;
    cout << "Computer chose " << choices[compChoice] << endl;
    
    if (userChoice == compChoice) {
        cout << "It's a draw!" << endl;
    } else if ((userChoice == 0 && compChoice == 2) || (userChoice == 1 && compChoice == 0) || (userChoice == 2 && compChoice == 1)) {
        cout << "You win!" << endl;
    } else {
        cout << "You lose!" << endl;
    }
}

// --- Random Quiz Game ---
void randomQuizGame() {
    cout << "Random Quiz Game\n";
    string question = "What is the capital of France?";
    string answer = "Paris";
    string userAnswer;

    cout << question << endl;
    cout << "Your answer: ";
    cin >> userAnswer;

    if (userAnswer == answer) {
        cout << "Correct!" << endl;
    } else {
        cout << "Incorrect! The correct answer is " << answer << endl;
    }
}

// --- Guess the Word ---
void guessTheWordGame() {
    string word = "COMPUTER";
    string guessedWord(word.length(), '_');
    int tries = 6;
    
    while (tries > 0 && guessedWord != word) {
        cout << "Word: " << guessedWord << endl;
        cout << "Tries left: " << tries << endl;
        
        char guess;
        cout << "Guess a letter: ";
        cin >> guess;
        
        bool correct = false;
        for (size_t i = 0; i < word.length(); i++) {
            if (word[i] == guess && guessedWord[i] == '_') {
                guessedWord[i] = guess;
                correct = true;
            }
        }
        
        if (!correct) {
            tries--;
            cout << "Incorrect guess!" << endl;
        }
    }
    
    if (guessedWord == word) {
        cout << "Congratulations! You guessed the word: " << word << endl;
    } else {
        cout << "Out of tries! The word was: " << word << endl;
    }
}

// --- Memory Game ---
void memoryGame() {
    cout << "Memory Game: Matching Pairs\n";
    vector<string> cards = { "A", "B", "C", "D", "A", "B", "C", "D" };
    // random_shuffle(cards.begin(), cards.end());
    
    vector<bool> revealed(8, false);
    int matches = 0;
    
    while (matches < 4) {
        for (int i = 0; i < 8; i++) {
            if (revealed[i]) cout << cards[i] << " ";
            else cout << "_ ";
        }
        cout << endl;
        
        int guess1, guess2;
        cout << "Pick two card positions to reveal (1-8): ";
        cin >> guess1 >> guess2;
        guess1--; guess2--;
        
        if (cards[guess1] == cards[guess2]) {
            cout << "It's a match!" << endl;
            revealed[guess1] = true;
            revealed[guess2] = true;
            matches++;
        } else {
            cout << "Not a match! Try again." << endl;
        }
    }
    
    cout << "You won! All pairs matched." << endl;
}

// --- Main Menu ---
int main() {
    int choice;
    
    while (true) {
        cout << "\nSelect a game to play:\n";
        cout << "1. Maze Escape\n";
        cout << "2. Number Guessing Game\n";
        cout << "3. Simple Calculator\n";
        cout << "4. Tic-Tac-Toe\n";
        cout << "5. Hangman\n";
        cout << "6. Rock, Paper, Scissors\n";
        cout << "7. Random Quiz Game\n";
        cout << "8. Guess the Word\n";
        cout << "9. Memory Game\n";
        cout << "10. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: mazeEscapeGame(); break;
            case 2: numberGuessingGame(); break;
            case 3: simpleCalculator(); break;
            case 4: ticTacToe(); break;
            case 5: hangmanGame(); break;
            case 6: rockPaperScissors(); break;
            case 7: randomQuizGame(); break;
            case 8: guessTheWordGame(); break;
            case 9: memoryGame(); break;
            case 10: cout << "Exiting program...\n"; return 0;
            default: cout << "Invalid choice! Please select a valid option.\n"; break;
        }
    }
    return 0;
}
