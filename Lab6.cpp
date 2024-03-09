#include <iostream>
#include <string>

using namespace std;

class libro
{
private:
    string autor;
    int paginas;
    int publicacion;
    string titulo;

public:
    libro(string a, int p, int pu, string t){
        autor = a;
        paginas = p;
        publicacion = pu;
        titulo = t;
    };
        void mostrarInfo(){
            cout<<"Autor: "<< autor <<" Paginas: "<< paginas <<" Publicacion: "<< publicacion <<" titulo: "<< titulo <<endl;
        };
};

class Estudiante
{
private:
    string Nombre;
    string Apellido;
    int Edad;
    string Curso;

public:
    Estudiante(string N, string A,int E, string C){
        Nombre = N;
        Apellido = A;
        Edad = E;
        Curso = C;
    };
        void mostrarInfo(){
            cout<<"Nombre: "<<Nombre <<" Apellido: "<< Apellido <<" Edad: "<< Edad <<" Curso: "<< Curso <<endl;
        };
};

class Calculadora
{
private:
    int num1;
    int num2;

public:

        void suma(int a, int b){
            cout<<"La suma de los valores es: "<< a + b<<endl;
        };
        void resta(int a, int b){
            cout<<"La resta de los valores es: "<< a - b<<endl;
        };
        void mult(int a, int b){
            cout<<"La multiplicacion de los valores es: "<< a * b<<endl;
        };
        void divi(int a, int b){
            cout<<"La divicion de los valores es: "<< a / b<<endl;
        };
};

class CuentaBancaria
{
private:
    string nombre_titular;
    int NumCuenta;

public:
    int saldo;
    int depositar;
    int retirar;
    int saldoactu;

    CuentaBancaria(string nt, int nC, int s){
        nombre_titular=nt;
        NumCuenta=nC;
        saldo=s;
    };
        void mostrarInfo(){
            int a, r;
            cout<<"saldo actual: "<<saldo<<"\ndesea depositar? (si[1]/no[2])";
            cin>>a;
            if (a==1)
            {
                cout<<"cuanto desea depositar?";
                cin>>depositar;
                saldoactu=saldo+depositar;
                cout<<"se ha depositado la cantidad de : Q"<<depositar<<endl;
            }else if(a==2){
                depositar=0;
                cout<<"se ha depositado la cantidad de : Q"<<depositar<<endl;
            }else{
                depositar=0;
                cout<<"no ha un numero distinto al parametro, se tomara como que no queire deposirtar"<<endl;
            }

            cout<<"saldo actual: "<<saldo<<"\ndesea retirar? (si[1]/no[2])";
            cin>>r;
            if (r==1)
            {
                cout<<"cuanto desea retirar?";
                cin>>retirar;
                saldoactu=saldo-retirar;
                cout<<"se ha retirado la cantidad de : Q"<<retirar<<endl;
            }else if(r==2){
                retirar=0;
                cout<<"se ha retirado la cantidad de : Q"<<retirar<<endl;
            }else{
                retirar=0;
                cout<<"no ha un numero distinto al parametro, se tomara como que no queire retirar nada"<<endl;
            }
            
            cout<<"Titular: "<< nombre_titular  <<" Numero de cuenta: "<< NumCuenta <<" Saldo anterior: "<< saldo <<" deposito: "<< depositar <<" retiro: "<<retirar<<"saldo actual: "<<saldoactu<<endl;
        };
};

class Pelicula
{
private:
    string autor;
    string precio;
    int publicacion;
    string duracion;
    string titulo;

public:
    Pelicula(string a, string p, int pu, string d,string t){
        autor = a;
        precio = p;
        publicacion = pu;
        duracion = d;
        titulo = t;
    };
        void mostrarInfo(){
            cout<<"Autor: "<< autor <<" Precio: "<< precio <<" Publicacion: "<< publicacion<<"Duracion: "<< duracion <<" titulo: "<< titulo <<endl;
        };
};

void libroreg(){
	cout<<"\t Libros en existencia"<<endl;
            libro libro1("Cesar",302,1607,"la vaca");
            libro libro2("Juan",202,1878,"la macarena");
    
            cout<<"Informacion del libro 1: "<<endl;
            libro1.mostrarInfo();
            cout<<"Informacion del libro 2: "<<endl;
            libro2.mostrarInfo();
            system("PAUSE");
            system("cls");
};

void estudiantesreg(){
	cout<<"\t Registro de Estudiantes"<<endl;
            Estudiante Estudiante1("Cesar","Hernandez",11,"5to primaria");
            Estudiante Estudiante2("Juan","Melgar",13,"1ro basico");
    
            cout<<"Informacion del estudiante 1: "<<endl;
            Estudiante1.mostrarInfo();
            cout<<"Informacion del estudiante 2: "<<endl;
            Estudiante2.mostrarInfo();
            system("PAUSE");
            system("cls");
}

void calsimple(){
	int num1, num2;
	Calculadora operacion;

	cout << "Introduzca dos numeros enteros: " << endl;
	cin >> num1 >> num2;
	
	operacion.suma(num1,num2);
	operacion.resta(num1,num2);
	operacion.mult(num1,num2);
	operacion.divi(num1,num2);
}

void cuentaBanco(){
	cout<<"\t Registro de Cuentas bancarias"<<endl;
            CuentaBancaria CuentaBancaria1("Eduardo Rodrigez",142451451011,1000);

            cout<<"Informacion de cuenta 1: "<<endl;
            CuentaBancaria1.mostrarInfo();
            system("PAUSE");
            system("cls");
}


void peliculasreg(){
	cout<<"\t Registro de peliculas"<<endl;
            Pelicula Pelicula1("Sara Escobar","$ 3.89",2002,"1 h y 24 min","spirit");
            Pelicula Pelicula2("Aaron Blaise","$ 4.0",2003,"1h y 25 min","Tierra de osos");
    
            cout<<"Informacion de la pelicula 1: "<<endl;
            Pelicula1.mostrarInfo();
            cout<<"Informacion de la pelicula 2: "<<endl;
            Pelicula2.mostrarInfo();
            system("PAUSE");
            system("cls");
}

int main(){
    int a;
    while (1==1)
    {
        cout<<"Escoja uno de los programas \n 1. Biblioteca \n 2. Registro de Estudiantes \n 3. Calculadora simple \n 4. Gestion de cuentas bancaria \n 5. Registro de películas \n 6. Salir"<<endl;
        cin>>a;
        switch (a)
        {
        case 1:
            libroreg();
            break;
        

        case 2:
            estudiantesreg();
            break;
        
        case 3:
        	calsimple();
            break;

        case 4:
            cuentaBanco();
            break;

        case 5:
            peliculasreg();

        case 6:
            system("PAUSE");
            exit(EXIT_SUCCESS);
            break;

        default:
            cout<<"Programa no existente"<<endl;
            system("PAUSE");
        	system("cls");
            break;
        }
    }
    
    
}