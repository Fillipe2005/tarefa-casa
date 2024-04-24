#include <iostream>
#include <locale.h>
using namespace std;
int main() {
  float nota1, nota2, nota3;
cout << "digite as notas a seguir: ";
  cin >> nota1 >> nota2 >> nota3;

  float media = (nota1 + nota2 + nota3) / 3;

  if (media >= 6) {
    cout << "aprovado";
  } else {
    cout << "reprovado";
  }
   return 0;
  }
