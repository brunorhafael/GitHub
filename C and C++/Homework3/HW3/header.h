//  Bruno Rhafael Fonteles de Lima
//  Stony Brook SOLAR ID: 110126067
//// 	Description:  Compile the C
//source file by using gcc (or any other C compiler of your choice) through the system() function
//and then run the resulting program with the given input file. You will then compare the output
//file generated by the execution of this program with the expected result file to determine
//whether or not the program is correct.
//  HOMEWORK 3 - due Tuesday, March 24th no later than 5:00PM
// COMPILER: MinGW GCC 4.8.1

#ifndef HEADER_FILE
#define HEADER_FILE

#define LINES 5

// Prototypes of the functions

void callSystem(char NameSource[30], char NameInput[30]);

int generateFile(char result[30]);



#endif
