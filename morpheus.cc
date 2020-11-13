#include<iostream>
using namespace std;

int main(){

string title = R"( 
 __  __  ____  _____  _____  _    _ ______ _    _  _____   _____  _____   ____       _ ______ _____ _______ 
|  \/  |/ __ \|  __ \|  __ \| |  | |  ____| |  | |/ ____| |  __ \|  __ \ / __ \     | |  ____/ ____|__   __|
| \  / | |  | | |__) | |__) | |__| | |__  | |  | | (___   | |__) | |__) | |  | |    | | |__ | |       | |   
| |\/| | |  | |  _  /|  ___/|  __  |  __| | |  | |\___ \  |  ___/|  _  /| |  | |_   | |  __|| |       | |   
| |  | | |__| | | \ \| |    | |  | | |____| |__| |____) | | |    | | \ \| |__| | |__| | |___| |____   | |   
|_|  |_|\____/|_|  \_\_|    |_|  |_|______|\____/|_____/  |_|    |_|  \_\\____/ \____/|______\_____|  |_|   
                                                                                                                                                                                                                          
)";

cout << title << endl;

string asciiart = R"(
	_____
   /    /|_ ___________________________________________
  /    // /|                                          /|
 (====|/ //    An ET a day...                        / |
  (=====|/     keeps Josep-Llorenc away             / .|
 (====|/                                           / /||
/_________________________________________________/ / ||
|  _____________________________________________  ||  ||
| ||                                            | ||
| ||                                            | ||
| |                                             | |  

)";

cout << asciiart << endl;

string subtitle = R"(

##############################################################################################################
	 
VERSION ESP:

HERRAMIENTA DESARROLLADA POR DIEGO CARBALLIDO, ESTUDIANTE DE ING. INFORMÁTICA DE LA UNIVERSITAT POLITÈCNICA
DE CATALUNYA - FACULTAT D'INFORMÀTICA DE BARCELONA (UPC-FIB). ESTA HERRAMIENTA ES DE CÓDIGO ABIERTO Y ESTÁ
ABIERTA A NUEVAS IMPLEMENTACIONES Y/O MODIFICACIONES PREVIAS A UNA REVISIÓN INTERNA. EL CÓDIGO DE LA
HERRAMIENTA SE ENCUENTRA EN EL REPOSITORIO DE GITHUB https://github.com/dcarballido/morpheus

ESTA HERRAMIENTA HA SIDO DESARROLLADA PARA MEJORAR EL TRABAJO DE LOS ESTUDIANTES, POR FAVOR, HAGAMOS UN USO
RESONSABLE.

PARA CUALQUIER CONSUTLA, CONTACTA CON diego.carballido@estudiantat.upc.edu O BIEN POR IG: @diego_carballido

BARCELONA, 2020.
	 
VERSIÓN 1.0.0

-----------------------------------------------------------------------------------------------------------

ENG VERSION:

TOOL DEVELOPED BY DIEGO CARBALLIDO, CS STUDENT BY UNIVERSITAT POLITECNICA DE CATALUNYA - FACULTAT
D'INFORMATICA DE BARCELONA (UPC-FIB). THIS TOOL IS AN OPEN SOURCE RESOURCE AND IS OPENED TO NEW UPDATES AND
MODIFICATIONS BEFORE A PREVIOUS INTERNAL VERIFICATION. THIS TOOL SOURCE CODE IS ALL LOCATED IN A GITHUB
REPOSITORY https://github.com/dcarballido/morpheus

THIS TOOL HAS BEEN DEVELOPED TO IMPROVE STUDENTS WORKFLOW, PLEASE, LET'S MAKE A RESPONSABLE USE.

FOR ANY QUESTION, GET IN TOUCH THROUGH diego.carballido@estudiantat.upc.edu OR VIA IG: @diego_carballido

BARCELONA, 2020.
	 
VERSION 1.0.0

##############################################################################################################

)";

cout << subtitle << endl;

cout << R"(
Bienvenido a la herramienta MORPHEUS. Esta herramienta ha sido desarrollada con el fin de resolver y
commprovar una serie de operaciones y procesos a menudo necesarios en la asignatura de Introducción a los
Computadores (IC).
)" << endl;

