#include "Cle.h"
#include "uECC.h"
#include <iostream>
#include <vector>
#include <string>
#include <iostream>
#include <pybind11/pybind11.h>

using namespace std;

class Cle {       
  public:           
    int number;
    string publicKey, privateKey;

  public: 

    void Cle::initialize(int number){
        privateKey = number;
    };

    string Cle::getPrivateKey(){
      return privateKey;
    
    };

    string getPublicKey(){
      return publicKey;
    };   
  
PYBIND11_MODULE(Cle, c){
    c.doc() = "mon example";
    pybind11::class_<Cle>(c, "Cle" )
        .def( pybind11::init< string>() )
        .def( "print", &Cle::Print ); 
        
};

