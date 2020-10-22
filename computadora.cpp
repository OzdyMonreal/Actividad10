#include "computadora.h"

Computadora::Computadora() {

}

Computadora::Computadora(const string &_sisOp, const string &_modelo, const string &_procesador, int _memoriaRam) {
  this -> sisOp = _sisOp;
  this -> modelo = _modelo;
  this -> procesador = _procesador;
  this -> memoriaRam = _memoriaRam;
}

void Computadora::setSisOp(const string &v) {
  sisOp = v;
}

string Computadora::getSisOp() {
  return sisOp;
}

void Computadora::setModelo(const string &v) {
  modelo = v;
}

string Computadora::getModelo() {
  return modelo;
}

void Computadora::setProcesador(const string &v) {
  procesador = v;
}

string Computadora::getProcesador() {
  return procesador;
}

void Computadora::setMemoriaRam(int v) {
  memoriaRam = v;
}

int Computadora::getMemoriaRam() {
  return memoriaRam;
}