// IN: Here is where the options of the tool are shown, listed by numerical order.
// OUT: This numbers will be assigned to a variable to check via a switch case, to display the different options.

		cout << R"(
		A continuación, selecciona una de los temas sobre los que quieras obtener información o bien, realizar alguno
		de los calculos disponibles:

		1.- Representación de los números naturales
		2.- Circuitos lógicos combinacionales (CLC)
		3.- Bloques aritméticos combinacionales para números naturales
		4.- Representación de números enteros y bloques aritméticos combinacionales
		5.- Circuitos lógicos secuenciales (CLS)
		6.- Procesadores de propósito específico (PPE)
		7.- Unidades de proceso general (UPG)

		Por favor, introduce el número del tema al que quieres acceder: 

		)" << endl;

bool exitProgram = false;
int optionMenu = 0;

cin >> optionMenu;

	switch (optionMenu) {
// here is where the option is selected and the different options displayed
	case 1: 
	// this is the process displayed if selected option 1
		optionMenu = 0;
		bool exitUnit = false;
		while(exitUnit == false){
		cout << R"(
		NÚMEROS NATURALES:

		Los números naturales (en inglés, 'unsigned integers' o 'non-negative integers')son básicamente todos los
		números positivos no decimales (y el número 0). 

		Para representar los números naturales (en el día a día representados en sistema decimal) utilizamos el
		sistema convencional en base B, la cual marca el sistema en el que representamos los números, en el caso del
		sistema decimal, b = 10, en cambio, en el sistema binario, b = 2, en hexadecimal, b = 16, en octal b = 8, etc.

		Qué quieres saber sobre los números naturales?

		1.- Traducción decimal a binario
		2.- Traducción binario a decimal
		3.- Traducción decimal a hexadecimal
		4.- Traducción hexadecimal a decimal
		5.- Traducción binario a hexadecimal
		6.- Traducción hexadecimal a binario

		Por favor, introduce el número de la traducción a la que quieres acceder y en la siguiente línea, la cifra que
		quieres traducir:

		)" << endl;
		int inputValue, auxInputValue, outputValue, a[10],i;
		cin >> optionMenu >> inputValue;

		auxInputValue = inputValue;

		// DEC - BIN

		if (optionMenu == 1){
			
			for(i=0; inputValue>0; i++){    
				a[i]=inputValue%2;    
				inputValue= inputValue/2;  
			}

		cout << R"(
		LA TRADUCCIÓN DEL NÚMERO DECIMAL )" << auxInputValue << " A BINARIO ES: ";

			for(i=i-1 ;i>=0 ;i--){    
				cout<<a[i];    
			}

		cout << endl;
		}

		// BIN - DEC

		if (optionMenu == 2){
			
			int num = inputValue;
    		int dec_value = 0;
    		int base = 1;
    		int temp = num;
    		while (temp) {
        		int last_digit = temp % 10;
        		temp = temp / 10;
 
        		dec_value += last_digit * base;
 
        		base = base * 2;
    		}

    	cout << R"(
		LA TRADUCCIÓN DEL NÚMERO BINARIO )" << auxInputValue << " A DECIMAL ES: " << dec_value << endl;
		}

		// QUIT THE UNIT, ACTUALLY, IT QUITS THE WHOLE PROGRAM

		cout << R"(
		QUIERES VOLVER AL MENÚ PRINCIPAL? [y/n])" << endl;
		char aux;
		cin >> aux;

		if (aux == 'y'){
			exitUnit = true;
		}

		if (aux == 'n') exitUnit = false;

		}
		break;
	}




}