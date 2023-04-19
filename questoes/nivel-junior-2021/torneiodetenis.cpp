// código feito por davisantx

#include<iostream>
#include<vector>

using std::cout, std::cin;

int retornarGrupo(std::vector<char> situacao) {
    unsigned quantidadeDeVitorias = 0;
    for(int i = 0; i < situacao.size(); ++i) {
      if(situacao[i] == 'V' || situacao[i] == 'v') ++quantidadeDeVitorias;
    }
    if(quantidadeDeVitorias == 0) {
        return -1;
    }else if(quantidadeDeVitorias <= 2) {
        return 3;
    }else if(quantidadeDeVitorias <= 4) {
        return 2;
    }else if(quantidadeDeVitorias <= 6) {
        return 1;
    }
}

int main() {

   std::vector<char> situacao (6, ' ');

   for(int i = 0; i < situacao.size(); ++i) {
    cout << "Resultado do jogo " << i + 1 << ": ";
    cin >> situacao[i];
   }

   cout << "Grupo pertencente: " << retornarGrupo(situacao);

    return 0;
}