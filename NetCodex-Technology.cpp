#include <iostream>

using namespace std;

int main()
{
    string uadmin,cadmin,us,cn,u,c;
    int opcion,fila=1;
    string sugerencia,nombre,equipos[1000][4],id,fecha;
    int total,c2,cantidad,opciones,a=1,filaE=1;
    string registro[1000][2];
    string equipoEL,equipoPr,docentePr,documentoPr,fechaPr,nombreEd,sugerenciaEdit,estadoEdit,fechaEdit,equipoEli,equipoPre;
    int cantidadE[1000][1],cantidadPr,cantPr[1000][1];
    string historial[1000][5];
    int filaH = 1,salir,salirE,opcionEdit;
    
    historial[0][0] = "nombre del equipo";
    historial[0][1] = "docente";
    historial[0][2] = "documento";
    historial[0][3] = "cantidad";
    historial[0][4] = "fecha";
    
    equipos[0][0] = "nombre y referencia del equipo";
    equipos[0][1] = "sugerencia";
    equipos[0][2] = "estado";
    equipos[0][3] = "fecha";
    
    string registroInS[1000][2];
    
    registroInS[0][0] = "Usuario";
    registroInS[0][1] = "contraseña";
        
    administracion:
        
    cout<<"-------------------------------------------\n";    
        
    cout<<"Inicio sesion de administración\n";
    
    cout<<"-------------------------------------------\n";
        
    cout<<"Usuario: ";cin>>uadmin;
        
    cout<<"contrasenia: ";cin>>cadmin;
        
    if(uadmin=="admin" && cadmin=="admin"){
        
        cout<<"bienvenido\n";

    }else{
    
        cout<<"el usuario y contraseña incorrectos\n";
        
        goto administracion;
        
    }
        
    inicio:
        
    cout<<"-------------------------------------------\n";
        
    cout<<"1: Iniciar Sesion \n2: Registrarse\n";cin>>opcion;
    
    cout<<"-------------------------------------------\n";
        
    switch(opcion){
            
        case 1:
        
            cout<<"usuario: ";cin>>us;
            
            cout<<"contraseña: ";cin>>cn;

            for(int i = 0;i < fila;i ++ ){
                    
                if(us!=registroInS[i][0] && cn!=registroInS[i][1]){
            
                    cout<<"este usuario no existe\n";
            
                }else{
                    
                    inicioS:
    
                    cout<<"-------------------------------------------\n";    
                    cout<<"1: Agregar equipos\n";
                    cout<<"2: Eliminar equipos\n";
                    cout<<"3: ver equipos\n";
                    cout<<"4: prestar\n";
                    cout<<"5: Registro\n";
                    cout<<"6: Editar o Sobreescribir equipo\n";
                    cout<<"7: Salir\n";
                    cout<<"-------------------------------------------\n";
                    cout<<"Escriba el numero correspondiente: ";cin>>opciones;
                    
                    switch(opciones){
                        
                        
                        case 1:
                        
                            cout<<"-------------------------------------------\n";
                            
                            cout<<"agregar un equipo\n";
                            
                            cout<<"-------------------------------------------\n";
                        
                            nombreEquipo:
                            
                            cout<<"nombre y referencia del Equipo: ";cin>>nombre;
                            
                            getline(cin,equipos[filaE][0]=nombre);
                            
                            cout<<"sugerencia de uso: ";cin>>sugerencia;
                            
                            getline(cin, equipos[filaE][1]);
                            
                            cout<<"cantidad que desea agregar: ";cin>>cantidad;
                        
                            cantidadE[filaE][0] = cantidad;
                        
                            if(cantidad>0){
                                    
                                equipos[filaE][2]="Disponible";
                            
                            }
                            
                            cout<<"digite la fecha actual: ";cin>>fecha;
                            
                            getline(cin, equipos[filaE][3]);
                            
                            filaE++;
                            
                            cout<<"-------------------------------------------\n";
                            
                            cout<<"equipo registrado!!"<<endl;
                            
                            cout<<"-------------------------------------------\n";
                            
                            goto inicioS;
                        
                        case 2:
                        
                            cout<<"-------------------------------------------\n";
                            
                            cout<<"eliminar equipo\n";
                            
                            cout<<"-------------------------------------------\n";
                        
                            nombreEliminar:
                        
                            cout<<"nombre del equipo que desea eliminar: ";cin>>equipoEL;
                            
                            getline(cin, equipoEli=equipoEL);
                            
                            for(int i = 0; i < filaE; i ++){
                                
                                if(equipoEli == equipos[i][0]){
                                    
                                    equipos[i][0]="eliminado";
                                    equipos[i][1]="eliminado";
                                    equipos[i][2]="eliminado";
                                    equipos[i][3]="eliminado";
                                    
                                    cout<<"equipo eliminado con exito!!"<<endl;
                            
                                    cout<<"-------------------------------------------\n";
                                    
                                }else{
                                    
                                    cout<<"este equipo no existe\n";
                                    
                                    goto nombreEliminar;
                                    
                                }
                                
                            };
                            
                            goto inicioS;
                        
                        case 3:
                    
                            cout<<"-------------------------------------------\n";
                    
                            cout<<"estos son todos los equipos:\n";
                            
                            cout<<"-------------------------------------------\n";
                            
                            for(int i = 0; i < filaE; i ++){
                                
                                cout<<equipos[i][0]<<" | "<<equipos[i][1]<<" | "<<equipos[i][2]<<" | "<<equipos[i][3]<<" | "<<endl;                       
                                
                            }
                            
                            cout<<"-------------------------------------------\n";
                            
                            cout<<"0: salir: ";cin>>salirE;
                            
                            if(salirE==0){
                                
                                goto inicioS;
                                
                            }
                        
                        case 4:
                        
                            cout<<"-------------------------------------------\n";
                            
                            cout<<"prestamo de equipo\n";
                            
                            cout<<"-------------------------------------------\n";
                            
                                cout<<"nombre del equipo: ";cin>>equipoPr;
                                
                                getline(cin,equipoPre = equipoPr);
                                
                                for(int k = 0;k < filaE; k ++){
                                    
                                    if(equipoPre == equipos[k][0]){
                                        
                                        getline(cin,historial[filaH][0] = equipoPr);
                                        
                                        cout<<"nombre del docente: ";cin>>docentePr;
                                        
                                        getline(cin, historial[filaH][1]=docentePr);
                                        
                                        cout<<"documento del docente: ";cin>>documentoPr;
                                        
                                        getline(cin,historial[filaH][2]=documentoPr);
                                        
                                        digcant:
                                        
                                        cout<<"cantidad: ";cin>>cantidadPr;
                                        
                                        if(cantidadPr < cantidadE[k][0]){
                                            
                                            cantidadE[k][0] -= cantidadPr;
                                            
                                        }else{
                                            
                                            cout<<"ha digitado una cantidad mayor a la que ya tiene.\n";                     
                                            
                                            goto digcant;
                                            
                                        }
                                        
                                        cout<<"fecha: ";cin>>fechaPr;
                                        
                                        getline(cin,historial[filaH][3]);
                                        
                                    }else{
                                            
                                            cout<<"este equipo no esta agregado"<<endl;
                                            
                                        }
                                        
                                    
                                    if(cantidadE[k][0] == 0){
                                        
                                        equipos[k][2] = "agotado";
                                        
                                    }
                                    
                                    
                                };
                                
                                filaH ++;
                            
                                cout<<"-------------------------------------------\n";
                                
                                cout<<"prestamo realizado con exito!!"<<endl;
                                
                                cout<<"-------------------------------------------\n";
                            
                            goto inicioS;
                            
                        case 5:
                            
                            cout<<"-------------------------------------------\n";
                            
                            cout<<"registro de prestamos realizados\n";
                            
                            cout<<"-------------------------------------------\n";
                            
                            for(int i = 0;i < filaH; i ++){
                                
                                cout<<historial[i][0]<<" | "<<historial[i][1]<<" | "<<historial[i][2]<<" | ";
                            
                                cout<<historial[i][3]<<" | "<<historial[i][4]<<" | "<<endl;
                                
                                cout<<"-------------------------------------------\n";
                                
                            };
                            
                            cout<<"0: salir: ";cin>>salir;
                            
                            if(salir == 0){
                                
                                goto inicioS;    
                                
                            }
                        
                        case 6:
                        
                            cout<<"-------------------------------------------\n";
                            
                            cout<<"editar equipos\n";
                            
                            cout<<"-------------------------------------------\n";
                            
                            nombreEdar:
                            
                            cout<<"nombre y referencia del equipo que va a editar: ";cin>>nombreEd;
                            
                            for(int j = 0;j < filaE; j++){
                                
                                if(nombreEd == equipos[j][0]){
                                    
                                    cout<<"que desea editar:\n";
                    
                                    editar:
                    
                                    cout<<"1: nombre\n";
                                    cout<<"2: sugerencia\n";
                                    cout<<"3: fecha\n";
                                    cout<<"4: terminar\n";
                                    cout<<"digite un numero correspondiente: ";cin>>opcionEdit;
                                    
                                    switch(opcionEdit){
                                        
                                        case 1: 
                                        
                                            cout<<"nuevo nombre y referencia: ";cin>>nombreEd;
                                            
                                            getline(cin, equipos[j][0] = nombreEd);
                                            
                                            goto editar;
                                            
                                        case 2:
                                        
                                            cout<<"nueva sugerenci: ";cin>>sugerenciaEdit;
                                            
                                            getline(cin, equipos[j][1] = sugerenciaEdit);
                                            
                                            goto editar;
                                            
                                        case 3:
                                        
                                            cout<<"nueva fecha: ";cin>>fechaEdit;
                                            
                                            getline(cin, equipos[j][3] = fechaEdit);
                                            
                                            goto editar;
                                            
                                        case 4:
                                        
                                            goto inicioS;
                                            
                                        default: cout<<"opcion no valida\n";
                                        
                                            goto editar;
                                            
                                    }
                                    
                                }else{
                                    
                                    cout<<"este equipo no esta agregado\n";
                                    
                                    goto nombreEdar;
                                    
                                }
                                
                            }
                        
                        case 7: 
                        
                            cout<<"hasta la proxima!!"<<endl;
                            
                            return 0;
                            
                        
                        default:
                        
                        cout<<"opcion no valida"<<endl;
                        
                        goto inicioS;
                    }
                                    
                    }
                                
                    }
            case 2:
            
                cout<<"Usuario: ";cin>>u;
            
                cout<<"contrasenia: ";cin>>c;
            
                registroInS[fila][0] = u;
                registroInS[fila][1] = c;
                
                for(int k = 0;k < fila;k ++){
                    
                    if(registroInS[k][0]==u){
                        
                        cout<<"el usuario ya existe\n";
                        
                    }
                    if(registroInS[k][1]==c){
                        
                        cout<<"la contraseña ya existe\n";
                        
                    }else{
                        
                        cout<<"Registro realizado con exito\n";
                        
                    }
                    
                }
            
                fila++;
                
                goto inicio;
        }

    return 0;
}