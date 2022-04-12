#include <iostream>
#include <memory>
#include <cstdlib>
#include "Classes.hpp"
#include "Metodos.cpp"

void Jogo_com_10_cores();
void Jogo_com_4_cores();

//Maquina cria senhas com numeros aleatorias de 1-2
void Maquina_x_codebreaker_4cores_facil();
//Maquina cria senhas com numeros aleatorios de 1-4
void Maquina_x_codebreaker_4cores_dificl();

int main(){


    
    int escolha_de_jogo;


    do{
            trabalho::codemaker *t;
                std::cout << "1 Jogo com 4 cores \n";
                std::cout << "2 Jogo com 10 cores \n";
                std::cout << "3 Jogo Maquina x codebreaker 4 cores facils \n";
                std::cout << "4 Maquina x codebreaker 4 coresdificl \n";
                std::cout << "5 Parar de jogar \n";
                std::cin >> escolha_de_jogo;
        switch(escolha_de_jogo){
            case 1:
                {
                    Jogo_com_4_cores();
                }
                break;
            case 2:
                {
                    Jogo_com_10_cores();
                }
                break;
            case 3:
                {
                    Maquina_x_codebreaker_4cores_facil();
                }
                break;
            case 4:
                {
                    Maquina_x_codebreaker_4cores_dificl();
                }
                break;
            default:
                break;
        }

            
    }while (escolha_de_jogo < 5);
    
    return 0;
}



