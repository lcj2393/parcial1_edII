#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#define c_reg 3

using namespace std;

struct producto
{
    int c_vendida;
    int p_unitario;
    int importe;
};

struct proveedores
{
    char nombre[10];
    char telefono[10];
    char direccion[10];
    char empresa[10];
    producto prod[c_reg];
};proveedores prov[c_reg];

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
        cin>>prov[i].prod[i].p_unitario;
    cout<<"\nCantidad Vendida: ";
        cin>>prov[i].prod[i].c_vendida;
        prov[i].prod[i].importe=(prov[i].prod[i].p_unitario)*(prov[i].prod[i].c_vendida);
    cout<<"\n***********************************************\n";
    }

    cout<<"\nEl registro de proveedores es:\n\n";
    for(int i=0;i<c_reg;i++){
        cout<<"\n\t\tPROVEEDORES "<<i+1<<"\n";
        cout<<"\n***********************************************\n";
        cout<<"\nNombre: "<<prov[i].nombre;
        cout<<"\nTelefono: "<<prov[i].telefono;
        cout<<"\nDireccion: "<<prov[i].direccion;
        cout<<"\nEmpresa: "<<prov[i].empresa;
        cout<<"\nImporte: "<<prov[i].prod[i].importe;
    }

    mayor = prov[0].prod[0].p_unitario;
    menor = prov[0].prod[0].p_unitario;

    for (int b=0; b<c_reg; b++){
        if (prov[b].prod[b].p_unitario> mayor){
            mayor=prov[b].prod[b].p_unitario;x=b;
        }
    }

    for (int d=0; d<c_reg; d++){
        if (prov[d].prod[d].p_unitario< menor){
            menor=prov[d].prod[d].p_unitario;y=d;
        }
    }

        cout<<"\nEl provedor mas caro es : "<<prov[1].nombre;
        cout<<"\nEl provedor mas barato es : "<<prov[1].nombre;

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
