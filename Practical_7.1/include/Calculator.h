#ifndef CALCULATOR_H
#define CALCULATOR_H


class Calculator
{
   public:
        Calculator();

        void set_data(int ,int );
        void showdata();
        void set_data(float ,float );
        void set_data(int ,float );
        void set_data(float ,int );
        Calculator operator+(Calculator C)
        {
            Calculator temp;
            temp.a=a+C.a;
             temp.b=b+C.b;
              temp.c=c+C.c;
               temp.d=d+C.d;
            return temp;
        }
    protected:

    private:
        int a,b;;
        float c,d;;
};

#endif // CALCULATOR_H
