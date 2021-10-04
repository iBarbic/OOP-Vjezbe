#ifndef POMOCNA_H
#define POMOCNA_H


class Pomocna
{
    private:
        int year=0;
        int month=0;
        double kg=0;
    public:
        void set_y(int y);
        void set_m(int m);
        void set_kg(double a);
        int get_y()const;
        int get_m()const;
        double get_kg()const;
};
#endif // POMOCNA_H
