#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

 int inicio () //Exibe In�cio
{
	using namespace std; 
	cout << "\n \t ---------- Inicializando, por favor, aguarde ---------- \n";
	cout << ".\n.\n.\n.\n.\n.\n.\n";
	cout << "\n \t ---------- Carregando tela de Login ---------- \n";	
	cout << "\n\n\n";
	
}

int login () //Exibe Login

{
	using namespace std;
	system("cls");
	cout << "\n\n\t\t\t ------------ L O G I N ------------\n";
	
	
}

int datahora () //Exibe data e Hora
{
		using namespace std;
		cout << "\n\n\t Data Atual  "; system ( "date /t" );
		cout <<"\n\t Hora Atual  "; system ("time /t");
		
}

int calculadora ()
{
		setlocale(LC_ALL, "Portuguese");
		using namespace std;
  		float num1, num2;
        char oper;
        char sair[6];

        do
        {
		cout << "\n\t Opera��es Dispon�veis "<<endl<<endl;
			cout << "\t'+' - Soma\n";
          	cout << "\t'-' - Subtra��o\n";
          	cout << "\t'*' - Multiplica��o\n";
          	cout << "\t'/' - Divis�o\n";
			printf("\n\t Se desejar ir pra sua caixa de e-mails, digite 0 0 0: ");
			


            cin >> num1;
            cin >> oper;
            cin >> num2;
            


            system("cls || clear");

            printf("\n\n\t Calculando: %.f %c %.0f = ", num1,oper,num2);

            
            switch( oper )
            {
                case '+':
                        printf("%.0f\n\n", num1 + num2);
                        break;

                case '-':
                        printf("%.0f\n\n", num1 - num2);
                        break;

                case '*':
                        printf("%.0f\n\n", num1 * num2);
                        break;

                case '/':
                        if(num2 != 0)
                            printf("%.0f\n\n", num1 / num2);
                        else
                            printf(" N�o existe divisao por 0, animal\n\n");
                        break;


                default:
                       break;


            }
    } while(num1 != 0 && oper != '0' && num2 != 0);
    
    system ("cls");

    
}


int email ()
{
		setlocale(LC_ALL, "Portuguese");
		using namespace std;
		
		int escolha, awnser, um, dois, tres, quatro, cinco, seis, sete, oito, nove, dez;
		
		cout << "\n\t ---------- CAIXA DE E-MAIL ---------- " << endl;
		cout << "\n\t Voc� tem uma nova mensagem!" << endl<<endl;
		cout << "\t Digite '1' para ler: "; cin >> escolha;
		
	if (escolha==1)
	{
	
	cout << "\n De: torres_@outlook.com.br"	<<endl;
	cout << " Assunto: De um programador para uma programadora."<<endl;
	
	cout << "\n\n Falaaaaa, palha�aaaa! Bem, esse � teu presente de anivers�rio, espero que esteja gostando."<<endl;
	cout << " Estou desenvolvendo tem mais ou menos uma semana e pouquinho. " << endl;
	cout << " Teve momentos que passei raiva, mas em geral, animado para o resultado final e que voc� pudesse gostar. Ahahah" << endl;
	cout << " Ent�o, curto e grosso, vim aqui desejar um �TIMO feliz anivers�rio pra ti, chatona!  " <<endl;
	cout << " Nunca pensei que foss�mos nos dar t�o bem. Sou grato principalmente pela nossa amizade! " <<endl;	
	cout << " Tu � chata demais, mas at� a�, normal, ningu�m � perfeito igual moi (eu) " <<endl;
	cout << " Espero que tu aproveite muito esse teu dia com todos que te querem bem!! " <<endl;
	cout << " Tu � uma mulher MUITO esfor�ada e todos sabemos disso, portanto, continue sendo essa pessoa maravilhosa!! " <<endl;
	cout << " N�o foi teu ca�a-palavras de velho, mas.. bem, espero que tenha sido t�o especial quanto! :3" <<endl;		
	cout << " Pode contar comigo sempre, mano!! De verdade, te considero demais, tmj! <3" <<endl;
	cout << "\n\n Obs: Ah! Detalhe, ainda n�o acabou o presente, digita at� 10 a� pra continuar o programa: " <<endl;

	cout << "\n\t 0" <<endl;
	fflush(stdin);
	cout << "\t "; cin >> um;
	fflush(stdin);
	cout << "\t "; cin >> dois;
	fflush(stdin);
	cout << "\t "; cin >> tres;
	fflush(stdin);
	cout << "\t "; cin >> quatro;
	fflush(stdin);
	cout << "\t "; cin >> cinco;
	fflush(stdin);
	cout << "\t "; cin >> seis;
	fflush(stdin);
	cout << "\t "; cin >> sete;
	fflush(stdin);
	cout << "\t "; cin >> oito;
	fflush(stdin);
	cout << "\t "; cin >> nove;
	fflush(stdin);
	cout << "\t "; cin >> dez;
	fflush(stdin);
	
	system ("cls");
	
	cout << "\n\t\t Ih�, digitou atoa. Minha cabe�a j� t� doendo, ent�o tem mais nada n�o. TROLLEI!!!\n\n";
	exit (0);
	}
	
	else 
		{
		cout << "\n\t � s� 1, vei." <<endl;
		email();
		}
	
	}
	
