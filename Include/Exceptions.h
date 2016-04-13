#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include <exception>

using namespace std;

class cameraOpenException: public exception
{
  virtual const char* what() const throw()
  {
    return "Camera initialization failed";
  }
};

#endif // EXCEPTIONS_H
