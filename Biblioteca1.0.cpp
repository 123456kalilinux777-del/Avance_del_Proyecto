#include <iostream>
#include <vector>
#include <string>

    using namespace std;

    int main (){
        //aqui estoy definiendo los elementos de la biblioteca
        string recontrasena[6];
        string contrasena[6]={"1","2","3","4","5","6"};
        vector <string> estudiantes={"felipe","luciana","fernando","brenda"};
        vector <string> carrera = {"ingenieria de sistemas","derecho","administracion de empresas","medicina"};
        vector <string> ci= {"12931417","13941713","13941413","13942815"};
        string libros_IS[5] = {"codigo limpio","python al descubierto","fundamentos de programacion","Elprogramador pragmatico","logica de programacion orientada a objetos"};
        string libros_DE[5] ={"derecho romano","constitucion politica del estado","derecho tributario boliviano","derecho penal boliviano","derecho de las familias"};
        string libros_ME[5] ={"atlas de la anatomia","medicina familiar","inteligencia artificial y medicina","medicina interna","anatomia humana"};
        string libros_AD[5] ={"administracion de empresas","el arte de dirigir empresas","psicologia del dinero","la gerencia y la empresa","organizacion de empresas"};
        string codigos_IS;
        string codigos_DE;
        string codigos_ME;
        string codigos_AD;
        string n,n2,n3; 
		
        cout << "        ****************BIBLIOTECA_UPDS****************"<<endl;
		
		// AQUI SE INGRESAR LA CONTRASEÑA QUE ES:123456
		
            int contador=0;
            int u=0,intentos=3;

                    do{
                        intentos--;
            cout << "   Ingrese su contrasena: "<<endl;
            for (int a = 0; a < 6; a++){

            cin >> recontrasena[a];
            
            }
        for (int a = 0; a < 6; a++){
        
        	if (contrasena[a]==recontrasena[a]){
           
            contador=contador+1;
		
        	}	
            
        }
                           
            if (contador ==6){

                cout << "desbloqueado";
				break;
            }else{

                cout<< "Contraseña incorrecta"<<endl;
        
            }
            if (intentos!=0){
                 cout<<"Tienes "<<intentos<< " de oportunidades"<<endl;
                }if (intentos==0){
                            cout << "Bloqueado";
                            return 0;
                        }
                    } while (intentos>u);    
                    
                
        //para verificar si existe el estudiante o no, para verificar LA CARRERA Y SU CEDULA DE IDENTIDAD 
    	
    	
		bool bandera=false;
		
    	//Ingresando nombre.......
		cout << "Por favor ingrese el nombre del estudiante: ";
			cin>>n;
				cin.ignore();
				
		//Ingresando carrera.......		
				cout << "\nPor favor ingrese la carrera: ";
		getline (cin , n2);
				//cin.ignore();
		
		//Ingresando cedula de identidad.......		
					cout << "Por favor ingrese la su cedula de identidad: ";
		getline (cin , n3);
		
		    
		    //VERIFICANDO NOMBRE, CARRERA, CEDULA DE IDENTIDAD. TODOS ESTOS DEBEN DE COINCIDIR CON EL NUMERO DE POSICION EN EL ARREGLO.
		    
		    
		for (size_t i =0; i< estudiantes.size()&&carrera.size()&&ci.size();i++){
			
				if (n == estudiantes[i]&&n2==carrera[i]&&n3==ci[i]){

                bandera=true;
                break;
            }
			
		}
        if (bandera==false){

                cout << "No Esta registrado en la base de datos"<<endl;            

        }else{
        
			cout << "Esta registrado en la base de datos"<<endl;
			
		}
		
		cout<<"continuando......."<<endl; 
		return 0;
		
	}