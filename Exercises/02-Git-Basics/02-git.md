1. Erstelle ein neues Git-Repository mit `git init`. Lege dort eine leere `README.md` Datei an.
1. Committe `README.md` mit der Commit Message "_Initial commit_".
1. Starte vim zum Schreiben einer Java- oder C-Datei (entweder `vim Main.java` oder `vim main.c`).
1. Schreibe mit vim ein Programm, welches Deinen Namen auf der Konsole ausgibt.
1. Kompiliere das Programm und führe es aus um dessen Funktion zu testen.
1. Welche Ausgabe liefert nun `git status`? Sollten Dateien mit der Endung `.o`, `.exe`, `.out`, `.class` etc. versioniert werden?
1. Erstelle eine `.gitignore` Datei und füge Regeln für Dateien hinzu, die nicht versioniert werden sollen. Ändert sich danach `git status`?
1. Committe nur die Datei `.gitignore` mit der Message "_Create .gitignore_".
1. Erstelle eine Datei `my_passwords.txt`.
1. Füge eine weitere Regel zu `.gitignore` hinzu, die die Datei `my_passwords.txt` ignoriert.
1. Inspiziere Deine Änderung an `.gitignore` mit dem Befehl `git diff`.
1. Gib mit `git log --oneline` das Commit-Protokoll auf der Konsole aus.
1. Committe nur die Änderung an `.gitignore`. Nutze dabei `commit --amend`.
1. Führe erneut `git log --oneline` aus. Vergleiche den Hash des letzten Commits mit der vorherigen log-Ausgabe. Was kann daran problematisch sein?
1. Committe nun deine Java- oder C-Datei mit der Message "_Add name functionality_".
1. Ein super Programm! Tagge diesen Versionsstand mit `git tag v1.0`.
1. Ups! Eigentlich wolltest Du Deine Software-Versionen nach [SemVer](https://semver.org/) nummerieren. Ersetze das eben erstellte Tag durch `v1.0.0``(löschen und neu erstellen).
1. Erweitere Dein Programm um die zeilenweise Ausgabe aller Module, die Du in diesem Semester belegst.
1. Am Ende soll das Programm noch zwei leere Zeilen und ein ":(" ausgeben.
1. Committe nun mithilfe von [interactive staging](https://git-scm.com/book/en/v2/Git-Tools-Interactive-Staging) (`git add -i` und dem Kommando `patch`) zuerst den Modul-Teil Deines Programms (commit message: "_List my modules of the current term_") und dann das Ende (commit message: "_Finish with a smile_").
1. Ein Flüchtigkeitsfehler! Du wolltest natürlich ":)" und nicht ":(" am Ende ausgeben. Springe mit `git reset` in der Historie zurück und ändere/committe entsprechend. `git reset` wird standardmäßig im Modus `--mixed` ausgeführt. Was ist anders im Vergleich zu `git reset --hard` oder `git reset --soft`?
1. Nach einem langen Tag in der Git Bash bist Du auf der Tastatur eingeschlafen. Erstelle und committe aus Versehen eine neue Datei `asdfghj` mit der Commit Message "_tzdjrhmnf_".
1. Mache den letzten Commit mit `git revert` rückgängig.
1. Die Ausgabe von `git log --oneline` hat nun einen unschönen "Revert" drin. Versuche mit `git rebase -i HEAD~2` und dem Kommando `drop` die letzten beiden Commits zu löschen.
