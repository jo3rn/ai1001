Hier legst Du einen GitHub Account mit eigenem SSH-Key an.

1. Öffne <https://github.com> im Browser.
1. Wenn Du bereits einen GitHub-Account hast, den Du auch für die Übung und das Team-Projekt verwenden möchtest, logge Dich ein (_Sign in_). Ansonsten registriere Dich (_Sign up_).
1. Theoretisch kannst Du den für GitLab erstellten SSH-Key für GitHub wiederverwenden. Es empfiehlt sich aber, für jeden Service einen eigenen Key zu nutzen. Generiere also [wie in einer vorherigen Übung](../02-Git-Basics/01-ssh-keys.md) einen neuen SSH-Key:
   1. Wechsel in das Verzeichnis `~/.ssh` (muss ggf. erst erstellt werden).
   1. Gebe den Befehl `ssh-keygen -t ed25519` ein.
   1. Benenne den Key bei der Aufforderung `Enter file in which to save the key` etwas anders, z.B. `id_ed25519_github`
1. Hinterlege Deinen öffentlichen SSH-Key `id_ed25519_github.pub` in den GitHub-Einstellungen (analog zu GitLab).
1. Da Du nun mehrere SSH-Key-Paare hast, musst Du Deinem Computer mitteilen, welchen der SSH-Schlüssel Du für GitHub verwendest. Erstelle dazu im `.ssh`-Verzeichnis eine `config` Datei, z.B. mit `touch ~/.ssh/config`
1. In diese `config` Datei schreibst Du folgende zwei Zeilen, z.B. mit `vi ~/.ssh/config`:
   ```text
   Host github.com
       IdentityFile ~/.ssh/id_ed25519_github
   ```
1. Nun kannst Du die erfolgreiche Authentifizierung mit `ssh -T git@github.com` testen (beim ersten Mal authenticity von github.com mit `yes` bestätigen). Du solltest mit dieser Nachricht begrüßt werden: `Hi username! You've successfully authenticated, but GitHub does not provide shell access.`
