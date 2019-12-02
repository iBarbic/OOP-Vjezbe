#ifndef TOCKA_H
#define TOCKA_H


class Tocka
{
    private:
        double x;
        double y;
        double z;

    public:
        void postavi(double x=0,double y=0,double z=0);
        void postavi_random(int a,int b);
        double get_x()const;
        double get_y()const;
        double get_z() const;
        double udaljenost2d(Tocka p)const;
        double udaljenost3d(Tocka p)const;


};

#endif // TOCKA_H
