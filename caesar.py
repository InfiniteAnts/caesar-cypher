import cs50
import sys

def main():
    
    # Error if more or less than one command line argument
    if len(sys.argv) != 2:
        print("Error. Usage: python caesar.py key")
        exit(1)
    
    # Convert key from string to an integer    
    k = int(sys.argv[1])
    
    # Get plaintext from user
    print("plaintext: ", end="")
    p = cs50.get_string()
    
    if p != None:
        print("ciphertext: ", end="")
        
        for c in p:
            if str.isalpha(c):
                if str.isupper(c):
                    c = (ord(c) - ord('A') + k) % 26
                    print(chr(c + ord('A')), end="")
                else:
                    c = (ord(c) - ord('a') + k) % 26
                    print(chr(c + ord('a')), end="")
            else:
                print(c, end="")
        
        print()
    
if __name__ == "__main__":
    main()