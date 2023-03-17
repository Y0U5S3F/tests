CREATE DATABASE Stock;

CREATE TABLE Article
(
Code_art VARCHAR(20),
Des_art VARCHAR(50) NOT NULL,
--8 digits on the left and 3 after the , (float)
PU NUMBER(8,3),
--DEFAULT for default value
Qte_stock NUMBER(5) DEFAULT 0,
--a constraint named chkqtes fo check if the quantity is >0
CONSTRAINT chkQtes CHECK Qte_stock>=0
);

CREATE TABLE Client
(
Code_client VARCHAR(20),
Nom_client VARCHAR(20) NOT NULL,
Prenom_client VARCHAR(30),
Adr_client VARCHAR(20) NOT NULL,
Tel_client NUMBER(8),
Email_client VARCHAR(50),
Chiffre_affaires_annee_en_cours NUMBER(10,3),
Cumul_chiffre_affaires NUMBER(12,3),
);

CREATE TABLE Commande
(
Num_comm VARCHAR(20) Primary key,
Date_comm DATE,
Code_client VARCHAR(20),
--a constraint named chkDatecmd to check if the date is less than the actual date
CONSTRAINT ChkDatecmd CHECK (Date_comm<=SYSDATE),
);

CREATE TABLE Detail_commande
(
Num_comm VARCHAR(20),
Code_art VARCHAR(20),
Qte_comm NUMBER(3),
--same to check if quantity is 0<
CONSTRAINT ChkQtecmd CHECK (Qte_comm>0),
);

--Ajout de la contrainte de la clé primaire de la table Article
--alter is used to add, delete or modify colomns in existing tables
ALTER TABLE Article
ADD CONSTRAINT PKArt PRIMARY KEY(Code_art);
--Ajout de la contrainte de la clé primaire de la table Client
ALTER TABLE Client
ADD CONSTRAINT PKClt PRIMARY KEY(Code_client);
--Ajout de la contrainte de la clé primaire de la table Commande
ALTER TABLE Commande
ADD CONSTRAINT PKCmd PRIMARY KEY(Num_comm);
--Ajout de la contrainte de la clé étrangère de la table Commande
ALTER TABLE Commande
ADD CONSTRAINT FKCmdClt FOREIGN KEY(Code_client) REFERENCES Client(Code_client);
--Ajout de la contrainte de la clé primaire de la table Detail_commande
ALTER TABLE Detail_commande
ADD CONSTRAINT PKDetailCmd PRIMARY KEY(Num_comm,Code_art);
--Ajout de la contrainte de la clé étrangère de la table Detail_commande
ALTER TABLE Detail_commande
ADD CONSTRAINT FKCmd FOREIGN KEY(Num_comm)
REFERENCES Client(Num_comm);
--Ajout de la contrainte de la clé étrangère de la table Detail_commande
ALTER TABLE Detail_commande
ADD CONSTRAINT FKArt FOREIGN KEY(Code_art)
REFERENCES Article(Code_art);

--making a copy of the table client named clientele
CREATE TABLE Clientele AS SELECT * FROM Client;

--renameing the table 1 to table 2
RENAME Detail_commande TO Ligne_commande;

--adding a colomn to table
ALTER TABLE Ligne_commande
ADD (PrixVente NUMBER(8,3)) ;

--change max from 20 to 50 for adress
ALTER TABLE Client
MODIFY Adresse VARCHAR(50) ;

--add default value to prenom
ALTER TABLE Client
MODIFY Prenom_client DEFAULT ‘prénom inconnu’ ;

--add a constraint
ALTER TABLE Client
ADD CONSTRAINT ChkAdr CHECK (Adr_client IN ('Kef','Jendouba','Beja'));

--modify type of tel client
ALTER TABLE Client
MODIFY Tel_client NUMBER(8);

--deleting the emailclient colomn
ALTER TABLE Client
DROP Email_client;

--deleting the table
DROP TABLE Client;
