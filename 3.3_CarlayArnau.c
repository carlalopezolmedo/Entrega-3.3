
using System.Collections.Generic;

DROP DATABASE IF EXISTS JuegoPropio;
CREATE DATABASE JuegoPropio;
USE JuegoPropio;

CREATE TABLE Jugador (
id INTEGER PRIMARY KEY NOT NULL,
Nombre TEXT NOT NULL
)ENGINE = InnoDB;


CREATE TABLE MedallasObtenidas (
Jugador INTEGER NOT NULL,
Medallas INTEGER NOT NULL,
FOREIGN KEY (Jugador) REFERENCES Jugador(id),
)ENGINE = InnoDB;


INSERT INTO Jugador VALUES(1,'Carla');
INSERT INTO Jugador VALUES(2,'Aaron');
INSERT INTO Jugador VALUES(3,'Alejandro');
INSERT INTO Jugador VALUES(4,'Arnau');

INSERT INTO MedallasObtenidas VALUES(1, 20);
INSERT INTO MedallasObtenidas VALUES(2, 40);
INSERT INTO MedallasObtenidas VALUES(3, 5);
INSERT INTO MedallasObtenidas VALUES(4, 29);

