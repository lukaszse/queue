#include <exception>

#ifndef INC_2STACKSTOQUEUE_EMPTYSTACKEXCEPTION_H
#define INC_2STACKSTOQUEUE_EMPTYSTACKEXCEPTION_H

struct EmptyStackException : public std::exception
{
    const char * what () const throw ()
    {
        return "Cannot pop element from empty stack";
    }
};

#endif //INC_2STACKSTOQUEUE_EMPTYSTACKEXCEPTION_H
