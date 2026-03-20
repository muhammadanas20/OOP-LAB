#include <iostream>
using namespace std;

#define row 3
#define col 3
class Matrix{
    private:
    int Mat[row][col];
    public:
    Matrix(){}
    Matrix(int **mat){
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                Mat[i][j] = mat[i][j];
            }
        }
    }
    friend ostream& operator<<(ostream & out,const Matrix& M){
       for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                out << M.Mat[i][j] << " ";
            }
            out <<"\n";
        }
        out << "\n";
        return out;
    }
    Matrix operator+(Matrix m){
        Matrix tempM;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                tempM.Mat[i][j] = this->Mat[i][j] + m.Mat[i][j];
            }
        }
        return tempM;
    }
};
int main(){
    int arr1[3][3] = {{1,2,3},{1,2,3},{1,2,3}};
    int arr2[3][3] = {{1,2,3},{1,2,3},{1,2,3}};
    int *Mat1[3] = {arr1[0], arr1[1], arr1[2]};
    int *Mat2[3] = {arr2[0], arr2[1], arr2[2]};
    Matrix m1((int**)Mat1);
    Matrix m2((int**)Mat2);
    Matrix m3 = m1 + m2;
    cout << m3;
    return 0;
}