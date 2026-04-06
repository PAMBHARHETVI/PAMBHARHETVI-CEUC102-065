#ifndef STUDENTRECORD_H
#define STUDENTRECORD_H


class studentRecord
{
    public:
        studentRecord();
        void average();
        char searchStudent(int);
        void addStudent(int x,studentRecord *);
    protected:

    private:
        int rollNo;
        float marks1,marks2,marks3;
        char name[30];
};

#endif // STUDENTRECORD_H
