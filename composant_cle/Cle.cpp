#include "Cle.h"
#include "uECC.h"
#include <iostream>
#include <vector>
#include <string>
#include <iostream>

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

    
        
};

