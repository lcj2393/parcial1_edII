#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#define c_reg 3

using namespace std;

struct proveedores
{
    char nombre[30];
    char telefono[10];
    char direccion[15];
    char empresa[10];
};proveedores prov[c_reg];

struct producto
{
    int c_vendida;
    int p_unitario;
    int importe;
};producto prod[c_reg];

char c_producto[c_reg][10];

int main()
{
    int mayor, menor,x,y;
    for(int i=0;i<c_reg;i++)
    {
    cout<<"\n\t\tREGISTRO PROVEEDOR "<<i+1<<"\n";
    cout<<"\n***********************************************\n";
    cout<<"\nDigite Nombre: ";
        cin.getline(prov[i].nombre,30);
        cin.ignore(256,'\n');

    cout<<"\nDigite Telefono: ";
        cin>>prov[i].telefono;
        cin.ignore(256,'\n');

    cout<<"\nDigite Direccion: ";
        cin>>prov[i].direccion;
        cin.ignore(256,'\n');

    cout<<"\nDigite Empresa: ";
        cin>>prov[i].empresa;
        cin.ignore(256,'\n');
    cout<<"\n***********************************************\n";
    cout<<"\n\t\tREGISTRO DE PRODUCTO\n\n";
    cout<<"\nDigite Nombre de Producto: ";
        cin>>c_producto[i];
    cout<<"\nPrecio Unitario: ";
        cin>>prod[i].p_unitario;
    cout<<"\nCantidad Vendida: ";
        cin>>prod[i].c_vendida;
        prod[i].importe=(prod[i].p_unitario)*(prod[i].c_vendida);
    cout<<"\n***********************************************\n";
    }
    system("cls");

    cout<<"\nEl registro de proveedores es:\n\n";
    for(int i=0;i<c_reg;i++){
        cout<<"\n\t\tPROVEEDORES "<<i+1<<"\n";
        cout<<"\n***********************************************\n";
        cout<<"\nNombre: "<<prov[i].nombre;
        cout<<"\nTelefono: "<<prov[i].telefono;
        cout<<"\nDireccion: "<<prov[i].direccion;
        cout<<"\nEmpresa: "<<prov[i].empresa;
        cout<<"\nImporte: "<<prod[i].importe;

    }

    mayor = prod[0].p_unitario;
    menor = prod[0].p_unitario;

    for (int b=0; b<c_reg; b++){
        if (prod[b].p_unitario> mayor){
            mayor=prod[b].p_unitario;x=b;
        }
    }

    for (int d=0; d<c_reg; d++){
        if (prod[d].p_unitario< menor){
            menor=prod[d].p_unitario;y=d;
        }
    }

        cout<<"El provedor mas caro es : "<<prov[x].nombre;
        cout<<"El provedor mas barato es : "<<prov[y].nombre;

        cout<<"\n***********************************************\n";

    cout<<"\nEl registro de productos es:\n\n";
    for(int i=0;i<c_reg;i++){
        cout<<"\n***********************************************\n";
        cout<<"Proveedor: "<<prov[i].nombre;
        cout<<"Producto: "<<c_producto[i];

    }
    return 0;
    system("pause");
}
