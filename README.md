# Graphical Shapes Program (Assignment 1 Problem 1)

A comprehensive C++ console application that generates ASCII art representations of various geometric shapes with customizable borders and hollow interiors.

## Team Members
- **Hady Hassan Sayed Hassan El Fadaly** - [Github Profile](https://github.com/hadyelfadaly)
- **Haneen Hisham Soliman** - [Github Profile](https://github.com/haneens5905) 

## Features

### Shape Generation
- **Square**: Hollow square with customizable size and border character
- **Rectangle**: Hollow rectangle with independent length and width dimensions
- **Rhombus**: Diamond-shaped pattern with symmetrical triangular sections
- **Equilateral Triangle**: Centered triangular shape with hollow interior
- **Right-Angled Triangle**: Scalene triangle with customizable base and height

### User Experience
- **Interactive Input**: User-friendly prompts for shape selection and parameters
- **Case-Insensitive**: Accepts both uppercase and lowercase shape names
- **Custom Border Characters**: Choose any character for shape borders
- **Hollow Design**: All shapes feature hollow interiors for visual appeal

### Technical Features
- **Flexible Input Handling**: Uses `getline()` for multi-word shape names
- **Efficient Algorithms**: Optimized nested loops for shape generation
- **Mathematical Precision**: Accurate geometric calculations for all shapes
- **Console Output**: Clean ASCII art generation

## Supported Shapes

### Square
- **Input**: Size (integer), Border character
- **Output**: Hollow square with specified dimensions
- **Example**: Size 5 with '*' creates a 5x5 hollow square

### Rectangle
- **Input**: Length (rows), Width (columns), Border character
- **Output**: Hollow rectangle with independent dimensions
- **Example**: 5x6 rectangle with '#' border

### Rhombus
- **Input**: Size (integer), Border character
- **Output**: Diamond pattern with four triangular sections
- **Algorithm**: Uses mathematical conditions for triangle positioning

### Equilateral Triangle
- **Input**: Size (height), Border character
- **Output**: Centered triangular shape with hollow interior
- **Features**: Automatic centering and proportional width calculation

### Right-Angled Triangle
- **Input**: Base (width), Height (rows), Border character
- **Output**: Scalene triangle with right angle at bottom-left
- **Features**: Diagonal line generation and proper spacing

## System Architecture

### Program Flow
```
Main Program
├── Welcome Message
├── Shape Selection (getline input)
├── Shape-Specific Branches
│   ├── Square Generation
│   ├── Rectangle Generation
│   ├── Rhombus Generation
│   ├── Equilateral Triangle
│   └── Right-Angled Triangle
└── Shape Rendering
```

## Technical Specifications

### Input Validation
- **Shape Names**: Case-insensitive string matching
- **Dimensions**: Integer input validation
- **Characters**: Single character input for borders

### Memory Management
- **Stack-based Variables**: Efficient local variable usage
- **No Dynamic Allocation**: Simple variable declarations
- **Minimal Memory Footprint**: Optimized for console applications

### Error Handling
- **Implicit Validation**: Program continues with valid inputs
- **Graceful Termination**: Natural program flow completion
- **User-Friendly Interface**: Clear prompts and instructions

## Learning Objectives

This project demonstrates:
- **Control Structures**: Complex nested loops and conditional statements
- **Mathematical Logic**: Geometric calculations and pattern recognition
- **String Handling**: Multi-word input processing with `getline()`
- **Algorithm Design**: Efficient shape generation algorithms
- **User Interface**: Interactive console application development
- **Code Organization**: Structured programming with clear logic flow

**Note**: This program showcases fundamental programming concepts including loops, conditionals, and mathematical logic in C++. It serves as an excellent example of algorithmic thinking and pattern generation techniques.


# Unit Converter Program (Assignment 1 Problem 2)

A versatile C++ console application that performs precise unit conversions across three fundamental measurement categories: Time, Distance, and Temperature with intelligent breakdown and formatting.

## Team Members
- **Hady Hassan Sayed Hassan El Fadaly** - [Github Profile](https://github.com/hadyelfadaly)
- **Haneen Hisham Soliman** - [Github Profile](https://github.com/haneens5905) 

## Features

### Conversion Categories
- **Time Conversion**: Seconds to Hours, Minutes, and Seconds breakdown
- **Distance Conversion**: Centimeters to Kilometers, Meters, and Centimeters breakdown
- **Temperature Conversion**: Fahrenheit to Celsius and Kelvin with precision formatting

### User Experience
- **Interactive Menu**: Numbered selection system with descriptive options
- **Flexible Input**: Accepts both numeric choices (1, 2, 3) and text-based selections
- **Case-Insensitive**: Handles both uppercase and lowercase input variations
- **Intelligent Breakdown**: Converts large units into constituent smaller units
- **Precision Control**: Automatic decimal formatting for temperature conversions

### Technical Features
- **Mathematical Accuracy**: Precise conversion formulas for all unit types
- **Remainder Calculation**: Intelligent remainder handling for unit breakdowns
- **Float Precision**: High-precision floating-point arithmetic for temperatures
- **Formatted Output**: Professional display with proper decimal places
- **Input Validation**: Graceful handling of invalid menu selections

## Supported Conversions

### Time Converter
- **Input**: Time in seconds (integer)
- **Output**: Breakdown into Hours, Minutes, and Seconds
- **Algorithm**: Sequential division with remainder calculation
- **Use Case**: Converting large time durations into readable format

### Distance Converter
- **Input**: Distance in centimeters (integer)
- **Output**: Breakdown into Kilometers, Meters, and Centimeters
- **Conversion Ratios**: 1 km = 100,000 cm, 1 m = 100 cm
- **Use Case**: Converting precise measurements into practical units

### Temperature Converter
- **Input**: Temperature in Fahrenheit (float)
- **Output**: Celsius and Kelvin with 2 decimal precision
- **Formulas**: C = (F - 32) × 5/9, K = C + 273.15
- **Use Case**: Scientific and international temperature conversion

## System Architecture

### Program Flow
```
Main Program
├── Welcome Message & Menu Display
├── User Choice Input (string/numeric)
├── Conversion Branch Selection
│   ├── Time Conversion Module
│   │   ├── Seconds Input
│   │   ├── Hours Calculation
│   │   ├── Minutes Calculation
│   │   └── Remaining Seconds
│   ├── Distance Conversion Module
│   │   ├── Centimeters Input
│   │   ├── Kilometers Calculation
│   │   ├── Meters Calculation
│   │   └── Remaining Centimeters
│   └── Temperature Conversion Module
│       ├── Fahrenheit Input
│       ├── Celsius Calculation
│       ├── Kelvin Calculation
│       └── Precision Formatting
└── Result Display
```

### Algorithm Design
- **Hierarchical Breakdown**: Large to small unit conversion
- **Remainder Preservation**: Accurate remainder calculation at each step
- **Precision Control**: Floating-point handling for temperature accuracy
- **Input Flexibility**: Multiple input format acceptance

## Mathematical Foundations

### Time Conversion Ratios
- 1 Hour = 3,600 Seconds
- 1 Minute = 60 Seconds
- Breakdown: Hours → Minutes → Seconds (hierarchical)

### Distance Conversion Ratios
- 1 Kilometer = 100,000 Centimeters
- 1 Meter = 100 Centimeters
- Breakdown: Kilometers → Meters → Centimeters (metric system)

### Temperature Conversion Formulas
- **Fahrenheit to Celsius**: C = (F - 32) × 5/9
- **Celsius to Kelvin**: K = C + 273.15
- **Combined**: K = ((F - 32) × 5/9) + 273.15

## Menu Interface

```
Welcome to our converter program ...
Choose the units you want to convert from the list or exit.
1. Time
2. Distance  
3. Temperature
```
## Technical Specifications

### Data Types
- **Time**: Integer arithmetic for whole seconds
- **Distance**: Integer arithmetic for whole centimeters
- **Temperature**: Float arithmetic for decimal precision

### Precision Control
- **Time & Distance**: Whole number display
- **Temperature**: 2 decimal places using `setprecision(2)` and `fixed`

### Memory Management
- **Stack-based Variables**: Efficient local variable usage
- **No Dynamic Allocation**: Simple variable declarations
- **Minimal Memory Footprint**: Optimized for console applications

### Error Handling
- **Invalid Menu Selection**: "Invalid Input" message display
- **Type Validation**: Implicit through cin operations
- **Graceful Termination**: Natural program flow completion

## Learning Objectives

This project demonstrates:
- **Mathematical Operations**: Division, multiplication, and modular arithmetic
- **Precision Control**: Floating-point formatting and display control
- **Control Structures**: Complex conditional branching with multiple conditions
- **Input Handling**: Flexible input processing with type management
- **Algorithm Design**: Efficient unit breakdown and conversion algorithms
- **User Interface**: Interactive menu-driven console application development
- **Scientific Computing**: Accurate implementation of conversion formulas

## Practical Applications

### Real-World Use Cases
- **Time Management**: Converting durations for scheduling and planning
- **Engineering**: Metric system conversions for technical specifications
- **Scientific Research**: Temperature scale conversions for experiments
- **International Commerce**: Unit standardization for global transactions
- **Educational Tools**: Teaching unit relationships and conversion principles

**Note**: This program showcases fundamental programming concepts including mathematical operations, precision control, and user interface design in C++. It serves as an excellent example of practical utility development and scientific computing principles.


# Tic-Tac-Toe Game (Assignment 1 Problem 3)

A simple yet interactive C++ implementation of the classic Tic-Tac-Toe game for two players, featuring a console-based interface with move validation and win condition checking.

## Team Members
- **Hady Hassan Sayed Hassan El Fadaly** - [Github Profile](https://github.com/hadyelfadaly)
- **Haneen Hisham Soliman** - [Github Profile](https://github.com/haneens5905) 

## Features

### Gameplay
- **Two-Player Mode**: Alternate turns between Player 1 (O) and Player 2 (X)
- **Move Validation**: Checks for invalid moves and occupied positions
- **Win Detection**: Identifies horizontal, vertical, and diagonal wins
- **Tie Detection**: Recognizes when the board is full with no winner
- **Replay Option**: Play multiple games without restarting the program

### Technical Features
- **Console-Based Interface**: Simple text display of the game board
- **Input Validation**: Ensures moves are within the valid range (11-33)
- **Conditional Logic**: Comprehensive checks for game outcomes
- **Modular Design**: Organized code structure for easy maintenance

## Game Rules
- Players take turns entering their moves as two-digit numbers:
  - First digit: Row (1-3)
  - Second digit: Column (1-3)
- Example: "22" places a mark in the center of the board
- First player to get three marks in a row (horizontally, vertically, or diagonally) wins

## System Architecture

### Code Structure
```
main()
├── Board Initialization
│   ├── 3x3 grid represented by variables h1-h9
│   └── Initial state: all positions empty ('-')
├── Game Loop
│   ├── Player 1 (O) move input
│   ├── Board update and display
│   ├── Win condition check
│   ├── Player 2 (X) move input
│   └── Win condition check
└── Post-Game
    ├── Winner announcement
    ├── Replay prompt
    └── Clean exit option
```

### Key Components
- **Board Representation**: 9 character variables (h1-h9) for each position
- **Move Processing**: Converts two-digit input to board position
- **Win Checking**: 8 possible win conditions (3 rows, 3 columns, 2 diagonals)
- **Input Handling**: Basic validation for move legality

## Technical Implementation

### Key Algorithms
- **Move Translation**: Converts numerical input (11-33) to board positions
- **Win Checking**: Comprehensive condition checks for all possible winning lines
- **Turn Management**: Alternates between players with proper move validation

### Design Considerations
- **Simplicity**: Straightforward implementation without unnecessary complexity
- **Readability**: Clear variable naming and logical structure
- **Extensibility**: Easy to modify for future enhancements

## Learning Objectives

This project demonstrates:
- **Basic C++ Syntax**: Variables, conditionals, loops
- **User Input Handling**: Basic input validation
- **Game Logic Implementation**: Win condition checking
- **Structured Programming**: Organized control flow
- **Console I/O**: Simple text-based interface

**Note**: This implementation focuses on core game mechanics and serves as a foundation for more advanced features like AI opponents or graphical interfaces.


# C++ Programming Fundamentals Collection

A comprehensive collection of 8 C++ programming problems demonstrating fundamental programming concepts, algorithms, and data structures. This repository showcases solutions to various computational challenges including number theory, string manipulation, array operations, and mathematical computations.

## Team Members
- **Hady Hassan Sayed Hassan El Fadaly** - [Github Profile](https://github.com/hadyelfadaly)
- **Haneen Hisham Soliman** - [Github Profile](https://github.com/haneens5905) 
- **Mohamed Amr Ahmed** - [Github Profile](https://github.com/moharamiko)

## Features

### Problem Set Overview
- **Prime Number Validation**: Advanced prime checking with digit sum analysis
- **String Pattern Matching**: Character-by-character comparison algorithms
- **Interactive Divisor Display**: User-driven mathematical computations
- **Array Manipulation**: Dynamic right-shift operations with boundary checking
- **Matrix Mathematics**: 3x3 matrix multiplication with user input
- **Age Calculation System**: Complex temporal logic with multiple conditions
- **Encryption/Decryption**: Simple Caesar cipher implementation
- **Graph Representation**: Edge list to adjacency matrix conversion

### Technical Features
- **Input Validation**: Robust error handling and user input verification
- **Mathematical Algorithms**: Prime checking, divisor calculation, matrix operations
- **String Processing**: Character manipulation and pattern matching
- **Memory Management**: Efficient array and string operations
- **Interactive UI**: Console-based user interaction with menu systems
- **Data Conversion**: String to integer conversion and character mapping

## Problem Breakdown

### 1. Prime Number Checker (`is_prime`)
**Complexity**: O(√n)
- Advanced prime validation combining multiple mathematical tests
- Even number filtering (except 2)
- Square root optimization for divisibility checking
- Digit sum analysis for rule-of-three divisibility
- Comprehensive edge case handling

```cpp
bool is_prime(int n)
// Returns true if n is prime, false otherwise
// Includes optimized algorithms and digit sum validation
```

### 2. String Matching (`number_of_matches`)
**Complexity**: O(min(m,n))
- Position-based character comparison between two strings
- Handles strings of different lengths gracefully
- Returns count of matching characters at identical positions
- Optimized to check only up to the shorter string length

```cpp
int number_of_matches(string word1, string word2)
// Counts matching characters at same positions
// Example: number_of_matches("boast", "boat") returns 3
```

### 3. Divisor Display System (`displayDivisors`)
**Complexity**: O(n)
- Interactive console application with input validation
- Displays all divisors in descending order
- Continuous operation with user choice validation
- Handles negative numbers and zero with error messages
- Professional user experience with clear prompts

### 4. Array Right Shift (`shift_right`)
**Complexity**: O(n)
- Dynamic array manipulation with user-defined parameters
- Boundary checking for left/right indices and distance
- In-place shifting algorithm preserving array integrity
- Error handling for invalid parameters
- Supports floating-point arrays

### 5. Matrix Multiplication (`matrixMultiplication`)
**Complexity**: O(n³)
- Complete 3x3 matrix multiplication implementation
- Interactive input system for both matrices
- Standard mathematical matrix multiplication algorithm
- Formatted output with proper spacing and alignment
- Zero-initialized result matrix for clean calculations

### 6. Hanzalah Age Calculator (`calculateHanzalahAge`)
**Complexity**: O(1)
- Complex temporal logic with multiple time periods
- Handles three distinct aging phases (1938-1948, 1948-2027, 2027+)
- Half-year precision based on month thresholds
- Comprehensive boundary condition handling
- Real-world application of conditional logic

### 7. Message Encryption System
**Complexity**: O(n)
- **Encryption** (`encryptMessages`): Caesar cipher with +5 shift
- **Decryption** (`decryptMessages`): Reverse Caesar cipher with -5 shift
- Simple yet effective character manipulation
- Preserves message length and structure
- Bidirectional conversion capability

### 8. Graph Matrix Converter (`getGraphMatrix`)
**Complexity**: O(V²)
- Converts edge list representation to adjacency matrix
- Character to integer mapping for vertex labels (a-f → 0-5)
- Handles weighted graphs with custom edge weights
- String to integer conversion utilities
- Symmetric matrix generation for undirected graphs

## System Architecture

### Core Components
```
Main Application
├── Mathematical Functions
│   ├── is_prime() - Prime number validation
│   ├── calculateHanzalahAge() - Complex age calculation
│   └── matrixMultiplication() - Matrix operations
├── String Processing
│   ├── number_of_matches() - Pattern matching
│   ├── encryptMessages() - Caesar cipher encryption
│   ├── decryptMessages() - Caesar cipher decryption
│   └── strTOint() - String to integer conversion
├── Array Operations
│   ├── shift_right() - Dynamic array shifting
│   └── getGraphMatrix() - Graph representation conversion
└── Interactive Systems
    ├── displayDivisors() - User-driven divisor calculation
    └── Input validation helpers
```

## Technical Implementation

### Key Design Decisions

**Mathematical Optimization**
- Prime checking uses square root optimization
- Matrix multiplication follows standard O(n³) algorithm
- Age calculation uses efficient conditional branching

**Memory Efficiency**
- In-place array operations where possible
- Minimal memory allocation for string operations
- Stack-based variable usage for optimal performance

**User Experience**
- Comprehensive input validation
- Clear error messages and prompts
- Interactive menu systems with choice validation
- Professional console output formatting

**Code Organization**
- Single-file implementation for easy compilation
- Clear function separation and naming conventions
- Comprehensive inline documentation and test cases
- Consistent coding style throughout

## Learning Objectives

This collection demonstrates mastery of:
- **Fundamental Algorithms**: Prime checking, sorting, searching
- **Data Structures**: Arrays, matrices, strings
- **Mathematical Computing**: Matrix operations, modular arithmetic
- **String Processing**: Pattern matching, character manipulation
- **Interactive Programming**: User input handling, menu systems
- **Code Optimization**: Time and space complexity considerations
- **Error Handling**: Input validation and boundary checking
- **Problem Solving**: Breaking complex problems into manageable functions

## Advanced Features

### Problem-Specific Innovations
- **Enhanced Prime Checking**: Combines multiple mathematical properties
- **Flexible String Matching**: Handles variable-length inputs
- **Interactive Divisor System**: Professional user experience
- **Safe Array Operations**: Boundary checking and error handling
- **Complex Age Logic**: Multi-phase temporal calculations
- **Bidirectional Encryption**: Complete cipher implementation
- **Graph Flexibility**: Multiple input formats supported


**Note**: This collection serves as a comprehensive introduction to C++ programming fundamentals, demonstrating clean code practices, algorithmic thinking, and practical problem-solving skills. Each solution is optimized for both readability and performance, making it an excellent reference for learning core programming concepts.