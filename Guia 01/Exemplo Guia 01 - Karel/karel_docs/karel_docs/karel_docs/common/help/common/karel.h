/*
   karel  - Karel robot definitions.
   @author  PUC-Minas - ICEI
   @version 0.1 - 2019

   Inspired by the original work (reference):
   Miroslav Binas <mirek.binas at tuke dot sk>
   (c) 2010, 2016
   https://git.kpi.fei.tuke.sk/kpi/karel-the-robot
 */

// import dependencies

// ------------------------------------ OS compatibility section

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include <time.h>

// ------------------------------------ global definitions

// external global definitions
#define ref     &
#define deref   *

// global definitions
#define NORTH   0
#define EAST    1
#define SOUTH   2
#define WEST    3

#define HWALL  '_'
#define VWALL  '|'
#define BEEPER '1'
#define BOX    '#'

#define LIFO    0
#define FIFO    1

#define OPEN    0
#define CLOSED  1

// global constants
#define WIDTH   10
#define HEIGHT  10
#define DEPTH   10

#define MAX_AVENUES WIDTH
#define MAX_STREETS HEIGHT

// global variables (application context)
#if defined (unix) || defined (_unix) || defined (_unix)
#define OS_DELAY 1000
#else
#define OS_DELAY 1
#endif

extern long baseDelay;
extern long stepDelay;

extern bool has_Debug;

extern bool has_Text;

// ------------------------------------ global variables

#define NO_ERROR  0
char error_txt [ 40];

char debug_txt [ 40];

char message   [ 20];
char msg_txt   [ 20];
char msg_board [ 21][20];


// ------------------------------------ global type definitions

/**
   world  - World structure definition.
 */
typedef
 struct s_world             // world container
 {
    int   height;
    int   width ;
    int   depth ;
    char  name [20];        // identification
                            // object container
   int    data [ HEIGHT ][ WIDTH ][ DEPTH ];
 }
 world;

/**
   ref_world - Reference to a World structure.
 */
typedef world* ref_world;   // reference

/**
   robot     - Robot structure definition.
 */
typedef
 struct   s_robot           // robot container
 {
    int   status;           // on ('|') or off ('O')

    int   avenue;           // position (x axis)
    int   street;           // position (y axis)
    int   direction;        //
    int   beepers;          // in bag

    char  symbol;           // badge
    char  name [20];        // identification
 }
 robot;

/**
   ref_robot - Reference to a Robot structure.
 */
typedef robot* ref_robot;

/**
   box - Box structure definition.
 */
typedef
 struct   s_box             // box container
 {
    int   status;           // open (']') or closed ('[')

    int   avenue;           // position (x axis)
    int   street;           // position (y axis)
    int   direction;        // LIFO or FIFO
    int   beepers;          // in box

    char  symbol;           // badge
    char  name [20];        // identification
 }
 box;

/**
   ref_box - Reference to a Box structure.
 */
typedef box* ref_box;

// ------------------------------------ global (public) context

// CAUTION: Use with care.
//          MUST be changed only if objects changes.

/**
   world_now - Current reference to a World structure.
 */
extern ref_world world_now;
/**
   robot_now - Current reference to a Robot structure.
 */
extern ref_robot robot_now;
/**
   box_now   - Current reference to a Box   structure.
 */
extern ref_box   box_now  ;


// --------------------------- prototypes

void show_Text    ( char* message );

/**
   Clear screen.
   OBS: OS dependent !!!
 */
void clrscr       ( );
/**
   Clear till the end of line.
   OBS: DISABLED
 */
void clreol       ( );
/**
   Move focus to screen coordinates.
   @param x - x-axis coordinate
   @param y - y-axis coordinate
   OBS: DISABLED
 */
void gotoxy       ( int x, int y  );
/**
   Sleep for a given number of ticks.
   @param ticks - number of ticks to rest
   OBS.:  (ANSI-C compatible)
 */
void delay        ( clock_t ticks );
/**
   Set new step delay base.
   @param newStepDelay - new base for time control
 */
void set_Speed    ( int newStep   );

/**
   Set a new error code.
   @param code  to be set
 */
void set_Error    ( int code );
/**
   Copy current error code.
   @return current error code
 */
int  get_Error    ( );
/**
   Test if there's any error code set.
   @return true, if there is an error code set;
           false, otherwise
 */
int  has_Error    ( );
/**
   Show error message.
   @param message corresponding to an error code set
 */
