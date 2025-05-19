#include <iostream>
#include <time.h>
using namespace std;

int main() {
    
// ╔══════════════════════════════════════╗
// ║          VARIAVEIS INICIAIS          ║
// ╚══════════════════════════════════════╝

	int enter = 10; // entradas do jogador
	int tentativas_modo = 10; // tentativas do modo // Conf. Padrão = 10
	int contador_tentativas; // contador de tentativas
	int digits = 4; // quantidade de digitos do modo // Conf. Padrão = 4
	string mode = "Normal"; // modo // Conf. Padrão = Normal

	while (enter != 0) {

// ╔══════════════════════════════════════╗
// ║            MENU PRINCIPAL            ║
// ╚══════════════════════════════════════╝

		cout << endl << "          MASTERHARD" << endl << endl;
		cout << "1.JOGAR" << endl;
		cout << "2.DIFICULDADE" << endl;
		cout << "4.SOBRE" << endl;
		cout << "5.SAIR" << endl;
		cin >> enter;
		system("clear");
		
// ╔══════════════════════════════════════╗
// ║              MENU PLAY               ║
// ╚══════════════════════════════════════╝

		if (enter == 1) {
		    
// ╔══════════════════════════════════════╗
// ║              INTERFACE               ║
// ╚══════════════════════════════════════╝

			int tentativas = tentativas_modo + 1;
			contador_tentativas = 1;
			
			cout << endl << "          MASTERHARD" << endl << endl;
			cout << "| Tentativas: " << tentativas_modo << " " << "| Modo: " << mode << " | Digitos: " << digits << " |" << endl;

// ╔══════════════════════════════════════╗
// ║     GERADOR DE NÚMERO ALEATÓRIO      ║
// ╚══════════════════════════════════════╝
            
            // gerador de numero aleatorio
            
			int i, r;
			int v0, v1, v2, v3, v4;

			srand(time(NULL));
			for (i = 0; i < 10; i++) {
				r = rand() % 100000;
			}

			// dividir numeros

			v0 = r / 10000;
			v1 = r % 10000 / 1000;
			v2 = r % 1000 / 100;
			v3 = r % 100 / 10;
			v4 = r % 10 / 1;

			// tirar numeros acima de 4

			while (v0 > 6) {
				v0 = v0 - 3;
			}
			while (v1 > 6) {
				v1 = v1 - 3;
			}
			while (v2 > 6) {
				v2 = v2 - 3;
			}
			while (v3 > 6) {
				v3 = v3 - 3;
			}
			while (v3 > 6) {
				v3 = v3 - 3;
			}
			while (v4 > 6) {
				v4 = v4 - 3;
			}

			// tirar 0

			if (v0 < 1) {
				v0 = v0 + 2;
			}
			if (v1 < 1) {
				v1 = v1 + 1;
			}
			if (v2 < 1) {
				v2 = v2 + 3;
			}
			if (v3 < 1) {
				v3 = v3 + 6;
			}
			if (v4 < 1) {
				v4 = v4 + 4;
			}

			// numeros repetidos

			//v0
			if (v0 == v1) {
				v0++;
			}
			else if (v0 == v2) {
				v0++;
			}
			else if (v0 == v3) {
				v0++;
			}
			else if (v0 == v4) {
				v0++;
			}

			//v1
			if (v1 == v2) {
				v1++;
			}
			else if (v1 == v3) {
				v1++;
			}
			else if (v1 == v4) {
				v1++;
			}
			else if (v1 == v0) {
				v1++;
			}

			//v2
			if (v2 == v1) {
				v2++;
			}
			else if (v2 == v3) {
				v2++;
			}
			else if (v2 == v4) {
				v2++;
			}
			else if (v2 == v0) {
				v2++;
			}

			//v3
			if (v3 == v2) {
				v3++;
			}
			else if (v3 == v1) {
				v3++;
			}
			else if (v3 == v4) {
				v3++;
			}
			else if (v3 == v0) {
				v3++;
			}

			//v4
			if (v4 == v2) {
				v4++;
			}
			else if (v4 == v3) {
				v4++;
			}
			else if (v4 == v1) {
				v4++;
			}
			else if (v4 == v0) {
				v0++;
			}

// ╔══════════════════════════════════════╗
// ║                JOGO                  ║
// ╚══════════════════════════════════════╝


			int r0, r1, r2, r3, r4;
			int c1 = 0;//certo
			int e1 = 0;// posicao errada
			cout << "Digite seu palpite: "<< endl;
			
// ╔══════════════════════════════════════╗
// ║   QUANTIDADE DE DIGITOS PERMITIDOS   ║
// ╚══════════════════════════════════════╝

			//////// tamanho
			int t1, t2;

			if (digits == 4) {
				t1 = 1000;
				t2 = 10000;
			}
			else if (digits == 5) {
				t1 = 10000;
				t2 = 100000;
			}
			else if (digits == 3) {
				t1 = 100;
				t2 = 1000;
			}

// ╔══════════════════════════════════════╗
// ║         RESPOSTA DO JOGADOR          ║
// ╚══════════════════════════════════════╝

			/// Resposta jogador
			while (contador_tentativas < tentativas) {

				cin >> enter;

				if (enter < t1 || enter > t2) {
					cout << "Quantidade de digitos invalida!" << endl;
				}
				else {

					r0 = enter / 10000;
					r1 = enter % 10000 / 1000;
					r2 = enter % 1000 / 100;
					r3 = enter % 100 / 10;
					r4 = enter % 10 / 1;

					// Verificadores
					//zero

					if (r0 == v0) {
						c1++;
					}
					else if (r0 == v2) {
						e1++;
					}
					else if (r0 == v3) {
						e1++;
					}
					else if (r0 == v4) {
						e1++;
					}

					// primeiro

					if (r1 == v1) {
						c1++;
					}
					else if (r1 == v2) {
						e1++;
					}
					else if (r1 == v3) {
						e1++;
					}
					else if (r1 == v4) {
						e1++;
					}


					// segundo

					if (r2 == v2) {
						c1++;
					}
					else if (r2 == v1) {
						e1++;
					}
					else if (r2 == v3) {
						e1++;
					}
					else if (r2 == v4) {
						e1++;
					}


					// terceiro

					if (r3 == v3) {
						c1++;
					}
					else if (r3 == v2) {
						e1++;
					}
					else if (r3 == v1) {
						e1++;
					}
					else if (r3 == v4) {
						e1++;
					}

					// quarto

					if (r4 == v4) {
						c1++;
					}
					else if (r4 == v2) {
						e1++;
					}
					else if (r4 == v3) {
						e1++;
					}
					else if (r4 == v1) {
						e1++;
					}
					
// ╔══════════════════════════════════════╗
// ║        VERIFICADOR DE RESPOSTA       ║
// ╚══════════════════════════════════════╝

					// verificador de vitoria ou derrota & hud de acertos

//       ║   ╔══════════════════════════════════════╗
//       ╚═══║           SE FOR 4 DIGITOS           ║
//           ╚══════════════════════════════════════╝

					if (digits == 4) {

						cout << contador_tentativas << "º tentativa ---> ";
						cout << "Corretos: " << c1 << " Posicao errada: " << e1 << " Errados: " << 4-(c1+e1) << endl;
						c1 = 0;
						e1 = 0;


						if (r1 == v1 && r2 == v2 && r3 == v3 && r4 == v4) {
							contador_tentativas = 100;
							cout << endl << "Parabens! Voce ganhou!!";
							cin >> enter;
							system ("clear");
						}
						else {
							contador_tentativas++;
							if (contador_tentativas >= tentativas_modo) {
								cout << endl << "Voce perdeu o numero era " << v1 << v2 << v3 << v4;
								cin >> enter;
								system("clear");
							}
						}
					}
					
//       ║   ╔══════════════════════════════════════╗
//       ╚═══║           SE FOR 5 DIGITOS           ║
//           ╚══════════════════════════════════════╝

					else if (digits == 5) {

						cout << contador_tentativas << "º tentativa ---> ";
						cout << "Corretos: " << c1 << " Posicao errada: " << e1 << " Errados: " << 5-(c1+e1) << endl;
						c1 = 0;
						e1 = 0;

						if (r0 == v0 && r1 == v1 && r2 == v2 && r3 == v3 && r4 == v4) {
							contador_tentativas = 100;
							cout << endl << "Parabens! Voce ganhou!!";
							cin >> enter;
							system ("clear");
						}
						else {
							contador_tentativas++;
							if (contador_tentativas >= tentativas_modo) {
								cout << endl << "Voce perdeu o numero era " << v0 << v1 << v2 << v3 << v4;
								cin >> enter;
								system("clear");
							}
						}
					}
					
//       ║   ╔══════════════════════════════════════╗
//       ╚═══║           SE FOR 3 DIGITOS           ║
//           ╚══════════════════════════════════════╝

					else if (digits == 3) {

						cout << contador_tentativas << "º tentativa ---> ";
						cout << "Corretos: " << c1 << " Posicao errada: " << e1 << " Errados: " << 3-(c1+e1) << endl;
						c1 = 0;
						e1 = 0;

						if (r2 == v2 && r3 == v3 && r4 == v4) {
							contador_tentativas = 100;
							cout << endl << "Parabens! Voce ganhou!!";
							cin >> enter;
							system ("clear");
						}
						else {
							contador_tentativas++;
							if (contador_tentativas >= tentativas_modo) {
								cout << endl << "Voce perdeu o numero era " << v2 << v3 << v4;
								cin >> enter;
								system("clear");
							}
						}
					}
				}
			}
		}

// ╔══════════════════════════════════════╗
// ║         SELETOR DE DIFICULDADE       ║
// ╚══════════════════════════════════════╝
//       ║   ╔══════════════════════════════════════╗
//       ╚═══║              INTERFACE               ║
//           ╚══════════════════════════════════════╝

        		if (enter == 2) {
        			//dificuldade
        			cout << endl << "          DIFFICULTY" << endl << endl;
        			cout << "1.EASY" << endl;
        			cout << "2.NORMAL" << endl;
        			cout << "3.HARD" << endl;
        			cout << "4.HARDCORE MERMAO" << endl;
        			cin >> enter;
        			
//       ║   ╔══════════════════════════════════════╗
//       ╚═══║               SELETOR                ║
//           ╚══════════════════════════════════════╝
        
        			if (enter == 1) {
        				mode = "Easy";
        				tentativas_modo = 8;
        				digits = 3;
        			}
        			else if (enter == 2) {
        				mode = "Normal";
        				tentativas_modo = 10;
        				digits = 4;
        			}
        			else if (enter == 3) {
        				mode = "Hard";
        				tentativas_modo = 12;
        				digits = 5;
        			}
        			else if (enter == 4) {
        				mode = "HardCore Mermao";
        				tentativas_modo = 1;
        				digits = 3;
        			}
        			system("clear");
        		}
		
// ╔══════════════════════════════════════╗
// ║                SOBRE                 ║
// ╚══════════════════════════════════════╝

		else if (enter == 4) {
			cout << endl << "         ABOUT         " << endl << endl;
			cout << "Desenvolvido por Herick Betin Tiburski" << endl;
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
			
// ╔══════════════════════════════════════╗
// ║            FECHAR O JOGO             ║
// ╚══════════════════════════════════════╝

		}
		else if (enter == 5) {
			cout << "Exiting...";
			return 0;
		}

		enter = 10;
	}
}