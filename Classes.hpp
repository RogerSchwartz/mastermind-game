#ifndef mastemind_Classes
#define mastemind_Classes
#include <iostream>
#include <memory>
#include <cstdlib>


namespace trabalho{

    class sequencia{
        public:

        int *jogada = new int[6];
        int jogada_maker[6][10]; 

        
        int vetor1 [10][6];

        int contador_jogadas = 0;



        virtual void codigo(int a){}
  
    };

    class codebreaker: public sequencia{
        public:

            codebreaker(int h, int l): t_do_codigo2(h), n_de_jogadas2(l){}
            ~codebreaker(){};
            
            
            void codigo(int a);

            void print();

        private:
        int t_do_codigo2;
        int n_de_jogadas2 ;
        int contador_pecas = 0;    

    };


    class codemaker: public sequencia {
        public:
            codemaker();
            codemaker(const codebreaker& tt, int h, int l, int b): t{ tt }, t_do_codigo(h), n_de_jogadas(l), rep(b){
                //alocav(t_do_codigo);
                for(int i  = 0; i < n_de_jogadas; i++ ){
                    for(int j = 0; j< t_do_codigo ; j++){
                        vetor1[i][j] = 9;
                    }
                    
                }
            }
            ~codemaker(){};

            void codigo(int a);

            void print(){

                for(int i = 0 ; i < contador_pecas ; i++){
                    std::cout << jogada[i] << '\n';
                }
            }

            int verificacao();

        friend std::ostream &operator << (std::ostream & out , codemaker& s){
 
                for(int i = 0 ; i < s.contador_jogadas; i++ ){
                            for(int j = 0; j < s.t_do_codigo; j++){
                                out << s.jogada_maker[j][i] << " ";
                            }
                                out  << " | ";
                            for(int h = 0; h < s.t_do_codigo; h++){
                                out  << s.vetor1[i][h] << " ";
                            }
                    out << '\n';
                }

            return out;
        }
        private:
        
        const codebreaker& t;//AGREGAÇÃO
        int linha_da_jogada = 0;
        int contador_pecas = 0;
        int t_do_codigo;
        int n_de_jogadas;
        int rep;
        
        
        

    };

    //void Jogo_com_4_cores();

    void Jogo_com_10_cores();

    

    void Maquina_x_codebreaker_4cores_dificl();

    void Maquina_x_codebreaker_4cores_facil();

}

//#include "Metodos.cpp"
#endif