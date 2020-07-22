#include <iostream>
#include <locale.h>
#include <string.h>
#include <conio.h>
using namespace std;

int main()
{  
    
    int opc, edad; 
    char respuesta1, respuesta2, respuesta3, respuesta4, sexo; 
    char nombre[50];
    setlocale(LC_ALL,"Spanish");
    

    cout << "-----------------------MENU------------------------- " << endl;
    cout << "____________________________________________________ " << endl;
    cout << "---1------NUEVA METODOLOGIA DE ESTUDIO UTH (ZOOM)--- " << endl;
    cout << "---2------TIENDA DE VIDEOJUEGOS MAX----------------- " << endl;
    cout << "---3----------------PANQUESITOS--------------------- " << endl;
    cout << "____________________________________________________ " << endl;
    cout << "**************************************************** " << endl;

    cout << " DIGITE UNA OPCION: " << endl;
    cin  >> opc;

    switch (opc)
    {
        case 1: 
            
            cout << "----ENCUESTA SOBRE ZOOM----: " << endl;
            cout << "---------------------------: " << endl;
            cout << "Digite su nombre: " << endl ;
            cin >> nombre;
            fflush(stdin);
            cout << "Cual es su edad:" << endl;
            cin  >> edad;
            fflush(stdin);
            cout << "sexo:" << endl;
            cin  >> sexo;
            fflush(stdin);
            cout << " " << endl;
            cout << " " << endl;
            cout << "1. Utilizas la aplicación zoom " << endl;
            cout << "1. Si\t\t\t 2. No" << endl;
            cin  >> respuesta1;
            fflush(stdin);
            cout << "2. En que dispositivo la utilizas" << endl;
            cout << "1. Telefono\t\t\t 2. Laptop" << endl; 
            cin  >> respuesta2;
        break;

        case 2:
            cout << " VIDEOS Y MAS: " << endl;
            cout << "----ENCUESTA SOBRE ATENCION AL CLIENTE---- " << endl;
            cout << "------------------------------------------ " << endl;
            cout << "Digite su nombre: " << endl ;
            cin  >> nombre;
            fflush(stdin);
            cout << "Cual es su edad:" << endl;
            cin  >> edad;
            fflush(stdin);
            cout << "sexo:" << endl;
            cin  >> sexo;
            fflush(stdin);
            cout << " " << endl;
            cout << " " << endl;
            cout << "1. es de su agrado la atencion brindada por nuestro personal" << endl;
            cout << "a. Regular\t\tb. Muy Mal\t\tc. Excelente\t\td. Bien; " << endl;
            cin  >>  respuesta1;
            fflush(stdin);
            cout << "2. como concideras la imagen de la tienda: " << endl;
            cout << "a. Excelente\t\tb. Mal\t\tc. Muy mal " << endl;
            cin  >> respuesta2;
            fflush(stdin);
        break;
        case 3:
            cout << " PANQUESITOS DE JALEA " << endl;
            cout << "----ENCUESTA SOBRE ATENCION AL CLIENTE---- " << endl;
            cout << "--------------------------: " << endl;
            cout << "Digite su nombre: " << endl ;
            cin  >> nombre;
            fflush(stdin);
            cout << "Cual es su edad:" << endl;
            cin  >> edad;
            fflush(stdin);
            cout << "sexo:" << endl;
            cin  >> sexo;
            fflush(stdin);
            cout << " " << endl;
            cout << " " << endl;
            cout << "1. ha consumido panquesitos de jalea " << endl;
            cout << "a. si\t\tb. no\t\tc. aveces\t\td. nunca " << endl;
            cin  >>  respuesta1;
            fflush(stdin);
            cout << "2. De que tamaño le gustarian los panquesitos " << endl;
            cout << "a. grandes\t\tb. Medianos\t\tc. Pequeños " << endl;
            cin  >> respuesta2;
            cout << "3. Que tipo de jalea le gustaria en su panquesito " << endl;
            cout << "a. fresa\t\tb. uva\t\tc. leche condensada\t\td. chocolate " << endl;
            cin  >>  respuesta3;
            fflush(stdin);
            cout << "4.cuanto estaria dispuesto a pagar por una orden de panquesitos " << endl;
            cout << "a. lps.10\t\tb. lps.15\t\tc. lps.20 " << endl;
            cin  >> respuesta4;
            fflush(stdin);
        break;
        
        default:
        break;
    }

    return 0;
}


