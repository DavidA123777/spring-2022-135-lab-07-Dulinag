#include <iostream>
#include "unindent.h"
#include "indent.h"
#include <fstream>
using namespace std;

int main(){

cout << endl;
cout << "task a: " << endl;
cout << endl;

    fstream myfile;
    myfile.open("bad-code.cpp", std::ios::in);

      if (myfile.is_open()){
          string line;
          while (getline(myfile, line)){
            removeLeadingSpaces(line);
          }
          myfile.close();
        }

  cout << endl;
cout << "task b: " << endl;
cout << endl;

fstream myfile1;
myfile1.open("unindented-code.cpp", std::ios::in);

if (myfile1.is_open()){

     string line1;
     int jo = 0;
     while (getline(myfile1, line1)) {

          jo -= countChar(line1, '}');
         for (int i = 0; i < jo; i++) {
             cout << "\t";
         }
         cout << line1 << endl;
          jo += countChar(line1, '{');
     }

  }
 return 0;
}
