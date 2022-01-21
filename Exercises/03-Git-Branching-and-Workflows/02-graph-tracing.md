Erstelle ein neues lokales Repository. Konstruiere mit Hilfe von Branches und Commit Messages "_a_", "_b_", "_c_", usw. eine Historie, bei der `git log --oneline --graph --all --date-order` Folgendes ausgibt:

```text
* k
* j
|\
* | i
| *   h
| |\
| | * g
| * | f
| |/
| * e
* | d
* | c
|/
* b
* a
```

Tipps:

- Branch erstellen: `git branch branchName`
- In einen Branch wechseln: `git checkout branchName`
- Branch erstellen und direkt in ihn wechseln: `git checkout -b branchName`
