#include<iostream>
#include<cstdlib>
#include<string>
#include<openssl/sha.h>
#include<sqlite3.h>
#include<sqlite/connection.hpp>
#include<sqlite/command.hpp>
#include<sqlite/query.hpp>
#include<sqlite/execute.hpp>


using namespace std;


//Funcion conversion de texto a hash sha256
string  sha256(const string& str) {
    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256_CTX sha256;
    SHA256_Init(&sha256);
    SHA256_Update(&sha256, str.c_str(), str.length());
    SHA256_Final(hash, &sha256);
    
     std::string hash_str;
    char hex[SHA256_DIGEST_LENGTH * 2 + 1];
    for (int i = 0; i < SHA256_DIGEST_LENGTH; i++) {
        sprintf(hex + 2 * i, "%02x", hash[i]);
    }
    hash_str = hex;
    
    return hash_str;

}


int main () {

char repetir;
std::string user_name="", password="";

cout << "*** Almecene su usuario ***" << endl;

do {

    cout << "Nombre de nuevo usuario: "; 
        cin >> user_name;
    cout << "Inserte frase de contraseña: "; 
        cin >> password;


    std::string hash_pass = sha256(password);

    try {

        sqlite::connection db("./prueba_2.db");
        sqlite::command cmd (db, "INSERT INTO users_passwords (name_user, hash) VALUES (?, ?);");
        
            cmd.bind(1, user_name);
            cmd.bind(2, hash_pass);
            cmd();

        cout << "*** Usuario registrado exitosamente ***" << endl;
    

        }   catch (exception& e) {
            
                cout << "Error al interactuar con la base de datos"  << endl; 

                return 1;
            }

    cout << "Registrar otro usuario ? (s/n)"; cin >> repetir;      

    }    while (repetir == 'S' || repetir == 's');

    return 0;
}