void show_Error   ( char* message );
/**
   Show error message and finishes program.
   @param message corresponding to an fatal error code set
 */
void fatal_Error  ( char* message );

/**
   Show 22x80 screen mirror.
   @param screen - symbol matrix to be shown
 */
void show_Screen  ( char screen [ ][80] );

/**
   Retrieve current world number of avenues.
   @return number of avenues, if there is any;
           zero, otherwise
 */
int avenues       ( );
/**
   Retrieve current world number of streets.
   @return number of streets, if there is any;
           zero, otherwise
 */
int streets       ( );
/**
   Check if avenue and street are valid.
   @return true, if avenue and street are valid;
           false, otherwise
   @param avenue - slot (x)
   @param street - slot (y)
 */
bool areValid     ( int avenue, int street );
/**
   Retrieve top information of a world slot.
   @param avenue - slot (x)
   @param street - slot (y)
 */
char get_World    ( int avenue, int street );
/**
   Search a world slot for an object.
   @param avenue - slot (x)
   @param street - slot (y)
   @param object - to be searched
 */
int search_World  ( int avenue, int street, char object );
/**
   Retrieve a free space at a world slot.
   @return free space index, if there is one;
           (-1), otherwise
   @param avenue - slot (x)
   @param street - slot (y)
 */
int has_slot      ( int avenue, int street );
/**
   Retrieve a horizontal wall index at a world slot.
   @return wall index, if there is one;
           zero, otherwise
   @param avenue - slot (x)
   @param street - slot (y)
 */
int has_HWALL     ( int avenue, int street );
/**
   Retrieve a vertical wall index at a world slot.
   @return wall index, if there is one;
           zero, otherwise
   @param avenue - slot (x)
   @param street - slot (y)
 */
int has_VWALL     ( int avenue, int street );
/**
   Retrieve a beeper index at a world slot.
   @return beeper index, if there is one;
           zero, otherwise
   @param avenue - slot (x)
   @param street - slot (y)
 */
int has_BEEPER    ( int avenue, int street );
/**
   Retrieve number of beepers at a world slot.
   @return number of beepers
   @param avenue - slot (x)
   @param street - slot (y)
 */
int has_BEEPERS   ( int avenue, int street );
/**
   Retrieve a box index at a world slot.
   @return box index, if there is one;
           zero, otherwise
   @param avenue - slot (x)
   @param street - slot (y)
 */
int has_BOX       ( int avenue, int street );
/**
   Retrieve if there is a specified robot at a world slot.
   @return robot index, if there is one;
           zero, otherwise
   @param avenue - slot (x)
   @param street - slot (y)
   @param symbol - robot badge symbol
 */
int has_ROBOT     ( int avenue, int street, char symbol );
/**
   Show current visible items in the world slots.
 */
void show_World   ( );

/**
   Show text message.
   @param message to be shown.
 */
void show_Text    ( char* message );
/**
   Show basic robot board.
   @param line for the message.
   @param message to be shown.
 */
void show_Board   ( int line, char* message );
/**
   Clean up world slots.
 */
void reset_World  ( );
/**
   Set default world dimensions.
 */
void create_World ( char* name );
/**
   Install an object at a world slot.
   @param avenue - slot (x)
   @param street - slot (y)
   @param object - object badge symbol
 */
void set_World    ( int avenue, int street, char object );
/**
   Remove an object at a world slot.
   @param avenue - slot (x)
   @param street - slot (y)
   @param object - to be removed
 */
void remove_World ( int avenue, int street, int object  );
/**
   Write current world items to a file.
   @param fileName - file identification name
 */
void save_World   ( char* fileName );
/**
   Read a file to restore world items.
   @param fileName - file identification name
 */
void read_World   ( char* fileName );
/**
   Close world and shutdown.
 */
void close_World  ( );

/**
   Set box parameters.
   @param avenue    - slot (x)
   @param street    - slot (y)
   @param direction - in world coordinates
   @param beepers   - initial beeper number
   @param status    - if robot is active or not
 */
void create_Box        ( int avenue, int street,
                         int direction, int beepers, char* name, int status );
/**
   Retrieve number of beepers of current robot.
   @return number of beepers
 */
int beepersInBox       ( );
/**
   Check if there is any beeper into the box.
   @return number of beepers
 */
int isEmptyBox         ( );
/**
   Check current box status.
   @return current box status
 */
int checkBoxStatus     ( );
/**
   Open current box.
 */
void openBox           ( );
/**
   Close current box.
 */
