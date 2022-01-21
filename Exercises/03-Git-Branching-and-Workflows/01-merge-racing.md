**Gruppenaufgabe**

Vorbereitung:

1. Der/Die Erste erstellt ein neues remote Repository (GitLab), auf das alle Teammitglieder + Übungsleitung Zugriff (Rolle: Developer) bekommen.
1. Er/Sie erstellt eine Datei `README.md` und committet über GitLabs Web-Oberfläche in die erste Zeile seinem/ihren Namen.
1. Über _Settings->Repository->Protected Branches_ den `main`/`master` Branch auf _unprotected_ stellen.
1. Die anderen Teilnehmenden klonen sich dieses Repository mit `git clone`.

Wenn alle das Repository lokal auf ihrem PC haben, geht es los!

1. Jede(r) schreibt den eigenen Namen in die nächste freie Zeile der Datei `README.md`.
1. Die erweiterte Datei mit `git commit -am "Vorname Nachname"` committen und mit `git push` an das remote Repository senden.

Den meisten aus der Gruppe wird der letzte Schritt nicht gelingen. Woran liegt das? Was muss getan werden, damit es gelingt?

Die Aufgabe ist gelöst, wenn alle Gruppenmitglieder ihren Namen in `README.md` des remote Repositorys committet haben.

PS: Diesen Workflow, bei dem es nur einen Branch gibt, auf den alle committen/pushen, nennt man auch [Centralized Workflow](https://www.atlassian.com/git/tutorials/comparing-workflows#centralized-workflow).