void Jogo_com_10_cores(){

    
    int primeira_entrada;

    int t_codigo;
    while (t_codigo !=4 && t_codigo !=6 )
    {   
        std::cout << "Digite o tamanho do código (4 ou 6) \n\n";
        std::cin >> t_codigo;
    }
    int n_palpites;
    while (n_palpites !=6 && n_palpites !=10 )
    {   
        std::cout << "Digite o numero de palpites (6 ou 10) \n\n";
        std::cin >> n_palpites;

    }
    int repitidas(5);
    while (repitidas !=1 && repitidas !=0 )
    {   
        std::cout << "Quer cores repetidas (0 para SIM, 1 para NÃO) \n\n";
        std::cin >> repitidas;
    }
    //int n_cores;

                    //std::shared_ptr<codebreaker> test1() t_codigo,  n_palpites )= std::make_shared<codebreaker>();
                    std::shared_ptr<trabalho::codebreaker> test1(new trabalho::codebreaker(t_codigo,  n_palpites));
                    //codebreaker test1{ t_codigo,  n_palpites };
                    std::shared_ptr<trabalho::codemaker> test(new trabalho::codemaker(*test1, t_codigo,  n_palpites, repitidas));
                    //codemaker test{ *test1, t_codigo,  n_palpites, repitidas};
        do{
                

                int repetidas = 0;

                std::cout << "1 Jogar \n";
                std::cout << "2 Sair \n";
                std::cin >> primeira_entrada;
            switch (primeira_entrada)
            {
                case 1:
                    {
                        int cont = 0;
                        int entry;
                        do{
                            
                            std::cout << "CODEMAKER escolha sua senha ó poderoso mestre das mentes: \n";
                            std::cout << "1 para vermelho \n";
                            std::cout << "2 para azul \n";
                            std::cout << "3 para amarelo \n";
                            std::cout << "4 para rosa \n";
                            std::cout << "5 para lilas \n";
                            std::cout << "6 para laranja \n";
                            std::cout << "7 para roxo \n";
                            std::cout << "8 para verde \n";
                            std::cout << "9 para turquesa \n";
                            std::cout << "10 para Amarelo creme \n";
                            std::cin >> entry;
                            switch(entry){
                                case 1:
                                    {
                                        //verificação de cor usada ou não
                                        int usada_ou_nao = 0;
                                        if(repetidas == 1){
                                            for(int i = 0; i < cont ; i++){
                                                if(test->jogada[i] == 1 ){
                                                    usada_ou_nao = 1;
                                                }

                                            }
                                        }
                                            if(usada_ou_nao == 0 ){
                                                test->codigo(1);
                                                cont++;
                                                if(cont == t_codigo){
                                                    cont = 0;
                                                    entry = 20;
                                                    std::cout << "Senha completa \n";
                                                }
                                            }else{
                                                std::cout << "COR JA USADA, TENTE OUTRA \n\n";
                                            }
                                    }
                                    break;
                                case 2:
                                    {
                                        //verificação de cor usada ou não
                                        int usada_ou_nao = 0;
                                        if(repetidas == 1){
                                            for(int i = 0; i < cont ; i++){
                                                if(test->jogada[i] == 2 ){
                                                    usada_ou_nao = 1;
                                                }

                                            }
                                        }
                                        
                                        if(usada_ou_nao == 0 ){
                                            test->codigo(2);
                                            cont++;
                                            if(cont == t_codigo){
                                                cont = 0;
                                                entry = 20;
                                                std::cout << "Senha completa \n";
                                            }
                                        }else{
                                                std::cout << "COR JA USADA, TENTE OUTRA \n\n";
                                            }
                                    }
                                    break;
                                case 3:
                                    {

                                        //verificação de cor usada ou não
                                        int usada_ou_nao = 0;
                                        if(repetidas == 1){
                                            for(int i = 0; i < cont ; i++){
                                                if(test->jogada[i] == 3 ){
                                                    usada_ou_nao = 1;
                                                }

                                            }
                                        }
                                        
                                            if(usada_ou_nao == 0 ){
                                            test->codigo(3);
                                            cont++;
                                            if(cont == t_codigo){
                                                cont = 0;
                                                entry = 20;
                                                std::cout << "Senha completa \n";
                                            }
                                        }else{
                                                std::cout << "COR JA USADA, TENTE OUTRA \n\n";
                                            }
                                    }
                                    break;
                                case 4:
                                    {
                                        //verificação de cor usada ou não
                                        int usada_ou_nao = 0;
                                        if(repetidas == 1){
                                            for(int i = 0; i < cont ; i++){
                                                if(test->jogada[i] == 4 ){
                                                    usada_ou_nao = 1;
                                                }

                                            }
                                        }
                                        if(usada_ou_nao == 0 ){
                                            test->codigo(4);
                                            cont++;
                                            if(cont == t_codigo){
                                                cont = 0;
                                                entry = 20;
                                                std::cout << "Senha completa \n";
                                            }
                                        }else{
                                                std::cout << "COR JA USADA, TENTE OUTRA \n\n";
                                            }
                                    }
                                    break;
                                case 5:
                                    {
                                        //verificação de cor usada ou não
                                        int usada_ou_nao = 0;
                                        if(repetidas == 1){
                                            for(int i = 0; i < cont ; i++){
                                                if(test->jogada[i] == 5 ){
                                                    usada_ou_nao = 1;
                                                }

                                            }
                                        }
                                        if(usada_ou_nao == 0 ){
                                            test->codigo(5);
                                            cont++;
                                            if(cont == t_codigo){
                                                cont = 0;
                                                entry = 20;
                                                std::cout << "Senha completa \n";
                                            }
                                        }else{
                                                std::cout << "COR JA USADA, TENTE OUTRA \n\n";
                                            }
                                    }
                                    break;
                                case 6:
                                    {
                                        //verificação de cor usada ou não
                                        int usada_ou_nao = 0;
                                        if(repetidas == 1){
                                            for(int i = 0; i < cont ; i++){
                                                if(test->jogada[i] == 6 ){
                                                    usada_ou_nao = 1;
                                                }

                                            }
                                        }
                                        if(usada_ou_nao == 0 ){
                                            test->codigo(6);
                                            cont++;
                                            if(cont == t_codigo){
                                                cont = 0;
                                                entry = 20;
                                                std::cout << "Senha completa \n";
                                            }
                                        }else{
                                                std::cout << "COR JA USADA, TENTE OUTRA \n\n";
                                            }
                                    }
                                    break;
                                case 7:
                                    {
                                        //verificação de cor usada ou não
                                        int usada_ou_nao = 0;
                                        if(repetidas == 1){
                                            for(int i = 0; i < cont ; i++){
                                                if(test->jogada[i] == 7 ){
                                                    usada_ou_nao = 1;
                                                }

                                            }
                                        }
                                        if(usada_ou_nao == 0 ){
                                            test->codigo(7);
                                            cont++;
                                            if(cont == t_codigo){
                                                cont = 0;
                                                entry = 20;
                                                std::cout << "Senha completa \n";
                                            }
                                        }else{
                                                std::cout << "COR JA USADA, TENTE OUTRA \n\n";
                                            }
                                    }
                                    break;
                                case 8:
                                    {
                                        //verificação de cor usada ou não
                                        int usada_ou_nao = 0;
                                        if(repetidas == 1){
                                            for(int i = 0; i < cont ; i++){
                                                if(test->jogada[i] == 8 ){
                                                    usada_ou_nao = 1;
                                                }

                                            }
                                        }
                                        if(usada_ou_nao == 0 ){
                                            test->codigo(8);
                                            cont++;
                                            if(cont == t_codigo){
                                                cont = 0;
                                                entry = 20;
                                                std::cout << "Senha completa \n";
                                            }
                                        }else{
                                                std::cout << "COR JA USADA, TENTE OUTRA \n\n";
                                            }
                                    }
                                    break;
                                case 9:
                                    {
                                        //verificação de cor usada ou não
                                        int usada_ou_nao = 0;
                                        if(repetidas == 1){
                                            for(int i = 0; i < cont ; i++){
                                                if(test->jogada[i] == 9 ){
                                                    usada_ou_nao = 1;
                                                }

                                            }
                                        }
                                        if(usada_ou_nao == 0 ){
                                            test->codigo(9);
                                            cont++;
                                            if(cont == t_codigo){
                                                cont = 0;
                                                entry = 20;
                                                std::cout << "Senha completa \n";
                                            }
                                        }else{
                                                std::cout << "COR JA USADA, TENTE OUTRA \n\n";
                                            }
                                    }
                                    break;
                                case 10:
                                    {
                                        //verificação de cor usada ou não
                                        int usada_ou_nao = 0;
                                        if(repetidas == 1){
                                            for(int i = 0; i < cont ; i++){
                                                if(test->jogada[i] == 10 ){
                                                    usada_ou_nao = 1;
                                                }

                                            }
                                        }
                                        if(usada_ou_nao == 0 ){
                                            test->codigo(10);
                                            cont++;
                                            if(cont == t_codigo){
                                                cont = 0;
                                                entry = 20;
                                                std::cout << "Senha completa \n";
                                            }
                                        }else{
                                                std::cout << "COR JA USADA, TENTE OUTRA \n\n";
                                            }
                                    }
                                    break;
                                default:
                                    break;

                            }
                        }while(entry < 11);


                        int entry2;
                        int contador = 0;
                        int contador2 = 0;
                        do{
                            
                            std::cout << "CODEBREAKER manda bala: \n";
                            std::cout << "1 para vermelho \n";
                            std::cout << "2 para azul \n";
                            std::cout << "3 para amarelo \n";
                            std::cout << "4 para rosa \n";
                            std::cout << "5 para lilas \n";
                            std::cout << "6 para laranja \n";
                            std::cout << "7 para roxo \n";
                            std::cout << "8 para verde \n";
                            std::cout << "9 para turquesa \n";
                            std::cout << "10 para Amarelo creme \n";
                            std::cout << "11 ver jogadas anteriores\n";
                            std::cout << "12 terminei minha jogada \n";
                            std::cin >> entry2;
                            switch(entry2){
                                case 1:
                                    {
                                        //verificação de cor usada ou não
                                        int usada_ou_nao = 0;
                                        if(repetidas == 1){
                                            for(int i = 0; i < contador ; i++){
                                                if(test->jogada[i] == 1 ){
                                                    usada_ou_nao = 1;
                                                }

                                            }
                                        }

                                        if(usada_ou_nao == 0 ){
                                            test1->codigo(1);
                                            contador++;
                                            if(contador == t_codigo){
                                                contador = 0;
                                                contador2++;
                                                if(contador2 == n_palpites){
                                                    entry2 = 10;
                                                }
                                                std::cout << "COMEÇE UMA NOVA JOGADA OU VEJA OS RESULTADOS ANTERIORES \n";
                                            }
                                        }else{
                                                std::cout << "COR JA USADA, TENTE OUTRA \n\n";
                                        }
                                    }
                                    break;
                                case 2:
                                    {

                                        int usada_ou_nao = 0;
                                        if(repetidas == 1){
                                            for(int i = 0; i < contador ; i++){
                                                if(test->jogada[i] == 2 ){
                                                    usada_ou_nao = 1;
                                                }

                                            }
                                        }

                                        if(usada_ou_nao == 0 ){
                                            test1->codigo(2);
                                            contador++;
                                            if(contador == t_codigo){
                                                contador = 0;
                                                contador2++;
                                                if(contador2 == n_palpites){
                                                    entry2 = 10;
                                                }
                                                std::cout << "COMEÇE UMA NOVA JOGADA OU VEJA OS RESULTADOS ANTERIORES \n";
                                            }
                                        }else{
                                                std::cout << "COR JA USADA, TENTE OUTRA \n\n";
                                        }
                                    }
                                    break;
                                case 3:
                                    {

                                        int usada_ou_nao = 0;
                                        if(repetidas == 1){
                                            for(int i = 0; i < contador ; i++){
                                                if(test->jogada[i] == 3 ){
                                                    usada_ou_nao = 1;
                                                }

                                            }
                                        }

                                        if(usada_ou_nao == 0 ){
                                            test1->codigo(3);
                                            contador++;
                                            if(contador == t_codigo){
                                                contador = 0;
                                                contador2++;
                                                if(contador2 == n_palpites){
                                                    entry2 = 10;
                                                }
                                                std::cout << "COMEÇE UMA NOVA JOGADA OU VEJA OS RESULTADOS ANTERIORES \n";
                                            }
                                        }else{
                                                std::cout << "COR JA USADA, TENTE OUTRA \n\n";
                                        }
                                    }
                                    break;
                                case 4:
                                    {
                                                                                int usada_ou_nao = 0;
                                        if(repetidas == 1){
                                            for(int i = 0; i < contador ; i++){
                                                if(test->jogada[i] == 4 ){
                                                    usada_ou_nao = 1;
                                                }

                                            }
                                        }

                                        if(usada_ou_nao == 0 ){
                                            test1->codigo(4);
                                            contador++;
                                            if(contador == t_codigo){
                                                contador = 0;
                                                contador2++;
                                                if(contador2 == n_palpites){
                                                    entry2 = 10;
                                                }
                                                std::cout << "COMEÇE UMA NOVA JOGADA OU VEJA OS RESULTADOS ANTERIORES \n";
                                            }
                                        }else{
                                                std::cout << "COR JA USADA, TENTE OUTRA \n\n";
                                        }
                                        
                                    }
                                    break;

                                case 5:
                                    {
                                                                                int usada_ou_nao = 0;
                                        if(repetidas == 1){
                                            for(int i = 0; i < contador ; i++){
                                                if(test->jogada[i] == 5 ){
                                                    usada_ou_nao = 1;
                                                }

                                            }
                                        }

                                        if(usada_ou_nao == 0 ){
                                            test1->codigo(5);
                                            contador++;
                                            if(contador == t_codigo){
                                                contador = 0;
                                                contador2++;
                                                if(contador2 == n_palpites){
                                                    entry2 = 20;
                                                }
                                                std::cout << "COMEÇE UMA NOVA JOGADA OU VEJA OS RESULTADOS ANTERIORES \n";
                                            }
                                        }else{
                                                std::cout << "COR JA USADA, TENTE OUTRA \n\n";
                                        }
                                        
                                    }
                                    break;


                                case 6:
                                    {
                                                                                int usada_ou_nao = 0;
                                        if(repetidas == 1){
                                            for(int i = 0; i < contador ; i++){
                                                if(test->jogada[i] == 6 ){
                                                    usada_ou_nao = 1;
                                                }

                                            }
                                        }

                                        if(usada_ou_nao == 0 ){
                                            test1->codigo(6);
                                            contador++;
                                            if(contador == t_codigo){
                                                contador = 0;
                                                contador2++;
                                                if(contador2 == n_palpites){
                                                    entry2 = 20;
                                                }
                                                std::cout << "COMEÇE UMA NOVA JOGADA OU VEJA OS RESULTADOS ANTERIORES \n";
                                            }
                                        }else{
                                                std::cout << "COR JA USADA, TENTE OUTRA \n\n";
                                        }
                                        
                                    }
                                    break;
                                case 7:
                                    {
                                                                                int usada_ou_nao = 0;
                                        if(repetidas == 1){
                                            for(int i = 0; i < contador ; i++){
                                                if(test->jogada[i] == 7 ){
                                                    usada_ou_nao = 1;
                                                }

                                            }
                                        }

                                        if(usada_ou_nao == 0 ){
                                            test1->codigo(7);
                                            contador++;
                                            if(contador == t_codigo){
                                                contador = 0;
                                                contador2++;
                                                if(contador2 == n_palpites){
                                                    entry2 = 20;
                                                }
                                                std::cout << "COMEÇE UMA NOVA JOGADA OU VEJA OS RESULTADOS ANTERIORES \n";
                                            }
                                        }else{
                                                std::cout << "COR JA USADA, TENTE OUTRA \n\n";
                                        }
                                        
                                    }
                                    break;
                                case 8:
                                    {
                                                                                int usada_ou_nao = 0;
                                        if(repetidas == 1){
                                            for(int i = 0; i < contador ; i++){
                                                if(test->jogada[i] == 8 ){
                                                    usada_ou_nao = 1;
                                                }

                                            }
                                        }

                                        if(usada_ou_nao == 0 ){
                                            test1->codigo(8);
                                            contador++;
                                            if(contador == t_codigo){
                                                contador = 0;
                                                contador2++;
                                                if(contador2 == n_palpites){
                                                    entry2 = 20;
                                                }
                                                std::cout << "COMEÇE UMA NOVA JOGADA OU VEJA OS RESULTADOS ANTERIORES \n";
                                            }
                                        }else{
                                                std::cout << "COR JA USADA, TENTE OUTRA \n\n";
                                        }
                                        
                                    }
                                    break;
                                case 9:
                                    {
                                                                                int usada_ou_nao = 0;
                                        if(repetidas == 1){
                                            for(int i = 0; i < contador ; i++){
                                                if(test->jogada[i] == 9 ){
                                                    usada_ou_nao = 1;
                                                }

                                            }
                                        }

                                        if(usada_ou_nao == 0 ){
                                            test1->codigo(9);
                                            contador++;
                                            if(contador == t_codigo){
                                                contador = 0;
                                                contador2++;
                                                if(contador2 == n_palpites){
                                                    entry2 = 20;
                                                }
                                                std::cout << "COMEÇE UMA NOVA JOGADA OU VEJA OS RESULTADOS ANTERIORES \n";
                                            }
                                        }else{
                                                std::cout << "COR JA USADA, TENTE OUTRA \n\n";
                                        }
                                        
                                    }
                                    break;

                                case 10:
                                    {
                                                                                int usada_ou_nao = 0;
                                        if(repetidas == 1){
                                            for(int i = 0; i < contador ; i++){
                                                if(test->jogada[i] == 10 ){
                                                    usada_ou_nao = 1;
                                                }

                                            }
                                        }

                                        if(usada_ou_nao == 0 ){
                                            test1->codigo(10);
                                            contador++;
                                            if(contador == t_codigo){
                                                contador = 0;
                                                contador2++;
                                                if(contador2 == n_palpites){
                                                    entry2 = 20;
                                                }
                                                std::cout << "COMEÇE UMA NOVA JOGADA OU VEJA OS RESULTADOS ANTERIORES \n";
                                            }
                                        }else{
                                                std::cout << "COR JA USADA, TENTE OUTRA \n\n";
                                        }
                                        
                                    }
                                    break;
                                case 11:
                                    {
                                        int g  = test->verificacao();
                                        if(g == t_codigo){
                                            std::cout << "VOCE GANHOU" << '\n';
                                        }
                                        for(int i = 0 ; i < test1->contador_jogadas; i++ ){
                                            for(int j = 0; j < t_codigo; j++){
                                                std::cout << test1->jogada_maker[j][i] << " ";
                                            }
                                            std::cout << " | ";
                                            for(int h = 0; h < t_codigo; h++){
                                                std::cout  << test->vetor1[i][h] << " ";
                                            }
                                            std::cout << '\n';
                                        }
                                    }
                                    break;
                                default:
                                    break;

                            }
                        }while(entry2 < 12);
                    }
                    break;
                default:
                    break;           
            }
        }while (primeira_entrada < 2);

    
    
}

