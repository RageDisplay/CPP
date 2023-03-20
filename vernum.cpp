#include <iostream>
#include <string>
using namespace std;

string encrypt(string message, string key) 
{
    string ciphertext;
    int messageLength = message.size();
    for (int i = 0; i < messageLength; ++i) 
    {
        int messageValue = (message[i] - 'a') % 26; 
        int keyValue = (key[i] - 'a') % 26; 
        int cipherValue = (messageValue + keyValue) % 26; 
        char cipherChar = cipherValue + 'a'; 
        ciphertext.push_back(cipherChar); 
    }
    return ciphertext;
}

string decrypt(string ciphertext, string key) 
{
    string message;
    int ciphertextLength = ciphertext.size();
    for (int i = 0; i < ciphertextLength; ++i) 
    {
        int cipherValue = (ciphertext[i] - 'a') % 26; 
        int keyValue = (key[i] - 'a') % 26; 
        int messageValue = (cipherValue - keyValue + 26) % 26; 
        char messageChar = messageValue + 'a'; 
        message.push_back(messageChar); 
    }
    return message;
}

int main() 
{
    string message = "hello";
    string key = "secret";
    string ciphertext = encrypt(message, key);
    string decryptedMessage = decrypt(ciphertext, key);
    cout<< "Original : " << message<< endl;
    cout << "Ciphertext: " << ciphertext << endl;
    cout << "Decrypted : " << decryptedMessage << endl;
    return 0;
}