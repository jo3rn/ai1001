# Lösungen

für altes Übungsblatt 7 (18. Oktober 2017)

## 1.1

Mögliche Lösungen finden sich in der Datei `learnRegex.sh`

# 1.2

grep -Pao '\+?\d+[\s\-]\(?\d+[\)\-\s](/\s)?\d*\s?\d+\s?\-?\s?\d*' kaputt.txt

`grep -Pao '((\+\d{2}|\d{3}) (\d{2} \d{7}|((\(?\d{2}\)?|\(\d\)\d{2}) |)\d{5} ?- ?\d{2})|\+\d{2}-\d{2}-\d{7}|\d{4} \d \d{6}|\d \d{2} \/ (\d{2} ){2}\d{2})' kaputt.txt`

# 1.3

grep -Eo 'NOQUEUE.\*' mail.log | grep -Eo '[a-zA-Z\._0-9]+@[a-zA-Z0-9_\-]+(\.\w+)+' | sort | uniq

# 1.4

grep -Ev '^$|^#|._udp._' services | grep -E '#' > services1

# 2.1

## 2.1.1

echo "Belgien ist eine wunderschöne Stadt" | sed -En 's/\w+/(&)/gp'

## 2.1.2

echo "HaRRy, hOl scHoN mAL den WaGEN" | sed -En 's/(\w)(\w+)/\1\L\2/gp'

## 2.1.3

echo "Magermilchjoghurt" | sed -En 's/[aeiou]/\U&/gp'

## 2.1.4

sed '/^[[:space:]]\*$/d'

# 2.2

sed -e 's/\/tcp//g' -e 's/#//g' services1 > services2

# 3.1

awk -F ' +' '{printf "\"%s\" benutzt Port %s\n", $3, $2}' services2 > services3

# 4.1

# 4.2
