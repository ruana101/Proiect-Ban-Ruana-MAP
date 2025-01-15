# Traversarea arborilor binari ordonați 

## INTRODUCERE

Proiectul de față prezintă arborii binari ordonați printr-o implementare în limbajul de programare C. Un arbore binar ordonat este o structură de date în care fiecare nod are cel mult doi copii, iar valorile nodurilor respectă următoarea ordine:
- ***subarborele stâng*** conține doar noduri cu valori ***mai mici*** decât valoare nodului curent
- ***subarborele drept*** conține doar noduri cu valori ***mai mari*** decât valoarea nodului curent

## DETALII DESPRE IMPLEMENTARE

Proiectul implementează un arbore binar ordonat în câțiva pași:
- inserează 8 noduri în mod aleatoriu într-un arbore binar ordonat
- traversează arborele creat în patru moduri distincte:
1. *In-ordine*(in-order traversal): vizitează subarborele stâng, apoi rădăcina și subarborele drept, oferind o secvență ordonată

2. *Pre-ordine*(pre-order traversal): vizitează radăcina mai întâi, apoi subarborele stâng și drept

3. *Post-ordine*(post-order traversal): vizitează subarborele stâng și drept înainte de a vizita rădăcina

4. *Pe nivel*(level-order traversal): vizitează nodurile nivel cu nivel, începând cu rădăcina

## PLATFORMĂ SOFTWARE UTILIZATĂ

Următoarele platforme au fost utilizate pentru dezvoltarea acestui proiect, implementat în limbajul de programare C:
- Sistemul de operare: ***Windows***
- IDE (Integrated Development Environment): ***Visual Studio Code***
- Compilatorul: ***GCC*** (GNU Compiler Collection)

## MODALITĂȚI DE RULARE


## REZULTATE
La rularea proiectului se inserează 8 noduri în mod aleatoriu într-un arbore binar ordonat și se afișează traversarile prezentate mai sus. 

![Imagine](Screenshots/program.png)