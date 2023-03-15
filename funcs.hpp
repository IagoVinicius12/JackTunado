#ifndef FUNCS_HPP
#define FUNCS_HPP
#include <vector>
using namespace std;
class Funcs
{
private:
    short int num;
    vector<short int> vet1;
public:
    Funcs();
    void ler();
    short int getnum();
    void setnum(short int num);
    int casosespeciais(vector<short int> vet1,int i, int j);

};
#endif

