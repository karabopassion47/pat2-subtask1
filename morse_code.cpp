#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    // Morse code dictionary for letters A-Z
    string morseCode[26] = {
        ".-",     // A
        "-...",   // B
        "-.-.",   // C
        "-..",    // D
        ".",      // E
        "..-.",   // F
        "--.",    // G
        "....",   // H
        "..",     // I
        ".---",   // J
        "-.-",    // K
        ".-..",   // L
        "--",     // M
        "-.",     // N
        "---",    // O
        ".--.",   // P
        "--.-",   // Q
        ".-.",    // R
        "...",    // S
        "-",      // T
        "..-",    // U
        "...-",   // V
        ".--",    // W
        "-..-",   // X
        "-.--",   // Y
        "--.."    // Z
    };

    string message;
    string fullMorseCode = "";

    // Get input from user
    cout << "Enter a message in English (A-Z characters only): ";
    getline(cin, message);

    // Convert and display Morse code for each letter
    cout << "\nMorse code:\n";
    
    for (int i = 0; i < message.length(); i++) {
        char ch = message[i];
        
        // Convert lowercase to uppercase
        if (islower(ch)) {
            ch = toupper(ch);
        }
        
        // Check if character is a letter (A-Z)
        if (isalpha(ch)) {
            int index = ch - 'A';  // Get index (0-25)
            cout << ch << ": " << morseCode[index] << "\n";
            
            // Add to full Morse code message with space between letters
            if (fullMorseCode.length() > 0) {
                fullMorseCode += "   ";  // Three spaces between letters
            }
            fullMorseCode += morseCode[index];
        }
        // Ignore non-alphabetic characters, numbers, and spaces
    }

    // Display full Morse code message
    cout << "\nFull Morse code message: " << fullMorseCode << "\n";

    return 0;
}
