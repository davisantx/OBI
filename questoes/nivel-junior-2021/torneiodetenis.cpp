// código feito por davisantx

#include<iostream>
#include<vector>

using std::cout, std::cin;

int retornarGrupo(std::vector<char> situacao, std::vector<int> grupo) {
    unsigned quantidadeDeVitorias = 0;
    for(int i = 0; i < situacao.size(); ++i) {
      if(situacao[i] == 'V' || situacao[i] == 'v') ++quantidadeDeVitorias;
    }
    return grupo[quantidadeDeVitorias];
}

int main() {

   std::vector<char> situacao (6, ' ');
   std::vector<int> grupo = {-1, 3, 3, 2, 2, 1, 1};

   for(int i = 0; i < situacao.size(); ++i) {
    cout << "Resultado do jogo " << i + 1 << ": ";
    cin >> situacao[i];
   }

   cout << "Grupo pertencente: " << retornarGrupo(situacao, grupo);

   return 0;
}