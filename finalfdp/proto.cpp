#include <iostream>
using namespace std;
int main()
{
       int SI=1;
       int NO=2;
       int Desicion1=0;
       int Desicion2=0;
       int Jugador1=0;
       int Jugador2=0;
       int Rondas=0;
       int ContadorJ1=0;
       int ContadorJ2=0;
       
            cout<<"==============================================================================="<<"\n";
            cout<<"             Bienvenido a: "<<"\n";
            cout<<"             ¿Desea jugar?"<<"\n"<<"      0. SI                1. NO "<<"\n";
            cin >> Desicion1;
            cout<<"\n";

       switch (Desicion1)                            
       {
            case 0://Si elige la opcion 0 se abre el menu del Juego.
            cout<<"Ha escogido la opcion: "<<Desicion1<<" "<<"\n";
            cout<<"==============================================================================="<<"\n";
            cout <<"Bienvenido al menu principal "<< "\n";
            cout <<" Escoga una de las opciones siguientes: "<< "\n";
            cout <<"  0. Reglas del duelo "<< "\n";
            cout <<"  1. Seleccion de personajes J1 yJ2 "<<"\n";
            cout <<"  2. Comenzar Combate"<< "\n";
            cin>>Desicion2;
            cout<<"\n";
            
            switch (Desicion2)
            {
                case 0://Si elige la opcion 0 se abre la ventana para configurar las reglas del Juego.
                cout<<"Ha escogido la opcion: "<<Desicion2<<" "<<"\n";
                cout<<"Reglas del Duelo"<<"\n";
                cout<<"Ingrese la cantidad de Rondas que desea jugar: "<<"\n";
                cin>>Rondas;
                cout<<"Usted ha seleccionado "<<Rondas<<" rondas de juego "<<"\n";
                break;
                
                case 1://Si elige la opcion 1 se abre la opcion de personajes para ambos jugadores.
                cout<<"Ha escogido la opcion: "<<Desicion2<<" "<<"\n";
                cout<<"Selecione un personaje J1. "<<"\n";
                cout<<" 1.P1 - 2.P2 - 3.P3 - 4.P4 - 5.P5"<<"\n";
                cin>>Jugador1;
                cout<<"\n";
                cout<<"Seleccione un personaje J2. "<<"\n";
                cout<<" 1.P1 - 2.P2 - 3.P3 - 4.P4 - 5.P5"<<"\n";
                cin>>Jugador2;
                cout<<"\n";
                break;
                
                case 2://Si elige la opcion 2 se inicia el juego.
                cout<<"Ha escogido la opcion: "<<Desicion2<<" "<<"\n";
                cout<<"==============================================================================="<<"\n";
                cout<<"Ya comienza el duelo "<<"\n";
                cout<<"Jugador 1 escoga una opcion "<<"\n";
                cout<<" 1.Piedra - 2.Papel - 3.Tijera "<<"\n";
                cin>>Jugador1;
                cout<<"\n";
                cout<<"Jugador 2 escoga una opcion "<<"\n";
                cout<<" 1.Piedra - 2.Papel - 3.Tijera "<<"\n";
                cin>>Jugador2;
                
                                if (Jugador1==Jugador2)
                                {
                                    cout <<"Empate "<< "\n";
                                }
                                
                                else if (Jugador1==1&&Jugador2==2)
                                {
                                    cout <<" Ganaste Jugador 2 , Perdiste Jugador 1"<< "\n";
                                }
                                
                                else if (Jugador1==2&&Jugador2==3)
                                {
                                    cout <<" Ganaste Jugador 2 , Perdiste Jugador 1"<< "\n";
                                } 
                                
                                else if (Jugador1==1&&Jugador2==3)
                                {
                                    cout <<" Ganaste Jugador 1 , Perdiste Jugador 2"<< "\n";
                                }
                                
                                else if (Jugador1==2&&Jugador2==1)
                                {
                                    cout <<" Ganaste Jugador 1 , Perdiste Jugador 2"<< "\n";
                                }
                                
                                else if (Jugador1==3&&Jugador2==2)
                                {
                                    cout <<" Ganaste Jugador 1 , Perdiste Jugador 2"<< "\n";
                                }
                                
                break;
                
            }
            break;

            case 1: //Si elige la opcion 1 se cierra el juego.
            cout<<"Ha escogido la opcion: "<<Desicion1<<" "<<"\n";
            cout <<"Se ha cerrado el juego" <<"\n";
            break;

            default: //Si no elige ninguna de la anteriores, el juego envia un mensaje que informa el error y cierra el juego.
            cout << "No existe la opcion seleccionada"<<"\n";

       }
       return 0;
}