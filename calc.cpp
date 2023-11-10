#include <iostream>
using namespace std;

struct Matrix {
    int** data_ = nullptr;
    size_t n_ = 0u;
    size_t m_ = 0u;
};

void Conclusion(Matrix out, size_t n, size_t m);
void Construct(Matrix& out, size_t n, size_t m);
void Destruct(Matrix& in);
Matrix Copy(const Matrix& matrix);
Matrix Create(size_t n, size_t m);
Matrix Add(const Matrix& a, const Matrix& b);
Matrix Sub(const Matrix& a, const Matrix& b);
Matrix Mult(const Matrix& a, const Matrix& b);
void Transposition(Matrix& matrix);

int main() {
    int n1, m1;
    cin >> n1 >> m1;
    Matrix mat1 = Create(n1, m1);
    Conclusion(mat1, n1, m1);
    Transposition(mat1);
    Conclusion(mat1, n1, m1);
    return 0;
}

void Transposition(Matrix& matrix) {
    Matrix trans = Create(matrix.m_, matrix.n_);
    for (size_t i = 0; i < matrix.m_; ++i) {
        for (size_t j = 0; j < matrix.n_; ++j) {
            trans.data_[i][j] = matrix.data_[j][i];
        }
    }
    matrix = trans;
}

Matrix Mult(const Matrix& a, const Matrix& b) {
    if (a.m_ != b.n_) {
        return Matrix{nullptr, 0u, 0u};
    }
    Matrix newm = Create(a.n_, b.m_);
    Construct(newm, newm.n_, newm.m_);
    for (size_t i = 0; i < a.n_; ++i) {
        for (size_t j = 0; j < b.m_; ++j) {
            for (size_t k = 0; k < a.m_; ++k) {
                newm.data_[i][j] += a.data_[i][k] * b.data_[k][j];
            }
        }
    }
    return newm;
}

Matrix Sub(const Matrix& a, const Matrix& b) {
    if (a.n_ != b.n_ or a.m_ != b.m_) {
        return Matrix{nullptr, 0u, 0u};
    }
    Matrix newm = Create(a.n_, a.m_);
    for (size_t i = 0; i < a.n_; ++i) {
        for (size_t j = 0; j < a.m_; ++j) {
            newm.data_[i][j] = a.data_[i][j] - b.data_[i][j];
        }
    }
    return newm;
}

Matrix Add(const Matrix& a, const Matrix& b) {
    if (a.n_ != b.n_ or a.m_ != b.m_) {
        return Matrix{nullptr, 0u, 0u};
    }
    Matrix newm = Create(a.n_, a.m_);
    for (size_t i = 0; i < a.n_; ++i) {
        for (size_t j = 0; j < a.m_; ++j) {
            newm.data_[i][j] = a.data_[i][j] + b.data_[i][j];
        }
    }
    return newm;
}

Matrix Create(size_t n, size_t m) {
    Matrix mat;
    mat.n_ = n;
    mat.m_ = m;
    mat.data_ = new int* [mat.n_];
    for (size_t i = 0; i < mat.n_; ++i) {
        mat.data_[i] = new int[mat.m_];
    }
    for (size_t i = 0; i < mat.n_; ++i) {
        for (size_t j = 0; j < mat.m_; ++j) {
            mat.data_[i][j] = rand()%50;
        }
    }
    return mat;
}

Matrix Copy(const Matrix& matrix) {
    Matrix matcop = Create(matrix.n_, matrix.m_);
    for (size_t i = 0; i < matrix.n_; ++i) {
        for (size_t j = 0; j < matrix.m_; ++j) {
            matcop.data_[i][j] = matrix.data_[i][j];
        }
    }
    return matcop;
}

void Destruct(Matrix& in) {
    for (size_t i = 0; i < in.n_; ++i) {
        delete[]in.data_[i];
    }
    delete[]in.data_;
}

void Construct(Matrix& out, size_t n, size_t m) {
    for (size_t i = 0; i < out.n_; ++i) {
        for (size_t j = 0; j < out.m_; ++j) {
            out.data_[i][j] = 0;
        }
    }
}

void Conclusion(Matrix out, size_t n, size_t m) {
    for (size_t i = 0; i < out.n_; ++i) {
        for (size_t j = 0; j < out.m_; ++j) {
            cout << out.data_[i][j] << " ";
        }
        cout << endl;
    }
}

