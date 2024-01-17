// Variáveis -> Posições que o sistema operacional reserva na memória RAM identificadas por NOME e TIPO
// -> Comentário simples
/* -> Comentário grande */ 

#include <iostream>

using namespace std;

int main(){
	
	// TIPO NOME;
	// TIPO NOME = VALOR;
	
	int vidas = 0; // recebe números inteiros (positivos e negativos) - 10, 0, -5
	char letra = 'V'; // Recebe 1 caracter - 1bye - 'B' (uma letra)
	char letras[20]; // Vira um vetor e acaba aceitando mais de um caractere, nesse caso irá aceitar 20 caracteres
	double decimal = 5.2; // Recebe numeral com casas decimal - 2.49999 > não será vírgula é ponto
	float decimal2 = 5.2; // identico ao double mas com uma precisão menor - 2.5
	bool vivo = true; // true (verdadeiro) 1 ou false (falso) 0 (usado em testes condicionais)
	string nome = "Luffy"; // Recebe um texto - "Luffy"  
	
	cout << "Digite o numero de vidas: ";
	cin >> vidas;
	// cin -> lê do teclado e armazena em vidas
	cout << "Digite uma letra: ";
	cin >> letra;
	cout << "Dinheiro: ";
	cin >> decimal;
	cout << "Digite o seu nome: ";
	cin >> nome;
	
	// A variável pode ser modificada a qualquer momento
	//vidas = 100;
	
	cout << "\nVidas: " << vidas << "\n";
	cout << "Letra: " << letra << "\n";
	cout << "Dinheiro: " << decimal << "\n";
	cout << "Status: " << vivo << "\n";
	cout << "Nome: " << nome << "\n";
	
	return 0;
}
