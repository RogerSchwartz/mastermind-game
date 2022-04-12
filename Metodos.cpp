#include <iostream>
#include <memory>
#include <cstdlib>
#include "Classes.hpp"

    //CODEBREAKER
    void trabalho::codebreaker::codigo(int a){



                jogada_maker[contador_pecas][contador_jogadas] = a;
                //*(A + i*N + j)
                //*(jogada_maker + contador_pecas*4 + contador_jogadas);
                contador_pecas++;
                if(contador_pecas == t_do_codigo2){
                    contador_jogadas++;
                    contador_pecas = 0;
                }

    }


    void trabalho::codebreaker::print(){

            for(int i = 0 ; i < contador_pecas ; i++){
                std::cout << jogada_maker[i][0] << '\n';
            }
        }


    //CODEMAKER

    void trabalho::codemaker::codigo(int a){
            
                jogada[contador_pecas] = a;
                /*
                if(contador_pecas == 4){
                    contador_pecas = 0;
                }else{
                    contador_pecas++;
                }*/
                contador_pecas++;
        }

    int trabalho::codemaker::verificacao(){
                int vet_aux[t_do_codigo];
                int vet_aux2[t_do_codigo];
                int resultado = 0;
                int ver = 0;
                for(int i = 0; i< t_do_codigo; i++){
                        vet_aux[i] = t.jogada_maker[i][t.contador_jogadas-1];
                }
                for(int i = 0; i< t_do_codigo; i++){
                        vet_aux2[i] = jogada[i];
                }
                for(int i = 0; i < t_do_codigo; i++){
                    for(int j = 0; j < t_do_codigo ; j++){
                        if (rep == 1){
                             if(jogada[i] == t.jogada_maker[j][t.contador_jogadas-1]){
                                    if(i == j){
                                        //std::cout << "Olá";
                                            //std::cout << i << j << '\n';
                                            vetor1[linha_da_jogada][ver] = 5;
                                            resultado++;
                                            ver++;
                                            
                                    }else{
                                            //std::cout << i << j << '\n';
                                            vetor1[linha_da_jogada][ver] = 6;
                                            ver++;
                                    }
                                //i++; 
                            }
                        }

                        if(rep == 0){

                            for(int l = 0 ; l < t_do_codigo ; l++){
                                if(vet_aux2[l] == vet_aux[l]){
                                    //std::cout << "ola";
                                    vetor1[linha_da_jogada][l] = 5;
                                    vet_aux2[l] = 30;
                                    vet_aux[l] = 0;
                                }
                            }

                            for(int u = 0 ; u < t_do_codigo ; u++){
                                for(int y = 0 ; y < t_do_codigo ; y++){
                                    if(vet_aux2[u] == vet_aux[y]){
                                         //std::cout << "ola";
                                        vetor1[linha_da_jogada][y] = 6;
                                        vet_aux2[u] = 30;
                                        vet_aux[y] = 0;
                                        
                                    }
                                }
                            }

                        }

                    }
                    
            }


            linha_da_jogada++;
            return resultado;
        }

    //JOGO










