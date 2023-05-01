import json

etudiant = {
    "Ncin": 0,
    "Nom": "",
    "Prenom": "",
    "Age": 0, 
    "Decision": "" 
}
Decisions=("admis","refuse","ajourne")


def saisir():
    etudiant["Ncin"]=int(input("donner le Ncin "))
    etudiant["Nom"]=input("donner le Nom ")
    etudiant["Prenom"]=input("donner le Prenom ")
    etudiant["Age"]=int(input("donner l'Age "))
    while etudiant["Decision"] not in Decisions :
        etudiant["Decision"]=input("donner la Decision ")
    with open("concours.txt", "w") as f:
        etudiant_json = json.dumps(etudiant)
        f.write(etudiant_json)

saisir()