void Jogo_com_4_cores(){

    int primeira_entrada;


    
    int t_codigo;
    while (t_codigo !=4 && t_codigo !=6 )
    {   
        std::cout << "Digite o tamanho do código (4 ou 6) \n\n";
        std::cin >> t_codigo;
    }
    int n_palpites;
    while (n_palpites !=6 && n_palpites !=10 )
    {   
        std::cout << "Digite o numero de palpites (6 ou 10) \n\n";
        std::cin >> n_palpites;

    }
    int repitidas(5);
    while (repitidas !=1 && repitidas !=0 )
    {   
        std::cout << "Quer cores repetidas (0 para SIM, 1 para NÃO) \n\n";
        std::cin >> repitidas;
    }
    //int n_cores;
    
                    std::shared_ptr<trabalho::codebreaker> test1(new trabalho::codebreaker(t_codigo,  n_palpites));
                    //codebreaker test1{ t_codigo,  n_palpites };
                    //codemaker test{ test1, t_codigo,  n_palpites, repitidas};
                    std::shared_ptr<trabalho::codemaker> test(new trabalho::codemaker(*test1, t_codigo,  n_palpites, repitidas));
        do{
                

                int repetidas = repetidas;

                std::cout << "1 Jogar \n";
                std::cout << "2 Sair \n";
                std::cin >> primeira_entrada;
            switch (primeira_entrada)
            {
                case 1:
                    {
                        int cont = 0;
                        int entry;
                        do{
                            
                            std::cout << "CODEMAKER escolha sua senha ó poderoso mestre das mentes: \n";
                            std::cout << "1 para vermelho \n";
                            std::cout << "2 para azul \n";
                            std::cout << "3 para amarelo \n";
                            std::cout << "4 para verde \n";
                            std::cin >> entry;
                            switch(entry){
                                case 1:
                                    {
                                        //verificação de cor usada ou não
                                        int usada_ou_nao = 0;
                                        if(repetidas == 1){
                                            for(int i = 0; i < cont ; i++){
                                                if(test->jogada[i] == 1 ){
                                                    usada_ou_nao = 1;
                                                }

                                            }
                                        }
                                            if(usada_ou_nao == 0 ){
                                                test->codigo(1);
                                                cont++;
                                                if(cont == t_codigo){
                                                    cont = 0;
                                                    entry = 10;
                                                    std::cout << "Senha completa \n";
                                                }
                                            }else{
                                                std::cout << "COR JA USADA, TENTE OUTRA \n\n";
                                            }
                                    }
                                    break;
                                case 2:
                                    {
                                        //verificação de cor usada ou não
                                        int usada_ou_nao = 0;
                                        if(repetidas == 1){
                                            for(int i = 0; i < cont ; i++){
                                                if(test->jogada[i] == 2 ){
                                                    usada_ou_nao = 1;
                                                }

                                            }
                                        }
                                        
                                        if(usada_ou_nao == 0 ){
                                            test->codigo(2);
                                            cont++;
                                            if(cont == t_codigo){
                                                cont = 0;
                                                entry = 10;
                                                std::cout << "Senha completa \n";
                                            }
                                        }else{
                                                std::cout << "COR JA USADA, TENTE OUTRA \n\n";
                                            }
                                    }
                                    break;
                                case 3:
                                    {

                                        //verificação de cor usada ou não
                                        int usada_ou_nao = 0;
                                        if(repetidas == 1){
                                            for(int i = 0; i < cont ; i++){
                                                if(test->jogada[i] == 3 ){
                                                    usada_ou_nao = 1;
                                                }

                                            }
                                        }
                                        
                                            if(usada_ou_nao == 0 ){
                                            test->codigo(3);
                                            cont++;
                                            if(cont == t_codigo){
                                                cont = 0;
                                                entry = 10;
                                                std::cout << "Senha completa \n";
                                            }
                                        }else{
                                                std::cout << "COR JA USADA, TENTE OUTRA \n\n";
                                            }
                                    }
                                    break;
                                case 4:
                                    {
                                        //verificação de cor usada ou não
                                        int usada_ou_nao = 0;
                                        if(repetidas == 1){
                                            for(int i = 0; i < cont ; i++){
                                                if(test->jogada[i] == 4 ){
                                                    usada_ou_nao = 1;
                                                }

                                            }
                                        }
                                        if(usada_ou_nao == 0 ){
                                            test->codigo(4);
                                            cont++;
                                            if(cont == t_codigo){
                                                cont = 0;
                                                entry = 10;
                                                std::cout << "Senha completa \n";
                                            }
                                        }else{
                                                std::cout << "COR JA USADA, TENTE OUTRA \n\n";
                                            }
                                    }
                                    break;
                                default:
                                    break;

                            }
                        }while(entry < 5);


                        int entry2;
                        int contador = 0;
                        int contador2 = 0;
                        do{
                            
                            std::cout << "CODEBREAKER manda bala: \n";
                            std::cout << "1 para vermelho \n";
                            std::cout << "2 para azul \n";
                            std::cout << "3 para amarelo \n";
                            std::cout << "4 para verde \n";
                            std::cout << "5 ver jogadas anteriores\n";
                            std::cout << "6 terminei minha jogada \n";
                            std::cin >> entry2;
                            switch(entry2){
                                case 1:
                                    {
                                        //verificação de cor usada ou não
                                        int usada_ou_nao = 0;
                                        if(repetidas == 1){
                                            for(int i = 0; i < contador ; i++){
                                                if(test->jogada[i] == 1 ){
                                                    usada_ou_nao = 1;
                                                }

                                            }
                                        }

                                        if(usada_ou_nao == 0 ){
                                            test1->codigo(1);
                                            contador++;
                                            if(contador == t_codigo){
                                                contador = 0;
                                                contador2++;
                                                if(contador2 == n_palpites){
                                                    entry2 = 10;
                                                }
                                                std::cout << "COMEÇE UMA NOVA JOGADA OU VEJA OS RESULTADOS ANTERIORES \n";
                                            }
                                        }else{
                                                std::cout << "COR JA USADA, TENTE OUTRA \n\n";
                                        }
                                    }
                                    break;
                                case 2:
                                    {

                                        int usada_ou_nao = 0;
                                        if(repetidas == 1){
                                            for(int i = 0; i < contador ; i++){
                                                if(test->jogada[i] == 2 ){
                                                    usada_ou_nao = 1;
                                                }

                                            }
                                        }

                                        if(usada_ou_nao == 0 ){
                                            test1->codigo(2);
                                            contador++;
                                            if(contador == t_codigo){
                                                contador = 0;
                                                contador2++;
                                                if(contador2 == n_palpites){
                                                    entry2 = 10;
                                                }
                                                std::cout << "COMEÇE UMA NOVA JOGADA OU VEJA OS RESULTADOS ANTERIORES \n";
                                            }
                                        }else{
                                                std::cout << "COR JA USADA, TENTE OUTRA \n\n";
                                        }
                                    }
                                    break;
                                case 3:
                                    {

                                        int usada_ou_nao = 0;
                                        if(repetidas == 1){
                                            for(int i = 0; i < contador ; i++){
                                                if(test->jogada[i] == 3 ){
                                                    usada_ou_nao = 1;
                                                }

                                            }
                                        }

                                        if(usada_ou_nao == 0 ){
                                            test1->codigo(3);
                                            contador++;
                                            if(contador == t_codigo){
                                                contador = 0;
                                                contador2++;
                                                if(contador2 == n_palpites){
                                                    entry2 = 10;
                                                }
                                                std::cout << "COMEÇE UMA NOVA JOGADA OU VEJA OS RESULTADOS ANTERIORES \n";
                                            }
                                        }else{
                                                std::cout << "COR JA USADA, TENTE OUTRA \n\n";
                                        }
                                    }
                                    break;
                                case 4:
                                    {
                                                                                int usada_ou_nao = 0;
                                        if(repetidas == 1){
                                            for(int i = 0; i < contador ; i++){
                                                if(test->jogada[i] == 4 ){
                                                    usada_ou_nao = 1;
                                                }

                                            }
                                        }

                                        if(usada_ou_nao == 0 ){
                                            test1->codigo(4);
                                            contador++;
                                            if(contador == t_codigo){
                                                contador = 0;
                                                contador2++;
                                                if(contador2 == n_palpites){
                                                    entry2 = 10;
                                                }
                                                std::cout << "COMEÇE UMA NOVA JOGADA OU VEJA OS RESULTADOS ANTERIORES \n";
                                            }
                                        }else{
                                                std::cout << "COR JA USADA, TENTE OUTRA \n\n";
                                        }
                                        
                                    }
                                    break;
                                case 5:
                                    {
                                        int g  = test->verificacao();
                                        if(g == t_codigo){
                                            std::cout << "VOCE GANHOU" << '\n';
                                            entry2 = 30;
                                        }
                                        for(int i = 0 ; i < test1->contador_jogadas; i++ ){
                                            for(int j = 0; j < t_codigo; j++){
                                                std::cout << test1->jogada_maker[j][i] << " ";
                                            }
                                            std::cout << " | ";
                                            for(int h = 0; h < t_codigo; h++){
                                                std::cout  << test->vetor1[i][h] << " ";
                                            }
                                            std::cout << '\n';
                                        }
                                        //std::cout << test;
                                    }
                                    break;
                                default:
                                    break;

                            }
                        }while(entry2 < 6);
                    }
                    break;            
                default:
                    break;
            }
        }while (primeira_entrada < 2);

        

}


