# Git Cheat Sheet

Alle wichtigen Kommandos auf einen Blick!

## Basics

* `git init` erstellt/reinitialisiert ein Git-Repository im aktuellen Verzeichnis [Link](https://git-scm.com/docs/git-init)

## Log

* `git log` zeigt das Commit-Log [Link](https://git-scm.com/docs/git-log)
* `git log -<number>` zeigt das Log der letzten `<number>` Commits 
* `git status` zeigt den Status des Working Trees an

## Branches

* `git branch <branch>` erstellt einen neuen Branch mit dem Namen `<branch>` [Link](https://git-scm.com/book/en/v2/Git-Branching-Branch-Management)
* `git branch -d [branchname]` löscht den Branch, wenn dieser gemerged ist (`git branch -D [branchname]` falls der Branch nicht gemerged ist)
* `git checkout` ermöglicht das Wechseln zwischen Branches [Link](https://git-scm.com/docs/git-checkout)
* `git checkout -b [branchname]` erstellt einen Branch und wechselt direkt zu diesem
* `git merge` fügt Branches zusammen [Link](https://git-scm.com/docs/git-merge)
* `git rebase` verschiebt eine Abzweigung am main Branch; sollte am Besten nur lokal angewandt werden, da sonst die Historien bei den Teammitgliedern nicht mehr übereinstimmen [Link](https://git-scm.com/docs/git-rebase)

## Remote

* `git remote add <name> <url>` erstellt eine neue Verbindung zu einem remote Repo. Wenn man ein solches Repo hinzugefügt hat, so kann man `<name>` in anderen Befehlen als Shortcut für `<url>`verwenden.

## Config
