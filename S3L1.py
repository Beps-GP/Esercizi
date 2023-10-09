def perQuadrato(a):
    return float(a*4)

def perCerchio(a):
    return float(2*3.14*a)

def perRettangolo(a, b):
    return float((a+b)*2)


print("Ciao! Il seguente programma serve per calcolare il perimetro della figura selezionata.")
scelta = input("Seleziona una figura: \n A-Quadrato \n B-Cerchio \n C-Rettangolo \n")

while scelta not in ('A','a','B','b','C','c'):
    scelta = input("Seleziona una delle figure proposte: \n A-Quadrato \n B-Cerchio \n C-Rettangolo \n")

if scelta in ('A', 'a'):
    figura = "quadrato"
    a = float(input("Inserisci il valore del lato: \n"))
    perimetro = perQuadrato(a)

elif scelta in ('B', 'b'):
    figura = "cerchio"
    a = float(input("Inserisci il valore del raggio: \n"))
    perimetro = perCerchio(a)

else:
    figura = "rettangolo"
    a = float(input("Insersici il primo lato: \n"))
    b = float(input("Inserisci il secondo lato: \n"))
    perimetro = perRettangolo(a, b)


print("Il perimetro del %s è %.2f." %(figura, perimetro))




