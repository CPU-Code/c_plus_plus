/*
 * @Author: cpu_code
 * @Date: 2020-06-19 12:18:37
 * @LastEditTime: 2020-06-19 12:20:59
 * @FilePath: \ccourse\use_class\randwalk\vect.h
 * @Gitee: https://gitee.com/cpu_code
 * @CSDN: https://blog.csdn.net/qq_44226094
 */ 
// vect.h -- Vector class with <<, mode state
#ifndef VECTOR_H_
#define VECTOR_H_

#include <iostream>

namespace VECTOR
{
    class Vector
    {
    public:
        enum Mode {RECT, POL};

    // RECT for rectangular, POL for Polar modes
    private:
        double x;          // horizontal value
        double y;          // vertical value

        double mag;        // length of vector
        double ang;        // direction of vector in degrees
        Mode mode;         // RECT or POL

    // private methods for setting values
        void set_mag();
        void set_ang();
        void set_x();
        void set_y();

    public:
        Vector();
        Vector(double n1, double n2, Mode form = RECT);
        void reset(double n1, double n2, Mode form = RECT);
        ~Vector();
        double xval() const  // report x value
        {
            return x;
        }       
        double yval() const // report y value
        {
            return y;
        }       
        double magval() const // report magnitude
        {
            return mag;
        }   
        double angval() const // report angle
        {
            return ang;
        }   
        void polar_mode();                    // set mode to POL
        void rect_mode();                     // set mode to RECT

        // operator overloading
        Vector operator+(const Vector & b) const;
        Vector operator-(const Vector & b) const;
        Vector operator-() const;
        Vector operator*(double n) const;

        // friends
        friend Vector operator*(double n, const Vector & a);
        friend std::ostream & operator<<(std::ostream & os, const Vector & v);
    };

}   // end namespace VECTOR
#endif