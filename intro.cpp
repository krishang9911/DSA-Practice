// data: raw facts/numbers

// eg. A student's name, roll no., age, course etc.
//    or a person's salary, phone number,
//     temperature and humidity on a particular day etc etc

//  All these are RAW FACTS/NUMBERS

// Information is the conclusion or meaning that we draw from some data
//  Example:
//   Say, for today, temp = 50 degree celsius, humidity = 80%
//     These are raw facts

// From this data, we made the conclusion that today, it is very
//  hot and humid. 
//  THIS IS INFORMATION(conclusion we drew from the data)

// Information is obtained by processing the dat
// or information is just processed data


// NOW, WHAT ARE DATA STRUCTURES
// Data structures are ways to organize and store data so that it can
//  be used efficiently

// It is analogous to
// A library rack(since the books inside it, are organized)
// A pen stand
// A cupboard
// All these structures allow us to store something in them in
//  an organized manner

// Types of data structures:

// 1) PRIMITVE DATA STRUCTURES
//    Basic data types store a single value and are directly operated on by
//     machine-level instructions

// Features of primitive data structures
//  1) Store a single value
//  2) Use minimal amount of memory
//  3) Fast operations

// 1) bool
//  Represents a logical value-either true or false
//  Used in conditions or decision making
//  Fixed size of 1 byte(8 bits)

bool a = true;
// in Java: boolean a = true;
// in Python: a = True

// 2) char
//  Represents a single character
//  Can include a letter, digit or symbol
//  Fixed size of 2 bytes

char a = 'A';

// Signed and unsigned

// a) signed char
//   represents an 8 bit sized integer
//   Range: -128 to 127

signed char a = -122;

// b) unsigned char
//  represents an 8 bit sized integer
//  range: 0 to 255

unsigned char b = 135;

// 3) int
// Represents an integer value
// Fixed size of 4 bytes
// Includes both +ve and -ve whole numbers

int a = 10;

// 4) float
//  Floating-point number
//  Stores a real number(decimal number)
//  Fixed size of 4 bytes

float num = 2.13f;

// 5) double
//  Floating-point number
//  Stores a real number(decimal number)
//  Fixed size of 8 bytes

double num2 = 2.12;

// 6) short
//  Represents an integer value
//  Range: -2^15 to 2^15 - 1
//  Fixed size of 2 bytes

short age = 25;

// Use when MEMORY IS LIMITED
//  For eg. in embedded systems

// 7) long
//  Represents an integer value
//  Range is much larger than that of int
//  Fixed size: 4 bytes(usually) or sometimes 8 bytes(depending on the system)

long number = 1234567899923;