void closeBox          ( );
/**
   Retrieve all beepers in the current box.
   @return number of beepers
 */
int pullBeeperFromBox  ( );
/**
   Put a beeper into the box.
 */
void pushBeeperIntoBox ( );
/**
   Show current robot information.
 */
void debug_Robot       ( );
/**
   Set debug to show robot information.
 */
void debug_Robot_On    ( );
/**
   Reset debug to omit robot information.
 */
void debug_Robot_Off   ( );
/**
   Retrieve current robot status.
   @return true , if robot is active;
           false, otherwise
 */
bool checkRobotStatus  ( );
/**
   Set current robot on.
 */
void turnOn            ( );
/**
   Set current robot off.
 */
void turnOff           ( );
/**
   Set robot parameters.
   @param avenue    - slot (x)
   @param street    - slot (y)
   @param direction - in world coordinates
   @param beepers   - initial beeper number
   @param name s    - robot identification
 */
void create_Robot      ( int avenue   , int street ,
                         int direction, int beepers, char* name );
/**
   Modify robot position at world coordinates.
   @param avenue    - slot (x)
   @param street    - slot (y)
 */
void set_Robot         ( int x, int y );
/**
   Turn robot to the left of its current direction.
 */
void turnLeft          ( );
/**
   Test if world slot ahead has free space for robot.
   @return true , if there is an free space;
           false, otherwise
 */
bool frontIsClear      ( );
/**
   Test if world slot at left has free space for robot.
   @return true , if there is an free space;
           false, otherwise
 */
bool leftIsClear       ( );
/**
   Test if world slot at right has free space for robot.
   @return true , if there is an free space;
           false, otherwise
 */
bool rightIsClear      ( );
/**
   Test if current robot faces a given direction at world.
   @return true , if robot is facing the desired direction;
           false, otherwise
   @param  direction - to be tested
 */
bool facing            ( int direction );
/**
   Test if current robot faces North.
   @return true , if robot is facing the desired direction;
           false, otherwise
 */
bool facingNorth       ( );
/**
   Test if current robot faces South.
   @return true , if robot is facing the desired direction;
           false, otherwise
 */
bool facingEast        ( );
/**
   Test if current robot faces East.
   @return true , if robot is facing the desired direction;
           false, otherwise
 */
bool facingSouth       ( );
/**
   Test if current robot faces West.
   @return true , if robot is facing the desired direction;
           false, otherwise
 */
bool facingWest        ( );
/**
   Move current robot one slot ahead.
 */
void move              ( );
/**
   Set a new direction to the current robot.
   @param direction - to be set
 */
void face              ( int direction );
/**
   Set north as the new direction of the current robot.
 */
void faceNorth         ( );
/**
   Set east   as the new direction of the current robot.
 */
void faceEast          ( );
/**
   Set south as the new direction of the current robot.
 */
void faceSouth         ( );
/**
   Set west   as the new direction of the current robot.
 */
void faceWest          ( );
/**
   Retrieve number of beepers in the current robot bag.
   @return number of beepers in robot bag
 */
int  beepers           ( );
/**
   Check if there is any beeper in the current robot bag.
   @return true , if there is any beeper in robot bag;
           false, otherwise
 */
bool beepersInBag      ( );
/**
   Check if there is another robot at current world slot.
   @return true , if there is any robot at the same slot;
           false, otherwise
 */
bool nextToARobot      ( );
/**
   Check if there is any beeper current world slot.
   @return true , if there is any beeper at the same slot;
           false, otherwise
 */
bool nextToABeeper     ( );
/**
   Check if there is a box at current world slot.
   @return true , if there is any box at the same slot;
           false, otherwise
 */
bool nextToABox        ( );
/**
   Pick a beeper at current world slot and keep it.
 */
void pickBeeper        ( );
/**
   Put a beeper at current world slot.
 */
void putBeeper         ( );
/**
   Pick a beeper from box at current world slot and keep it.
 */
void pickBeeperFromBox ( );
/**
   Push a beeper into a box at current world slot.
 */
void putBeeperInBox    ( );
/**
   Retrieve robot location on avenue number.
   @return avenue number.
 */
int  xAvenue           ( );
/**
   Retrieve robot location at street number.
   @return street number.
 */
int  yStreet           ( );
/**
   Check robot location.
   @return true, if is the right location;
           false, otherwise.
   @param avenue    - slot (x)
   @param street    - slot (y)
 */
bool areYouHere        ( int avenue, int street );
