#include <iostream>
#include <stdio.h>
#define n 20
/*  Escribir un programa de consola en C++ de facturación de clientes. Los clientes tienen un nombre, el número de unidades solicitadas, el precio de cada unidad y el estado en que se encuentra la factura: moroso, atrasado, pagado. El programa debe permitir ingresar los datos de las facturas generadas por clientes.
Una vez ingresado los datos necesarios el programa debe permitir mostrar los siguientes reportes:
"	La lista de nombres de los clientes con facturas en estado moroso.
"	La lista de nombres de clientes en estado pagado con factura mayor a una cantidad ingresada.
*/

using namespace std;
struct factura // estructura para el almacenaniento de datos
{
		string nombre;
		int unidades;
		double precio;
		int estado;
};
		int op=0, m=0, c;
		factura v[n];

int main(int argc, char** argv) {
	
	do
{
		system("cls");
		cout<<"\t Sistema de Facturacion\n\n";
		cout<<"Menu (Seleccione una opcion):\n\n";
		cout<<"1. Registro de Facturas\n";
		cout<<"2. Listado de Clientes estado Morosos\n";
		cout<<"3. Listado de Clientes estado Pagados\n";
		cout<<"4. Salir\n\n";
		cin>>op;

    do
{
if(op<1 || op>4)
{
		cout<<"Error. Seleccione una opcion correcta del Menu\n";
		cin>>op;
}
}while(op<1 || op>4);

switch (op)
{
case 1:
system("cls");
		cout<<"1. Registro de Facturas:\n\n";
		cout<<"Ingrese la cantidad de facturas a registrar: ";
do
{
		cin>>m;
		if(m<1 || m>n)
{
        cout<<"Error. Ingrese una cantidad correcta: ";
}
}while(m<1 || m>n);

system("cls");
        cout<<"1. Registro de Facturas:\n";
       
for(int i=0; i<m; i++)
{
		cout<<"\nFactura "<<(i+1)<<":\n";
		cout<<"Nombre: ";
		cin>>v[i].nombre;
		cout<<"Numero de unidades solicitadas: ";
		cin>>v[i].unidades;
		cout<<"Precio de cada de unidades: ";
		cin>>v[i].precio;
		cout<<"Estado (1. Moroso, 2. Atrasado, 3. Pagado): ";
		cin>>v[i].estado;
}
break;
		case 2:
system("cls");
		cout<<"2. Listado de Clientes estado Morosos:\n\n";
		c=0;
for(int i=0; i<m; i++)
{
if(v[i].estado == 1)
{
c++;
}
}
if(c==0)
{
     cout<<"Info. No existen Clientes Morosos\n";
}
else
{
     cout<<"N. Nombre:\n";
for(int i=0; i<m; i++)
{
if(v[i].estado == 1)
{
     cout<<(i+1)<<" "<<v[i].nombre<<"\n";
}
}
}
     cout<<"\n";
system("pause");
break;
case 3:
system("cls");
     cout<<"3. Listado de Clientes estado Pagados:\n\n";
c=0;
for(int i=0; i<m; i++)
{
if(v[i].estado == 3)
{
c++;
}
}
if(c==0)
{
     cout<<"Info. No existen Clientes Pagados\n";
}
else
{
     cout<<"N. Nombre:\n";
for(int i=0; i<m; i++)
{
if(v[i].estado == 3)
{
     cout<<(i+1)<<" "<<v[i].nombre<<"\n";
}
}
}
     cout<<"\n";
system("pause");
break;
default: break;
}
}while(op!=4);


		return 0;
}
