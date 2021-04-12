#include <iostream>
using namespace std;

int main() {
  // crie três variáveis: nome, idade e nome do filme favorito
  string nome;
  string filmeFavorito;
  int idade;

  // leia o primeiro nome
  cin >> nome;

  // leia a idade
  cin >> idade;

  // leia o nome do filme favorito
  cin >> filmeFavorito;

  // imprimir o conteúdo de todas as variáveis
  cout << "My name is " << nome << ", \n";
  cout << "I am " << idade << " years old and\n";
  cout << "my favorite movie is " << filmeFavorito << "\n"; 

  return 0;
}
