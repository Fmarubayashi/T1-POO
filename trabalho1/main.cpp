#include "Pessoa.h"
#include "Aluno.h"
#include "DataHorario.h"
#include <string.h>
#include <iostream>
using namespace std;

int main()
{
    Pessoa pessoa1("Fernando", 485017253);
    pessoa1.getCPF();
    pessoa1.getnome();
    pessoa1.imprime();
    Aluno a1("Brunao", 2398293, 707070, 5.82, 7.5, 8, 4, 3);
    a1.getRA();
    a1.imprime();
    cout << a1.aprovado() << endl;
    cout << a1.sac() << endl;
    cout << "A nota para a sac: " << a1.notaSAC() << endl;
    DataHorario d1(21, 9, 1998, 21, 9, 19);
    d1.getAno();
    d1.getDia();
    d1.getMes();
    d1.getHora();
    d1.getMinuto();
    d1.getSegundo();

    d1.imprime(1);
    d1.imprimePorExtenso();

    return 0;
}