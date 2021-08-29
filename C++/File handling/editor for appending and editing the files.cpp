#include <iostream.h>
#include <fstream.h>
void main () {
  ofstream myfile;
  myfile.open ("example.txt");
  myfile << "Writing this to a file.\n";
  myfile.close();
  getch();
}
