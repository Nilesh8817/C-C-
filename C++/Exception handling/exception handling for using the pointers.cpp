#include <iostream.h>
#include <conio.h>
struct MyException : public exception{
   const char * what () const throw () {
      return "C++ Exception";
   }
};
 int main() {
   try {
      throw MyException();
   }catch(MyException& e) {
      cout << "MyException caught" << std::endl;
      cout << e.what() << std::endl;
   } catch(std::exception& e) {
    }
    }
