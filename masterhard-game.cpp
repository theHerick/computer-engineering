#include <iostream>
#include <time.h>
using namespace std;

int main() {

	int enter = 10;
	int tryy = 10;
	int digits = 4;
	string mode = "Normal";

	while (enter != 0) {

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
			cout << "| Try: " << tryy << " " << "| Mode: " << mode << " | Digits: " << digits << " |" << endl;

			//gerar numero aleaorio
			int i, r;
			int v1, v2, v3, v4;
			srand(time(NULL));
			for (i = 0; i < 10; i++) {
				r = rand() % 10000;
			}
			v1 = r / 1000;
			v2 = r % 1000 / 100;
			v3 = r % 100 / 10;
			v4 = r % 10 / 1;
			
			// verificar 0 e substituir por 5
            if (v1 == 0){
                v1 = 5;
            }
            else if (v2 == 0){
                v2 = 5;
            }
            else if (v3 == 0){
                v3 = 5;
            }
            else if (v4 == 0){
                v4 = 5;
            }
			cout << r << " " << v1 << " " << v2 << " " << v3 << " " << v4 << endl;
			cin >> enter;
		}
		else if (enter == 2) {
			//dificuldade
			cout << endl << "          DIFFICULTY" << endl << endl;
			cout << "1.EASY" << endl;
			cout << "2.NORMAL" << endl;
			cout << "3.DIFFICULT" << endl;
			cout << "4.HARDCORE MERMAO" << endl;
			cin >> enter;

			if (enter == 1) {
				mode = "Easy";
			}
			else if (enter == 2) {
				mode = "Normal";
			}
			else if (enter == 3) {
				mode = "Difficult";
			}
			else if (enter == 4) {
				mode = "HardCore Mermao";
			}
			system("clear");
		}
		else if (enter == 3) {
			// NUMERO DO DIA
			cout << "3";
			cin >> enter;
			system("clear");
		}
		else if (enter == 4) {
			cout << endl << "         ABOUT         " << endl << endl;
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
			cin >> enter;
			system("clear");

		}
		else if (enter == 5) {
			cout << "Exiting...";
			return 0;
		}

		enter = 10;
	}
}