void Maquina_x_codebreaker_4cores_facil(){
        int primeira_entrada;


    
    int t_codigo;
    while (t_codigo !=4 && t_codigo !=6 )
    {   
        std::cout << "Digite o tamanho do código (4 ou 6) \n\n";
        std::cin >> t_codigo;
    }
    int n_palpites;
    while (n_palpites !=6 && n_palpites !=10 )
    {   
        std::cout << "Digite o numero de palpites (6 ou 10) \n\n";
        std::cin >> n_palpites;

    }
    int repitidas(5);
    while (repitidas !=1 && repitidas !=0 )
    {   
        std::cout << "Quer cores repetidas (0 para SIM, 1 para NÃO) \n\n";
        std::cin >> repitidas;
    }
    //int n_cores;
    
                    std::shared_ptr<trabalho::codebreaker> test1(new trabalho::codebreaker(t_codigo,  n_palpites));
                    //codebreaker test1{ t_codigo,  n_palpites };
                    //codemaker test{ test1, t_codigo,  n_palpites, repitidas};
                    std::shared_ptr<trabalho::codemaker> test(new trabalho::codemaker(*test1, t_codigo,  n_palpites, repitidas));
                    int maior = 2;
                    int menor = 1;
                    for(int i = 0; i < t_codigo ; i++){
                            test->codigo(rand()%(maior-menor+1) + menor);
                    }
       
        do{
                

                int repetidas = 0;

                std::cout << "1 Jogar \n";
                std::cout << "2 Sair \n";
                std::cin >> primeira_entrada;
            switch (primeira_entrada)
            {
                case 1:
                    {


                        int entry2;
                        int contador = 0;
                        int contador2 = 0;
                        do{
                            
                            std::cout << "CODEBREAKER manda bala: \n";
                            std::cout << "1 para vermelho \n";
                            std::cout << "2 para azul \n";
                            std::cout << "3 para amarelo \n";
                            std::cout << "4 para verde \n";
                            std::cout << "5 ver jogadas anteriores\n";
                            std::cout << "6 terminei minha jogada \n";
                            std::cin >> entry2;
                            switch(entry2){
                                case 1:
                                    {
                                        //verificação de cor usada ou não
                                        int usada_ou_nao = 0;
                                        if(repetidas == 1){
                                            for(int i = 0; i < contador ; i++){
                                                if(test->jogada[i] == 1 ){
                                                    usada_ou_nao = 1;
                                                }

                                            }
                                        }

                                        if(usada_ou_nao == 0 ){
                                            test1->codigo(1);
                                            contador++;
                                            if(contador == t_codigo){
                                                contador = 0;
                                                contador2++;
                                                if(contador2 == n_palpites){
                                                    entry2 = 10;
                                                }
                                                std::cout << "COMEÇE UMA NOVA JOGADA OU VEJA OS RESULTADOS ANTERIORES \n";
                                            }
                                        }else{
                                                std::cout << "COR JA USADA, TENTE OUTRA \n\n";
                                        }
                                    }
                                    break;
                                case 2:
                                    {

                                        int usada_ou_nao = 0;
                                        if(repetidas == 1){
                                            for(int i = 0; i < contador ; i++){
                                                if(test->jogada[i] == 2 ){
                                                    usada_ou_nao = 1;
                                                }

                                            }
                                        }

                                        if(usada_ou_nao == 0 ){
                                            test1->codigo(2);
                                            contador++;
                                            if(contador == t_codigo){
                                                contador = 0;
                                                contador2++;
                                                if(contador2 == n_palpites){
                                                    entry2 = 10;
                                                }
                                                std::cout << "COMEÇE UMA NOVA JOGADA OU VEJA OS RESULTADOS ANTERIORES \n";
                                            }
                                        }else{
                                                std::cout << "COR JA USADA, TENTE OUTRA \n\n";
                                        }
                                    }
                                    break;
                                case 3:
                                    {

                                        int usada_ou_nao = 0;
                                        if(repetidas == 1){
                                            for(int i = 0; i < contador ; i++){
                                                if(test->jogada[i] == 3 ){
                                                    usada_ou_nao = 1;
                                                }

                                            }
                                        }

                                        if(usada_ou_nao == 0 ){
                                            test1->codigo(3);
                                            contador++;
                                            if(contador == t_codigo){
                                                contador = 0;
                                                contador2++;
                                                if(contador2 == n_palpites){
                                                    entry2 = 10;
                                                }
                                                std::cout << "COMEÇE UMA NOVA JOGADA OU VEJA OS RESULTADOS ANTERIORES \n";
                                            }
                                        }else{
                                                std::cout << "COR JA USADA, TENTE OUTRA \n\n";
                                        }
                                    }
                                    break;
                                case 4:
                                    {
                                                                                int usada_ou_nao = 0;
                                        if(repetidas == 1){
                                            for(int i = 0; i < contador ; i++){
                                                if(test->jogada[i] == 4 ){
                                                    usada_ou_nao = 1;
                                                }

                                            }
                                        }

                                        if(usada_ou_nao == 0 ){
                                            test1->codigo(4);
                                            contador++;
                                            if(contador == t_codigo){
                                                contador = 0;
                                                contador2++;
                                                if(contador2 == n_palpites){
                                                    entry2 = 10;
                                                }
                                                std::cout << "COMEÇE UMA NOVA JOGADA OU VEJA OS RESULTADOS ANTERIORES \n";
                                            }
                                        }else{
                                                std::cout << "COR JA USADA, TENTE OUTRA \n\n";
                                        }
                                        
                                    }
                                    break;
                                case 5:
                                    {
                                        int g  = test->verificacao();
                                        if(g == t_codigo){
                                            std::cout << "VOCE GANHOU" << '\n';
                                        }
                                        for(int i = 0 ; i < test1->contador_jogadas; i++ ){
                                            for(int j = 0; j < t_codigo; j++){
                                                std::cout << test1->jogada_maker[j][i] << " ";
                                            }
                                            std::cout << " | ";
                                            for(int h = 0; h < t_codigo; h++){
                                                std::cout  << test->vetor1[i][h] << " ";
                                            }
                                            std::cout << '\n';
                                        }
                                    }
                                    break;
                                default:
                                    break;

                            }
                        }while(entry2 < 6);
                    }
                    break;            
                default:
                    break;
            }
        }while (primeira_entrada < 2);


}


