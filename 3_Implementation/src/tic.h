#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

// Functions Declarations
static void singlemode();
static void doublemode();
static void placex(int);  // used for placing position of X by the 1st player
static void place();      // used by the computer to place O
static void placey(int);  // used in Double Player mode by the 2nd player to
                          // place the position of O
int checkwin();  // checks everytime when a player or computer places 'X' or 'O'
