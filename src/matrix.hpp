#ifndef MATRIX_HPP
#define MATRIX_HPP

#include <vector>
#include <stdexcept>

class Matrix{
    private:
        int rows, cols;
        float* data;

        public:
        //Constructor and Deconstructor
        Matrix(int r,int c);
        ~Matrix();

        //Core Functions (Get/Set)
        void set(int r, int c, float val);
        float get(int r, int c) const;

        //The Engine: Matrix Multiplication
        static Matrix multiply(const Matrix& A, const Matrix& B);

};

#endif