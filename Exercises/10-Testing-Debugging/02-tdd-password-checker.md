In einem fiktiven Scrum Team hast Du Dir die Aufgabe "Überprüfe Passwortstärke" aus der User Story "Login Screen" zugewiesen. Schreibe eine Funktion (C oder Java) `checkPassword`, mit einem String als Parameter und einem Integer als Rückgabewert. Halte Dich dabei an die TDD-Methode (Red-Green-Refactor). Der Rückgabewert soll sich folgendermaßen verhalten:

- kleinste Bitstelle: `1`, wenn Passwort länger als 7 Zeichen, ansonsten `0`
- nächste Bitstelle: `1`, wenn Passwort mind. einen Kleinbuchstaben enthält, ansonsten `0`
- nächste Bitstelle: `1`, wenn Passwort mind. einen Großbuchstaben enthält, ansonsten `0`
- nächste Bitstelle: `1`, wenn Passwort mind. eine Ziffer enthält, ansonsten `0`

Der Einfachheit halber nehmen wir an, dass das Passwort nur aus ASCII-Zeichen besteht. Bei Bedarf kannst Du aber auch mit `ctype.h` arbeiten.

Beispiele/Testfälle:

- Das Passwort "helloworld" produziert das Bitmuster `0011`, da es keine Ziffer und keinen Großbuchstaben enthält. Der Rückgabewert als Dezimalzahl ist `3`.
- Passwort "H3llo" → `1110`, weil es nicht länger als 7 Zeichen ist → Rückgabewert `14`
