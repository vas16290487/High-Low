# High-Low

### I. Initiative
A gambling game between a player (rolling a 10 sided dice and guessing whether the number they roll is higher or lower than the opponent's number) and the computer (which acts as an opponent).

### II. Epics and User Stories

##### Epics

- Random number generator that can produce an integer between 1 and 10 inclusive, twice
- Comparing 2 randomly generated numbers
- Taking user input


##### Non-Functional Requirements

- The application should recognise and react to input from the keyboard 
- Inform the user about what the application expects from them

##### User Stories

- As a player, I would see what number the computer has come up with
- As a player, I would let the application wether I believe to have rolled a higher number or a lower number
- As a player, I would use the keyboard in order to interact with the application

##### How We Addressed The Requirements

How will your planned product meet the user requirements

### III. Genre

This is a gambling game of sorts: the user can achieve a "win" state based on a random guess, but they won't recieve a trackable reward of any kind.

It's also text-based, as the player has to read information from a CLI and send textual commands in order to advance the game.

### IV. Technical Details

##### Platform


##### Programming Language/Enviroment

I've used the C++ programming language, using the CodeBlocks IDE

![IDE Screenshot](https://github.com/vas16290487/High-Low/blob/master/documentation%20resources/IDE%20Screenshot.png)

##### Programming Challenges

My first programming challenge was creating a random number of any kind.
 
##### Constructing And Implementing My Code

Think of this as the method. How will you go about building your program?

##### Algorithms

Explanation of the algorithms behind your program
 
##### Coding Standards 

Line length:
 - No single line of code should exceed 120 characters
 - If a comment might go over this limit, use multi-line comments
 
```C++
 /* This is an example of a multi-line comment.
    These should be used whenever a comment can't fit the 120 character limit,
    or, to help with readibility.
 */
```

 - If a string is too long to fit within the line character limit, enclose each part of the string within double quotes and write each part on a new line
 
```C++
cout << "Welcome to High-Low! The rules are simple: I will tell you a number between 1 and 10, "
        "then I will roll a 10-sided dice for you. Then, you have to guess if the dice rolled a number "
        "higher than my initial number. Easy, right? Let's get started!" << endl;
```

Comments: 
 - When describing one line of code, continue on the same line
 
 ```C++
 int diceRoll; //Holder for result of dice roll
 ```
 
 - When describing multiple lines of code, comment in the space above the section, with no lines between the section and the comment itself
 
 ```C++
 //Generate initial random number
	srand(time(NULL));
	compNum = rand() % 10 + 1;
 ```
 
 Variable names:
  - All variables should use camel case
  ```C++
  string userInp; //Holder for user input. This could be y or n
  ```
  
 

### V. Research

### VI. Project Management

##### Burndown Chart

![Example Burndown Chart](https://upload.wikimedia.org/wikipedia/commons/8/8e/SampleBurndownChart.svg)

Chart showing the completion of user stories over time

##### User Stories Tracking Chart (Which Stories Have Been Completed)

Table showing user stories with weighting, due date and completion state

##### Flowchart

![High Low Flowchart](https://github.com/vas16290487/High-Low/blob/master/documentation%20resources/High%20Low%20Flowchart.png)


##### Functions

Descriptions of functions given on flowchart
