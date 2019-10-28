#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iterator>
#include <chrono>
#include <thread>


using namespace std;

int main()
{
    cout << "Enter the text you want ciphered: ";
    string text {};
    getline(cin, text);
    string plainAlphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string cipherKey {"phqgiumeaylnofdxjkrcvstzwbPHQGIUMEAYLNOFDXJKRCVSTZWB"};
    string cipheredMessage {};
    //ciphering.
    for(size_t i {0}; i < text.length(); ++i){
        size_t plainAlphabetPosition = plainAlphabet.find(text.at(i));
        if(plainAlphabetPosition != string::npos){
            char interimCharacter {cipherKey.at(plainAlphabetPosition)};
            cipheredMessage += interimCharacter;
        }else{
            cipheredMessage += text.at(i);
        }
    }
    cout << "Ciphering message..." << endl;
    _sleep(1000);
    cout << "Ciphered message: " << cipheredMessage << endl;
    string decipheredMessage {};

    //Deciphering
    for(auto character: cipheredMessage){
        size_t cipherKeyPosition = cipherKey.find(character);
        if(cipherKeyPosition != string::npos){
            char interimDecipheredMessage {plainAlphabet.at(cipherKeyPosition)};
            decipheredMessage += interimDecipheredMessage;
        }else{
            decipheredMessage += character;
        }
    }
    //Or
//    for(size_t i {0}; i < cipheredMessage.length(); ++i){
//        size_t cipherKeyPosition = cipherKey.find(cipheredMessage.at(i));
//        if(cipherKeyPosition != string::npos){
//            char interimCharacter {plainAlphabet.at(cipherKeyPosition)};
//            decipheredMessage += interimCharacter;
//        }else{
//            decipheredMessage += cipheredMessage.at(i);
//        }
//    }
    cout << "Deciphering message..." << endl;
    _sleep(1000);
    cout << "Deciphered message: " << decipheredMessage << endl;
    return 0;
}
