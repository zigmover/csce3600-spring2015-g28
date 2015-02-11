#include <stdio.h>

// ******************************************************************
//   Here's a "quick and dirty" assignment for you.  Write a program 
//   that will take a command line and "parse" the arguments.  So, 
//   we'll assume that your command line
//   looks something like:
//
//      pgmName  options
//
//   for example,  it might be
//
//   ls -ltga
//   
//   What your program should do is 1) list the pgm name (ls in this 
//   example) and each of the options (l, t, g, a) on separate lines, 
//   and THEN quit and go home!
//
//   We'll assume that each command has one set of options that start 
//   the '-' character and includes each option as a single letter.
//
//   So, we could have sort -n, but not sort --key=1 since that wouldn't 
//   fit our model at this point.
//
// ***********************************************************************

// Here's a copy command

//    cp -r ~phs0004/public/3600/argv .  will copy all of argv to a
//                                       
