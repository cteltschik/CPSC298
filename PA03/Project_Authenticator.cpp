#include <cmath>
#include <iostream>

int main() {
// PART I
  const char authChar1 = 'E';
  const char authChar2 = 'C';
  const char authChar3 = 'A';

  char char1in;
  char char2in;
  char char3in;
  std::cout << "Enter the 1st character of the EAM code: ";
  std::cin >> char1in;
  std::cout << "Enter the 2nd character of the EAM code: ";
  std::cin >> char2in;
  std::cout << "Enter the 3rd character of the EAM code: ";
  std::cin >> char3in;

  std::string auth_code = "";
  auth_code += authChar1;
  auth_code += authChar2;
  auth_code += authChar3;

  std::string eam_code = "";
  eam_code += char1in;
  eam_code += char2in;
  eam_code += char3in;

  std::cout << "\nAuthenticator Code: " << auth_code << "\n"
            << "Emergency Action Message Code: " << eam_code << std::endl;

    
    
// PART II
  if ((authChar1 == char1in) && (authChar2 == char2in) &&
      (authChar3 == char3in)) {
      std::cout << "\nMessage is authentic." << std::endl;
  } else {
    std::cout << "\nMessage is invalid." << std::endl;
  }

    
    
// PART III
  if (auth_code == eam_code) {
    std::cout << "Concurrance: message is authentic." << std::endl;
  } else {
    std::cout << "Concurrence: message is invalid." << std::endl;
  };
    
   
    
//PART IV
  int checksum = 0;
  checksum = (int(char1in) + int(char2in) + int(char3in)) % 7;
  int sum = int(char1in) + int(char2in) + int(char3in);
    
  const int validCodeChecksum = 5;
    
  if (checksum == validCodeChecksum){
    std::cout << "\nMessage Code Checksum is valid: " << checksum << "\n" << std::endl;
    }
  else {
    std::cout << "\nMessage Code Checksum is invalid: " << checksum << ", expected: " << validCodeChecksum << "\n" << std::endl;
    };
    
    
    std::cout << "CHARACTERIZATION OF MESSAGE CODE" << std::endl;
    std::cout << "***************************************************************";
  std::cout << "\nASCII Values of EAM Code Characters: " << int(char1in) << ", " << int(char2in) << ", " << int(char3in) << std::endl;
  std::cout << "Sum of ASCII Values of EAM Code Characters: " << sum << "\n" << std::endl;
    
  if(char1in != authChar1){
      std::cout << "First characters do not match: EAM = " << char1in << ", Authenticator: " << authChar1 << std::endl;
  };
  if(char2in != authChar2){
      std::cout << "First characters do not match: EAM = " << char2in << ", Authenticator: " << authChar2 << std::endl;
  };
  if(char3in != authChar3){
      std::cout << "First characters do not match: EAM = " << char3in << ", Authenticator: " << authChar3 << std::endl;
  };
    
  if(eam_code > auth_code){
      std::cout << "\nMessage code (" << eam_code << ") is lexcographically greater than the Authenticator code (" << auth_code << ")" << std::endl;
    }
  else if(eam_code < auth_code){
      std::cout << "\nMessage code (" << eam_code << ") is lexcographically less than the Authenticator code (" << auth_code << ")" << std::endl;
  };
    
    
  return 0;
};
