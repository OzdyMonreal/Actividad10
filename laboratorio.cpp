#include "laboratorio.h"

#include <fstream>

Laboratorio::Laboratorio() {
  cont = 0;
}

void Laboratorio::agregarFinal(const Computadora &c) {
  if (cont < 5) {
    arreglo[cont] = c; 
    cont++;
  }
  else {
    cout << "Arreglo lleno..." << endl;
  }
}

void Laboratorio::mostrar() {
  cout << left;
  cout << setw(25) << "Sistema Operativo";
  cout << setw(25) << "Modelo";
  cout << setw(25) << "Procesador";
  cout << setw(15) << "RAM";
  cout << endl;
  for (size_t i = 0; i < cont; i++) {
    Computadora c = arreglo[i];
    // cout << "Sistema Operativo: " << c.getSisOp() << endl;
    // cout << "Modelo: " << c.getModelo() << endl;
    // cout << "Procesador: " << c.getProcesador() << endl;
    // cout << "Memoria Ram: " << c.getMemoriaRam() << " GB" << endl;
    // cout << endl;

    cout << c;
  }
}

void Laboratorio::respaldar() {
  ofstream archivo("computadoras.txt");
  if (archivo.is_open()) {
    for (size_t i = 0; i < cont; i++) {
      Computadora c = arreglo[i];
      archivo << c.getSisOp() << endl;
      archivo << c.getModelo() << endl;
      archivo << c.getProcesador() << endl;
      archivo << c.getMemoriaRam() << endl;
    }
  }
  archivo.close();
}

void Laboratorio::recuperar() {
  ifstream archivo("computadoras.txt");
  if (archivo.is_open()) {
    string temp;
    int memoriaRam;
    Computadora c;

    while (true)
    {
      getline(archivo, temp); // Sistema Operativo
      if (archivo.eof()) break;
      c.setSisOp(temp);

      getline(archivo, temp); // Tipo
      c.setModelo(temp);

      getline(archivo, temp); // Fuerza
      c.setProcesador(temp);

      getline(archivo, temp); // Salud
      memoriaRam = stoi(temp); // string-to-int
      c.setMemoriaRam(memoriaRam);

      agregarFinal(c);
    }
  }
  archivo.close();
}