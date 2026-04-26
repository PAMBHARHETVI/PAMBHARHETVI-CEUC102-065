#ifndef GRADING_H
#define GRADING_H


class Grading
{
    public:
        Grading();

        void set_marks(int m);
        virtual void compute_grade()=0;

    protected:
        int marks;

    private:
};

#endif // GRADING_H
