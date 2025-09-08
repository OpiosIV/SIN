article = 4.99

x = int(input("Combien d'article allez vous acheter: "))

def reduction5(x):
    if x > 5:
        y = x * article
        z = y * (5 / 100)
        return z
    else:
        z = x * article
        return z
    
print(reduction5)

