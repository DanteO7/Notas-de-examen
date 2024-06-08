#include<iostream>
#include<vector>
using namespace std;
int main(){
int cantidad, alumnosAprobados=0;
double notaAlumno;
string apellido;
vector<string> alumnos;
vector<double> notas;
vector<double> notasTotales;
cout <<"Ingrese la cantidad de alumnos que rindieron el examen: ";
cin >> cantidad;
cout << endl;
for(int i=1;i<=cantidad;i++){
    double totalAlumno =0;
    cout << "Ingrese el apellido del alumno "<<i<< ": ";
    cin >> apellido;
    alumnos.push_back(apellido);
    for(int j=1;j<5;j++){
        cout << "Ingrese nota del ejercicio "<<j<<": ";
        cin >> notaAlumno;
        notas.push_back(notaAlumno);
    }
    for(double values : notas){
        totalAlumno+=values;
    }
    notasTotales.push_back(totalAlumno);
    for(int i=0;i<4;i++){
        notas.pop_back();
    }
    cout<<endl;
}
cout<<"Alumnos aprobados: "<<endl;
for(int i=0;i<cantidad;i++){
    if(notasTotales[i]>=3){
        cout<<alumnos[i]<< ": "<< notasTotales[i];
        alumnosAprobados++;
    }
    cout << endl;
}
cout << "Total de alumnos aprobados: "<<alumnosAprobados;
cout << endl<<endl;
cout<<"Notas de todos los alumnos: "<<endl;
for(int i=0;i<cantidad;i++){
    cout << alumnos[i] << ": "<< notasTotales[i]<<endl;
}
return 0;
}