int logoff ()
{
	
}

int logout ()
{
	setlocale(LC_ALL, "Portuguese");
	using namespace std;	
	cout << "\n\t Pressione qualquer tecla para continuar o desligamento" << endl << endl;
	system("pause");
	exit(0);
	
}

	//---------- Fun��es Acima ----------//

main () 

{
	using namespace std; 
	setlocale(LC_ALL, "Portuguese");
	
	char opcao2, nome[15], nascimento[15];
	int opcao, quatro, tres, dois, um, zero, resposta;
	
	inicio ();
	
	cout << "\t ===========\n\t          30%";
	
	cout << "\n\n\t Erro 171: meu programador � script kid e me fez na gambiarra. \n\n\t Digite '1' para me ajudar a terminar de carregar....";
	
	cout << "\n\n\t "; 
	cin >> opcao;
	

	
	while (opcao!=1)
	{		
		cout << "\n\t Tente novamente: "; 
		cin >> opcao;
	}
	
	if (opcao==1)
	
		cout << "\n\t ========================\n\t                       50%\n";
		
	cout << "\n\t Tem certeza que deseja continuar? (Sim/N�o)\n"; 
	cout << "\n\t ";
	cin >> opcao2;
	
	switch (opcao2)
	{
		case 'S': cout << "\n\t ===============================================\n\t                                            100%\n";
		break;
		
		case 's': cout << "\n\t ===============================================\n\t                                            100%\n";
		break;

		case 'Sim': cout << "\n\t ===============================================\n\t                                            100%\n";
		break;
		
		case 'sim': cout << "\n\t ===============================================\n\t                                            100%\n";
		break;	
		
		case 'SIM': cout << "\n\t ===============================================\n\t                                            100%\n";
		break;		

		case 'N': cout << "\n\t Fez um bem para voc� mesma. Muitos bugs daqui para frente. \n";
		break;
		
		case 'N�o': cout << "\n\t Fez um bem para voc� mesma. Muitos bugs daqui para frente.\n";
		break;
		
		case 'n': cout << "\n\t Fez um bem para voc� mesma. Muitos bugs daqui para frente.\n";
		break;
		
		case 'N�O': cout << "\n\t Fez um bem para voc� mesma. Muitos bugs daqui para frente.\n";
		break; 
		
		
		default: cout << "\n\t Resposta n�o esperada. C�digo: 0xc000000f. Software meia boca encerrado. ";
	
	}
	
	if (opcao2=='S'||opcao2=='s'||opcao2=='Sim'||opcao2=='SIM'||opcao2=='sim')
	{
	
	cout << "\n\t Iniciando  carregamento. Termine a contagem, por favor \n\n\t 5";
	fflush(stdin);
	
	cout << "\n\t "; cin >> quatro;
	fflush(stdin);
	cout << "\t "; cin >> tres;
	fflush(stdin);
	cout << "\t "; cin >> dois;
	fflush(stdin);
	cout << "\t "; cin >> um;
	fflush(stdin);
	cout << "\t "; cin >> zero;
	fflush(stdin);
	
	}
	
	else
		exit (0);
	
	
	
	login ();

	cout << "\n\n\tSeu Nome: "; cin >> nome;
	fflush(stdin);
	cout << "\n\tSua Data Nascimento: "; cin >> nascimento;
	fflush(stdin);
	
	if ((strcmp(nome, "Gabriel")==0) && (strcmp(nascimento, "17/04/1997")==0))
	{
		
		system("cls");

		cout << "\n\t\t  Ruindows 1.0.1"<< endl;
		cout << "\t\t_________________ ";
		
		datahora ();
		
		cout << "\n\t -"<<endl<<endl;
		
		cout << "\t1. Calculadora" << endl << endl;
		cout << "\t2. E-mail" << endl << endl;
		cout << "\t3. Logout" << endl << endl;
		cout << "        "; cin >> resposta;
		system ("cls");
		
		switch (resposta)
		{
			case 1: calculadora ();
			case 2: email ();
			case 3: logout ();
			default: "\t\tOp��o Inv�lida";
		}

	}
	
	else 
		cout << "\n\tUsu�rio inv�lido!";	
		
	
		
}
