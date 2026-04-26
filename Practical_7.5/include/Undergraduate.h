#ifndef UNDERGRADUATE_H
#define UNDERGRADUATE_H

#include <Grading.h>


class Undergraduate : public Grading
{
    public:
        Undergraduate();

        void compute_grade();

    protected:

    private:
};

#endif // UNDERGRADUATE_H
