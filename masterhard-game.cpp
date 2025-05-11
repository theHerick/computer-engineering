#include <iostream>
#include <time.h>
using namespace std;

int main() {

	int enter = 10;
	int tryy = 10;
	int digits = 4;
	string mode = "Normal";

	cout << endl << "          MASTERHARD" << endl << endl;
	cout << "1.PLAY" << endl;
	cout << "2.DIFFICULTY" << endl;
	cout << "3.NUMBER OF THE DAY" << endl;
	cout << "4.ABOUT" << endl;
	cout << "5.EXIT GAME" << endl;
	cin >> enter;
	system("clear");


	if (enter == 1) {
		// Game
		cout << endl << "          MASTERHARD" << endl << endl;
		cout << "Try: " << tryy << " " << "Mode: " << mode << " Digits: " << digits << endl;
		cout << "2.DIFFICULTY" << endl;
		cout << "3.NUMBER OF THE DAY" << endl;
		cout << "4.ABOUT" << endl;
		cout << "0.EXIT GAME" << endl;
		cin >> enter;
		
		if (enter == 0){
		    system("clear");
		    main();
		}
	}
	else if (enter == 2) {
		//dificuldade
		cout << endl << "          DIFFICULTY" << endl << endl;
		cout << "1.EASY" << endl;
		cout << "2.NORMAL" << endl;
		cout << "3.DIFFICULT" << endl;
		cout << "4.HARDCORE MERMAO" << endl;
		cout << "[ANYKEY].BACK";
		cin >> enter;
		system("clear");
	}
	else if (enter == 3) {
		// NUMERO DO DIA
		cout << "3";
	}
	else if (enter == 4) {
		cout << endl << "       MasterHard         " << endl << endl;
		cout << "Desenvolvido por Herick Betin Tiburski" << endl;
		cout << "e Mileny Beatrice Benner" << endl;
		cout << "Maio/2025" << endl;
		cout << "Professor: Thiago Felski" << endl;
		cout << endl;
		cout << "Regras do jogo:" << endl;
		cout << "- O sistema gera aleatoriamente uma sequencia secreta com 4 numeros, sem repeticoes." << endl;
		cout << "- O jogador tem um numero limitado de tentativas para descobrir essa sequencia." << endl;
		cout << "- A cada tentativa feita:" << endl;
		cout << "    * O jogo informa quantos elementos estao na posicao correta." << endl;
		cout << "    * E quantos estao corretos, mas na posicao errada." << endl;
		cout << "- O jogador deve usar essas informacoes para deduzir a combinacao correta." << endl;
		cout << "- Objetivo: acertar a sequencia antes que as tentativas acabem." << endl;
		cout << endl;
		cout << "Boa sorte!" << endl;
		cout << "0.BACK";
		cin >> enter;
		
		if (enter == 0){
		    system("clear");
		    main();
		}
	}


		if (enter == 5) {
			return 0;
		}

	enter = 10;
}

