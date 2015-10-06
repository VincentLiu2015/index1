
#ifndef STUDENT_H
#define STUDENT_H
#include "Time.h"
#include "Match.h"
class Match
{
    //friend Time;
public:
    Match(int hour ,int min , int sec);
    void testTime();
private:
    Time m_tTimer;
};
#endif // STUDENT_H
