# Git Cheat Sheet

Alle wichtigen Kommandos auf einen Blick!

## Basics

* `git init` erstellt/reinitialisiert ein Git-Repository im aktuellen Verzeichnis [Link](https://git-scm.com/docs/git-init)
* `git add` fügt eine Änderung aus dem Arbeitsverzeichnis zur Staging-Umgebung hinzu. Dies hat noch keine signifikanten Auswirkungen auf das Repository. (erst durch den command `git commit`) [Link](https://git-scm.com/docs/git-add)
* `git commit -m "commit message"` speichert die Commitmessage direkt beim Committen
* `git commit --amend` ändert einen Commit zum Beispiel, ohne seine Commitnachricht zu ändern [Link](https://git-scm.com/docs/git-commit)
* `git revert <old commit>` hebt die Aenderung aus den altem Commit auf, indem ein gegensätzlicher Commit hinzugefügt wird [Link](https://git-scm.com/docs/git-revert)

## Log

* `git log` zeigt das Commit-Log [Link](https://git-scm.com/docs/git-log)
* `git log --oneline` zeigt ebenso das Commit-Log, jedoch in einer Zeile und mit dem Short Hash sowie die Short Description
* `git log -<number>` zeigt das Log der letzten `<number>` Commits
* `git log --oneline --graph --date-order --all` zeigt den Commit-Graphen der gesamten Historie in zeitlich korrekter Anordnung
* `git status` zeigt den Status des Working Trees an

## Branches

* `git branch <branch>` erstellt einen neuen Branch mit dem Namen `<branch>` [Link](https://git-scm.com/book/en/v2/Git-Branching-Branch-Management)
* `git branch -d [branchname]` löscht den Branch, wenn dieser gemerged ist (`git branch -D [branchname]` falls der Branch nicht gemerged ist)
* `git checkout` ermöglicht das Wechseln zwischen Branches [Link](https://git-scm.com/docs/git-checkout)
* `git checkout -b [branchname]` erstellt einen Branch und wechselt direkt zu diesem
* `git checkout <commit> [--] <path>` kopiert `<path>` aus `<commit>` in den Index und das Arbeitsverzeichnis ohne dabei den Branch zu wechseln
* `git merge` fügt Branches zusammen [Link](https://git-scm.com/docs/git-merge)
* `git rebase` verschiebt eine Abzweigung am main Branch; sollte am Besten nur lokal angewandt werden, da sonst die Historien bei den Teammitgliedern nicht mehr übereinstimmen [Link](https://git-scm.com/docs/git-rebase)  
* `git fetch` importiert Commits als Remote-Branch aus dem Remote-Repository [Link](https://git-scm.com/docs/git-fetch)

## Remote

* `git remote [-v]` zeigt eine Liste mit allen verbundenen remote Repositories [Link](https://git-scm.com/docs/git-remote)
* `git remote add <name> <url>` erstellt eine neue Verbindung zu einem remote Repo. Wenn man ein solches Repo hinzugefügt hat, so kann man `<name>` in anderen Befehlen als Shortcut für `<url>`verwenden.
* `git remote rm <name>` entfernt die Verbindung zum remote Repo `<name>` sowie alle zugehörigen remote-tracking Branches und Einstellungen
* `git push` lädt Inhalte des lokalen Repositorys in das hinterlegte Remote-Repository

## Config

* `git config --global user.name <name>` definiert den Autorennamen, der für alle Commits durch den aktuellen Benutzer verwendet werden soll
