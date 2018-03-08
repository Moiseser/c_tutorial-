//Not sure what this line does yet
#include <stdio.h>

/* This is a comment.This set of comments tags out anything between the walls of
'of the astriks and slashes. Will be useful for tagging out pieces of code etc. */
//here we are defining a manin function? more later
//In C a functions argument is contined in {}
int main(int argc, char *argv[])
{
  int distance = 100;

  //this is also a comment, this comment tags out a specifc line
  //Printf is a function in c?
  printf("You are %d miles away.\n", distance);
//return tells us to return to the OS? Gives a vlaue to the OS?
  return 0;
}
/* Things ive done to break the code and still run it

removed one of the curly bracket, compile gives error but you still get the print
removeed the semi colons to seperate arugments
it seems like you can make a lot of format errors and still get the code to run
*/
