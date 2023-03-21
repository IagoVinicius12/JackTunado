#ifndef FUNCS_HPP
#define FUNCS_HPP
#include <vector>
using namespace std;
class Funcs
{
private:
    short int num, **mat;
    vector<short int> vet1;
public:
    Funcs();
    void ler();
    short int getnum();
    void setnum(short int num);
    int casosespeciais(short int **mat, short int i, short int j);
    void andar(short int **mat);

};
#endif

