#include <iostream>
#include<cstdlib>
using namespace std;

int main (){

inicio:


int n1,n2,res;
char opc;
		cout<<"digite o valor da nota: ";
		cin >>n1;

		cout<<"digite o valor da nota 2: ";
		cin >>n2;

		res=n1+n2;

		if(res >= 60){
			cout <<"Aluno aprovado"<<endl;
		}else if(res >= 40){
			cout<<"Aluno de recuperação"<< endl;
		}else{
			cout<<"Aluno reprovado"<< endl;
		}

		
		
	return 0;
	}



