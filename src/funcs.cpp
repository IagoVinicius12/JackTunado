#include<iostream>
#include <fstream>
#include<string.h>
#include <vector>
#include "funcs.hpp"
using namespace std;
Funcs::Funcs(){
    setnum(0);
}
void Funcs::setnum(short int num){
    this->num=num;
}
short int Funcs::getnum(){
    return this->num;
}
void Funcs::ler(){
    string n;
    fstream arq1;
    short int a=0;
    arq1.open("dataset/input.data");
    while(!arq1.eof()){
        vector<string> vet;
        if(arq1.is_open()){
        }
        if(a==0){
            arq1>>n;
            arq1>>n;
            a=stoi(n);
            setnum(a);
        }
        short int k=0, **mat;
        mat= new short int *[a];
        for(int i=0;i<a;i++){
            mat[i]= new short int [a];
        }
        getline(arq1,n);
        getline(arq1,n);
        if(n.length()==0){
            break;
        }
        char *m, vetorchar[n.length()-1];
        strcpy(vetorchar,n.c_str());
        for(int i=0;i <= a;i++){
            m=strtok(vetorchar," \n\0");
            while(m){
                if(*m!='\0'){
                    vet.push_back(m);
                }
                m=strtok(NULL," ");
            }
            if(i<a-1){
                getline(arq1,n);
                strcpy(vetorchar,n.c_str());
            }
        }
        vector<string>vetor;
        short int c=1,d=0;
        for(int i=0;i<int(vet.size())-1;i++){
            if(i!=((a*c)+d)){
                vetor.push_back(vet[i]);
            }
            else{
                c++;
                d++;
            }
        }
        for(int i=0;i<int(vetor.size());i++){
        }
        vector<short int> vet1;
        short int b=0;
        for(int i=0;i<int(vetor.size());i++){
            b=stoi(vetor[i]);
            vet1.push_back(b);
        }
        for(int i=0;i<a;i++){
            for(int j=0;j<a;j++){
                mat[i][j]=vet1[k];
                k++;
                cout<<mat[i][j]<<"\t";
            }
            cout<<endl;
        }
        cout<<"=================================="<<endl;
        andar(mat);
    }
    arq1.close();
}
void Funcs::andar(short int **mat){
    short int h=0,soma=0, i=0, j=0;
        soma+=mat[i][j];
        mat[i][j]=-1;
        while(h!=1){
            
                if((j==getnum()-1&&mat[i+1][j]>=mat[i][j-1]&&mat[i+1][j]>=mat[i+1][j-1])||(i+1< getnum() && mat[i+1][j]>=mat[i+1][j-1]&& mat[i+1][j]>= mat[i][j-1]&& mat[i+1][j]>=mat[i][j+1] && mat[i+1][j]>=mat[i+1][j+1])){
                    mat[i][j]=-1;
                    i++;
                    soma+=mat[i][j];
                    if(i== getnum()-1 && j==getnum() -1){
                        h=1;
                        mat[i][j]=-2;
                    }
                }
                else if( i==getnum()-1 ||(j+1< getnum()&& mat[i][j+1]>=mat[i+1][j-1] &&mat[i][j+1]>=mat[i][j-1] &&mat[i][j+1]>=mat[i+1][j] && mat[i][j+1]>=mat[i+1][j+1])){
                    mat[i][j]=-1;
                    j++;
                    soma+=mat[i][j];
                    if(j== getnum()-1 && i==getnum()-1){
                        h=1;
                        mat[i][j]=-2;
                    }
                }
                else if(i+1< getnum() &&j+1< getnum()&&mat[i+1][j+1]>=mat[i+1][j-1]&&mat[i+1][j+1]>=mat[i][j-1] && mat[i+1][j+1]>=mat[i+1][j] && mat[i+1][j+1]>=mat[i][j+1]){
                    mat[i][j]=-1;
                    i++;
                    j++;
                    soma+=mat[i][j];
                    if(i ==getnum()-1 &&j==getnum()-1){
                        h=1;
                        mat[i][j]=-2;
                    }
                }
                else if(j-1>=0&&(mat[i][j-1]>=mat[i+1][j-1])&&(mat[i][j-1]>mat[i][j+1] )&& (mat[i][j-1]>mat[i+1][j+1]) && (mat[i][j-1]>mat[i+1][j])){
                    mat[i][j]=-1;
                    j--;
                    soma+=mat[i][j];
                }
                else if(j-1>=0&&i+1<getnum()&&mat[i+1][j-1]>mat[i+1][j]&&mat[i+1][j-1]>mat[i][j+1] && mat[i+1][j-1]>mat[i+1][j+1] && mat[i+1][j-1]>mat[i][j-1]){
                    mat[i][j]=-1;
                    j--;
                    i++;
                    soma+=mat[i][j];
                }
                else{
                    int numero;
                    numero=casosespeciais(mat,i,j);
                    if(numero==1){
                        mat[i][j]=-1;
                        i++;
                        soma+=mat[i][j];
                    }
                    else if(numero==2){
                        mat[i][j]=-1;
                        j++;
                        soma+=mat[i][j];                    
                    }
                    else if(numero==3){
                        mat[i][j]=-1;
                        i++;
                        j++;
                        soma+=mat[i][j]; 
                    }
                    else if(numero==4){
                        mat[i][j]=-1;
                        j--;
                        soma+=mat[i][j];
                    }
                    else if(numero==5){
                        mat[i][j]=-1;
                        i++;
                        j--;
                        soma+=mat[i][j];
                    }
                }
        }
        cout<<"soma:"<<soma<<endl;
        for(i=0;i<getnum();i++){
            for(j=0;j<getnum();j++){
                cout<<mat[i][j]<<" \t";
            }
            cout<<endl;
        }
        cout<<"=================================="<<endl;
}
int Funcs::casosespeciais(short int **mat, short int i, short int j){
    if(j==0&& (mat[i+1][j]>mat[i][j+1]&& mat[i+1][j]>mat[i+1][j+1])){
        return 1;
    }
    else if(j==0&& (mat[i][j+1]>mat[i+1][j]&& mat[i][j+1]>mat[i+1][j+1])){
        return 2;
    }
    else if(j==0&& (mat[i+1][j+1]>mat[i+1][j]&& mat[i+1][j+1]>mat[i][j+1])){
        return 3;
    }
    else if(j==getnum()-1 &&(mat[i][j-1]>=mat[i+1][j]&&mat[i][j-1]>=mat[i+1][j-1])){
        return 4;
    }
    else if(j==getnum()-1 &&(mat[i+1][j-1]>=mat[i+1][j]&&mat[i+1][j-1]>=mat[i][j-1])){
        return 5;
    }
    return 0;
}