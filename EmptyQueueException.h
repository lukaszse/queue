#include <exception>

#ifndef INC_2STACKSTOQUEUE_EMPTYQUEUEEXCEPTION_H
#define INC_2STACKSTOQUEUE_EMPTYQUEUEEXCEPTION_H

struct EmptyQueueException : public std::exception
{
    const char * what () const throw ()
    {
        return "Cannot remove element from empty queue";
    }
};
#endif //INC_2STACKSTOQUEUE_EMPTYQUEUEEXCEPTION_H
