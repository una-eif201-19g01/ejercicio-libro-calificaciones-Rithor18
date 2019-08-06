//Estudiante:Ricardo Thomas Rodriguez
//Universidad nacional
//Profesor:Maikol Guzman
//6-8-2019


#ifndef LIBROCALIFICACIONES_LIBROCALIFICACIONES_H
#define LIBROCALIFICACIONES_LIBROCALIFICACIONES_H
#include <iostream>
#include <sstream>

class LibroCalificaciones {
	private LibroCalificaciones{
		string NombreCurso="";
		int Nota=0;
	};

	public LibroCalificaciones{
		
		LibroCalificaciones()
		LibroCalificaciones(string nc, int nt){
			NombreCurso=nc;
			Nota=nt;
		}
			
		void setNombreCurso(string nc){
			NombreCurso=nc,
		}
		void setNota(int nt){
			Nota=nt;
		}
		string getNombreCurso(){
			return NombreCurso;
		}
		int getNota(){
			return Nota;
		}
		
		string ObtenerRangoLetra(){
			if(Nota>=90){
				cout<<"-A-";
			}else{
				if(Nota>=80){
					cout<<"-B-";
				}else{
						if(Nota>=70){
							cout<<"-C-";
						}else{
								if(Nota>=60){
									cout<<"-D-";
								}else{
										cout<<"-F-";
								}
						}
				}
				
			}
		}
		
		string ObtenerMensaje(){
			
		};
		
	};
			

};


#endif //LIBROCALIFICACIONES_LIBROCALIFICACIONES_H
