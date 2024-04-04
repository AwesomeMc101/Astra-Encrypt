# Astra-Encrypt
Encrypts each char value by scrambling the digits using a master password you give it. More in readme.


### How it works
It takes the password you provide it and uses it as the key to encrypt and decrypt the text. Each char in the password is converted in a table (see: pass_table.hpp/.cpp & encode_pass.hpp/.cpp) into many digits. Each of those digits are used once in the encryptor to perform a different instruction on each char in the provided string you are encrypting. 

The decryptor requires the same key or the program will not deliver the correct response. 
