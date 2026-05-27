#include <iostream>
#include <vector>

    using namespace std;

    int main (){

        string recontrasena[6];
        string contrasena[6]={"1","2","3","4","5","6"};
        vector <string> estudiantes={"felipe","luciana","fernando","brenda"};
        vector <string> carrera = {"ingenieria de sistemas","derecho","administracion de empresas","medicina"};
        vector <string> ci= {"12931417","13941713","13941413","13942815"};
		string n; 
		
        cout << "       ****************BIBLIOTECA_UPDS****************"<<endl;

        cout << "   Ingrese su contrasena: "<<endl;
         
            bool aprobado=false;

        for (int a = 0; a < 6; a++){

            cin >> recontrasena[a];
            
        }

        for (int a = 0; a < 6; a++){
        
        if (contrasena[a]==recontrasena[a]){
            aprobado=true;
            break;
        }
            
                    }
                    
                        
            if (aprobado==false){

                cout << "bloqueado";

            }else{

                cout<< "desbloqueado"<<endl;

            }
                    
                    

                        
        //para verificar si existe el estudiante o no
    	
		bool bandera=false;
		//Ingresando el nombre...........
    	
		cout << "\nPor favor ingrese el registro de el estudiante?";
			cin >> n;
		
		    
		for (int i =0; i< estudiantes.size();i++){
			
				if (n == estudiantes[i]){

                bandera=true;
                break;
            }
			
		}
        if (bandera==false){

        
                cout << "No Esta registrado en la base de datos"<<endl;            

        }
        cout << "esta registrado en la base de datos"<<endl;
		

		return 0;
	}
	
	
	/*
		for (int i = 0; i<n; i++){
			
			cout << "Elemento"<<i<<"]: ";
			cin >> valor;
			numeros.push_back(valor);			
			
		}
		*/
