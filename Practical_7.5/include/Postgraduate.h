#ifndef POSTGRADUATE_H
#define POSTGRADUATE_H

#include <Grading.h>


class Postgraduate : public Grading
{
    public:
        Postgraduate();

        void compute_grade();

    protected:

    private:
};

#endif // POSTGRADUATE_H