void Maquina_x_codebreaker_4cores_dificl(){
        int primeira_entrada;


    
    int t_codigo;
    while (t_codigo !=4 && t_codigo !=6 )
    {   
        std::cout << "Digite o tamanho do código (4 ou 6) \n\n";
        std::cin >> t_codigo;
    }
    int n_palpites;
    while (n_palpites !=6 && n_palpites !=10 )
    {   
        std::cout << "Digite o numero de palpites (6 ou 10) \n\n";
        std::cin >> n_palpites;

    }
    int repitidas(5);
    while (repitidas !=1 && repitidas !=0 )
    {   
        std::cout << "Quer cores repetidas (0 para SIM, 1 para NÃO) \n\n";
        std::cin >> repitidas;
    }
    //int n_cores;
    
                    std::shared_ptr<trabalho::codebreaker> test1(new trabalho::codebreaker(t_codigo,  n_palpites));
                    //codebreaker test1{ t_codigo,  n_palpites };
                    //codemaker test{ test1, t_codigo,  n_palpites, repitidas};
                    std::shared_ptr<trabalho::codemaker> test(new trabalho::codemaker(*test1, t_codigo,  n_palpites, repitidas));
                    int maior = 4;
                    int menor = 1;
                    for(int i = 0; i < t_codigo ; i++){
                            test->codigo(rand()%(maior-menor+1) + menor);
                    }
       
        do{
                

                int repetidas = 0;

                std::cout << "1 Jogar \n";
                std::cout << "2 Sair \n";
                std::cin >> primeira_entrada;
            switch (primeira_entrada)
            {
                case 1:
                    {


                        int entry2;
                        int contador = 0;
                        int contador2 = 0;
                        do{
                            
                            std::cout << "CODEBREAKER manda bala: \n";
                            std::cout << "1 para vermelho \n";
                            std::cout << "2 para azul \n";
                            std::cout << "3 para amarelo \n";
                            std::cout << "4 para verde \n";
                            std::cout << "5 ver jogadas anteriores\n";
                            std::cout << "6 terminei minha jogada \n";
                            std::cin >> entry2;
                            switch(entry2){
                                case 1:
                                    {
                                        //verificação de cor usada ou não
                                        int usada_ou_nao = 0;
                                        if(repetidas == 1){
                                            for(int i = 0; i < contador ; i++){
                                                if(test->jogada[i] == 1 ){
                                                    usada_ou_nao = 1;
                                                }

                                            }
                                        }

                                        if(usada_ou_nao == 0 ){
                                            test1->codigo(1);
                                            contador++;
                                            if(contador == t_codigo){
                                                contador = 0;
                                                contador2++;
                                                if(contador2 == n_palpites){
                                                    entry2 = 10;
                                                }
                                                std::cout << "COMEÇE UMA NOVA JOGADA OU VEJA OS RESULTADOS ANTERIORES \n";
                                            }
                                        }else{
                                                std::cout << "COR JA USADA, TENTE OUTRA \n\n";
                                        }
                                    }
                                    break;
                                case 2:
                                    {

                                        int usada_ou_nao = 0;
                                        if(repetidas == 1){
                                            for(int i = 0; i < contador ; i++){
                                                if(test->jogada[i] == 2 ){
                                                    usada_ou_nao = 1;
                                                }

                                            }
                                        }

                                        if(usada_ou_nao == 0 ){
                                            test1->codigo(2);
                                            contador++;
                                            if(contador == t_codigo){
                                                contador = 0;
                                                contador2++;
                                                if(contador2 == n_palpites){
                                                    entry2 = 10;
                                                }
                                                std::cout << "COMEÇE UMA NOVA JOGADA OU VEJA OS RESULTADOS ANTERIORES \n";
                                            }
                                        }else{
                                                std::cout << "COR JA USADA, TENTE OUTRA \n\n";
                                        }
                                    }
                                    break;
                                case 3:
                                    {

                                        int usada_ou_nao = 0;
                                        if(repetidas == 1){
                                            for(int i = 0; i < contador ; i++){
                                                if(test->jogada[i] == 3 ){
                                                    usada_ou_nao = 1;
                                                }

                                            }
                                        }

                                        if(usada_ou_nao == 0 ){
                                            test1->codigo(3);
                                            contador++;
                                            if(contador == t_codigo){
                                                contador = 0;
                                                contador2++;
                                                if(contador2 == n_palpites){
                                                    entry2 = 10;
                                                }
                                                std::cout << "COMEÇE UMA NOVA JOGADA OU VEJA OS RESULTADOS ANTERIORES \n";
                                            }
                                        }else{
                                                std::cout << "COR JA USADA, TENTE OUTRA \n\n";
                                        }
                                    }
                                    break;
                                case 4:
                                    {
                                                                                int usada_ou_nao = 0;
                                        if(repetidas == 1){
                                            for(int i = 0; i < contador ; i++){
                                                if(test->jogada[i] == 4 ){
                                                    usada_ou_nao = 1;
                                                }

                                            }
                                        }

                                        if(usada_ou_nao == 0 ){
                                            test1->codigo(4);
                                            contador++;
                                            if(contador == t_codigo){
                                                contador = 0;
                                                contador2++;
                                                if(contador2 == n_palpites){
                                                    entry2 = 10;
                                                }
                                                std::cout << "COMEÇE UMA NOVA JOGADA OU VEJA OS RESULTADOS ANTERIORES \n";
                                            }
                                        }else{
                                                std::cout << "COR JA USADA, TENTE OUTRA \n\n";
                                        }
                                        
                                    }
                                    break;
                                case 5:
                                    {
                                        int g  = test->verificacao();
                                        if(g == t_codigo){
                                            std::cout << "VOCE GANHOU" << '\n';
                                        }
                                        for(int i = 0 ; i < test1->contador_jogadas; i++ ){
                                            for(int j = 0; j < t_codigo; j++){
                                                std::cout << test1->jogada_maker[j][i] << " ";
                                            }
                                            std::cout << " | ";
                                            for(int h = 0; h < t_codigo; h++){
                                                std::cout  << test->vetor1[i][h] << " ";
                                            }
                                            std::cout << '\n';
                                        }
                                    }
                                    break;
                                default:
                                    break;

                            }
                        }while(entry2 < 6);
                    }
                    break;            
                default:
                    break;
            }
        }while (primeira_entrada < 2);


}
