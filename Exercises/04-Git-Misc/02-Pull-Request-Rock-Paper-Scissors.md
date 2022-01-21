Beim PR [RPS](https://en.wikipedia.org/wiki/Rock_paper_scissors) wird die normalerweise durch Handgesten kommunizierte Entscheidung (Schere, Stein oder Papier) per Pull Request übermittelt.

1. Die/Der Ältere beginnt mit dem Anlegen eines Repositorys (mit `README.md`) auf [GitHub](https://github.com/) mit dem Namen PR RPS.
1. Der/Die Gegenspieler\*in, sowie die User _jo3rn_ und _franzibmnn_ müssen hinzugefügt werden (Settings → Manage Access).
1. Ins `README.md` werden folgende 3 Zeilen geschrieben und committet:

   ```text
   Older player shows:

   Younger player shows:
   ```

1. Nun klonen sich beide Spielende das soeben erstellte Repository (darauf achten, die **SSH**-URL `git@github...` auszuwählen).
1. Beide erstellen jeweils einen Branch mit dem Namen `move-young` oder `move-old` und wechseln auf diesen Branch.
1. Beide schreiben nun im `README.md` jeweils ans Ende ihrer Zeile ihre Entscheidung (_rock_, _paper_ oder _scissors_) und committen die Änderung.
1. Beide senden ihre Änderung per `git push -u origin branchName` (`branchName` durch `move-young` oder `move-old` ersetzen!) an das remote Repository auf GitHub. Dieser Befehl legt auf GitHub einen neuen Branch `branchName` mit dem eben erzeugten Commit an.
1. Beide erstellen über die Webseite einen Pull Request, um ihren Branch in den `main` Branch zu mergen. Sie fügen den/die Gegenspieler\*in als Reviewer hinzu.
1. Beide reviewen und mergen den jeweils anderen PR und ermitteln so den/die Sieger\*in. Bei einem Unentschieden wird der Vorgang wiederholt.

Die Gewinnenden aus jeweils 2 Repositorys wiederholen den Ablauf im Repository des/der jeweils Älteren, bis schließlich eine Person übrig bleibt, die alle Runden gewonnen hat.
