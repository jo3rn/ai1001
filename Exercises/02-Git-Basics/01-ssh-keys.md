Für Interessierte ist [hier die ausführliche Dokumentation](https://docs.gitlab.com/ee/ssh/) zu finden. Es folgt die Zusammenfassung der wichtigsten Schritte.

1. Überprüfe, ob bereits ein SSH-Key vorhanden ist:

- Suche im Home-Verzeichnis nach einem `.ssh` Verzeichnis und zeige dessen Inhalt mit `ls` an.
- Wenn dort eine Datei wie `id_ed25519.pub` oder `id_rsa.pub` liegt, kannst du den Schritt "Generiere SSH-Keys" überspringen (oder trotzdem neue anlegen).
- Wenn das `.ssh` Verzeichnis leer oder nicht vorhanden ist, mache mit dem nächsten Schritt weiter.

2. Generiere SSH-Keys:

- Gib `ssh-keygen -t ed25519` ins Terminal ein.
- Drücke `Enter` um den Speicherort der Schlüssel zu bestätigen.
- Drücke 2x `Enter` um keine Passphrase für den Schlüssel zu setzen.
- Gib den Inhalt des `~/.ssh` Verzeichnisses mit `ls` aus. Dort sollten nun die Dateien `id_ed25519` (privater Schlüssel) und `id_ed25519.pub` (öffentlicher Schlüssel) liegen.

3. Füge den öffentlichen Schlüssel zu GitLab hinzu:

- Melde dich auf <https://gitlab.cs.hs-fulda.de/> mit deiner fd-Nummer an
- Klicke oben rechts auf das Avatar und navigiere zu "Preferences"/"Einstellungen"
- Navigiere links im Menü zu "SSH-Keys"/"SSH-Schlüssel"
- Kopiere den gesamten Inhalt der Datei `id_ed25519.pub` (öffentlicher Schlüssel) in das Eingabefeld für den Key
- Wähle einen Titel für den Key (z.B. deine E-Mail-Adresse)
- Klicke auf "Add Key"/"Schlüssel hinzufügen"

4. Überprüfen, ob alles funktioniert hat:

- Gib `ssh -T git@gitlab.cs.hs-fulda.de` ins Terminal ein.
- Falls eine Ausgabe mit `Are you sure you want to continue connecting` erscheint, gib `yes` ein und führe den vorherigen Befehl erneut aus.
- Du solltest nun mit deinem Usernamen begrüßt werden.
