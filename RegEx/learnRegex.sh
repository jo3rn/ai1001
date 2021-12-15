#!/bin/bash
# https://regexone.com/

TASK_COUNT=1
SOLUTIONS=()

############################################################################## functions

function task {
  echo -e "Aufgabe $TASK_COUNT: $1 (\"Skip\" zum Überspringen)"
  echo -e "$2"
  
  while true ; do
    echo -en "Schreibe einen regulären Ausdruck,\nder mit \"grep -P\" folgende Eingaben matched:\n$3\nRegex:"
    read -re REGEX
    RESULT=`echo -e "$INPUT" | grep -P "$REGEX"` 
    LSG=`echo -e "$INPUT" | grep -P "$4"`
    if [ "$RESULT" == "$LSG" ] ; then
      echo -e "Korrekt!"
      SOLUTIONS+=($REGEX)
      break;
    fi
    if [ "$REGEX" == "Skip" ] ; then
      echo -e "Skip!"
	  REGEX=""
      SOLUTIONS+=('Skip')
      break;
    fi
    echo -e "\nDa stimmt etwas nicht; Der Ausdruck liefert:\n$RESULT\n\nProbiere es nochmal:"
  done
  ((TASK_COUNT++))
  sleep 2
  clear
}

function groupTask {
  echo -e "Aufgabe $TASK_COUNT: $1 (\"Skip\" zum überspringen)"
  echo -e "$2"
  IFS=$'\n'
  
  while true ; do
    echo -en "Schreibe einen regulären Ausdruck mit Gruppen,\nder folgende Eingaben matched\n$6\nRegex:"
    read -re REGEX
    RESULT=""
    for l in `echo -e $3` ; do
      if [[ $l =~ $REGEX ]] ; then
        RESULT="$RESULT${BASH_REMATCH[1]}\n"
      fi
    done
	
    if [ "$RESULT" == "$5" ] ; then 
      echo -e "Korrekt!"
      SOLUTIONS+=($REGEX)
      break;
    fi
    if [ "$REGEX" == "Skip" ] ; then
      echo -e "Skip!"
	  REGEX=""
      SOLUTIONS+=('Skip')
      break;
    fi
    echo -e "\nDa stimmt etwas nicht; Der Ausdruck liefert:\n$RESULT\n\nProbiere es nochmal:"
  done
  ((TASK_COUNT++))
  sleep 2
  clear
}

############################################################################## 

clear
echo -e "\t+--------------------------------------------------+"
echo -e "\t| Willkommen bei der Übung zu Regulären Ausdrücken |" 
echo -e "\t+--------------------------------------------------+"

############################################# 
TITLE="Wildcards"
HELP="\nDer Punkt (.) ist ein Metazeichen, welches jedes beliebige Zeichen\nmatched. Um ein Metazeichen zu escapen, können Sie ein\nvorangestelltes \ benutzen.\n"
INPUT="cat.\n896.\n?=+.\nabc1\t<-- Nicht matchen" 
SOLUTION_REGEX="...\."
task "$TITLE" "$HELP" "$INPUT" "$SOLUTION_REGEX"

############################################# 
TITLE="Match Characters"
HELP="Um eine Auswahl zwischen spezifischen Zeichen zu ermöglichen, können \ndiese in eckige Klammern geschrieben werden, z.B. [abc] \n"
INPUT="can\nman\nfan\ndan\t<-- Nicht matchen\nran\t<-- Nicht matchen\npan\t<-- Nicht matchen" 
SOLUTION_REGEX="[cmf]an"
task "$TITLE" "$HELP" "$INPUT" "$SOLUTION_REGEX"

############################################# 
TITLE="Excluding Characters"
HELP="Um einzelne Zeichen auszuschließen, kann das ^ vorangestellt werden z.B. [^a]bc\n"
INPUT="hog\ndog\nbog\t<-- Nicht matchen" 
SOLUTION_REGEX="[^b]og"
task "$TITLE" "$HELP" "$INPUT" "$SOLUTION_REGEX"

############################################# 
TITLE="Ranges"
HELP="Bereiche können mit Bindestrich angegeben werden, z.B. [3-5]\n"
INPUT="Ana\nBob\nCpc\t<-- Nicht matchen" 
SOLUTION_REGEX="[A-C].."
task "$TITLE" "$HELP" "$INPUT" "$SOLUTION_REGEX"

############################################# 
TITLE="Zahlen"
HELP="Eine beliebige einstellige Zahl kann entweder durch [0-9] oder \d gematched werden.\n"
INPUT="1 file found?\n2 files found?\n24 files found?\nNo files found.\t<-- Nicht matchen" 
SOLUTION_REGEX="\d+ files? found\?"
task "$TITLE" "$HELP" "$INPUT" "$SOLUTION_REGEX"

############################################# 
TITLE="Wiederholungen"
HELP="Um eine eine Anzahl an Wiederholungen festzulegen, können geschweifte \nKlammern genutzt werden, z.B. a{2,4}\n"
INPUT="wazzzzzup\nwazzzup\nwazup\t    <-- Nicht matchen" 
SOLUTION_REGEX="waz{3,5}up"
task "$TITLE" "$HELP" "$INPUT" "$SOLUTION_REGEX"

############################################# 
TITLE="Wiederholungen 2"
HELP="Der Kleene Star reprästentiert .{0,Unendlich}, das Kleene Plus .{1,Unendlich}\n"
INPUT="aaaabcc\naabbbbc\naacc\na\t   <-- Nicht matchen" 
SOLUTION_REGEX="aa+b*c+"
task "$TITLE" "$HELP" "$INPUT" "$SOLUTION_REGEX"

############################################# 
TITLE="Leerzeichen"
HELP="\s repräsentiert unter anderem Leerzeichen, Tabs und Zeilenumbrüche.\n"
INPUT="1.   abc\n2.      abc\n3.           abc\n4.abc\t\t   <-- Nicht matchen" 
SOLUTION_REGEX="\d\.\s+abc"
task "$TITLE" "$HELP" "$INPUT" "$SOLUTION_REGEX"

############################################# 
TITLE="Start und Ende"
HELP="^ vorangestellt und $ nachgestellt repräsentieren Zeilenanfang und Zeilenende\n"
INPUT="Mission: successful\nLast Mission: unsuccessful\t\t\t\t<-- Nicht matchen\nNext Mission: successful upon capture of target\t\t<-- Nicht matchen" 
SOLUTION_REGEX="^Mission: successful$"
task "$TITLE" "$HELP" "$INPUT" "$SOLUTION_REGEX"

############################################# 
TITLE="Gruppen"
HELP="Mit runden Klammern können Gruppen definiert werden, um Teile von Zeichenketten zu extrahieren\n"
INPUT="file_record_transcript.pdf\nfile_07241999.pdf\ntestfile_fake.pdf.tmp"
TEXT="file_record_transcript.pdf\t<-- file_record_transcript\nfile_07241999.pdf\t\t<-- file_07241999\ntestfile_fake.pdf.tmp\t\t<-- Nicht matchen"
SOLUTION_REGEX='^(file.+)\.pdf$'
EXPECT="file_record_transcript\nfile_07241999\n"
groupTask "$TITLE" "$HELP" "$INPUT" "$SOLUTION_REGEX" "$EXPECT" "$TEXT"

############################################# 
TITLE="OR"
HELP="Mittels (abc|xyz) können verschiedene Sets angegeben werden.\n"
INPUT="I love cats\nI love dogs\nI love logs\t<-- Nicht matchen\nI love bogs\t<-- Nicht matchen"
SOLUTION_REGEX="I love (cats|dogs)"
task "$TITLE" "$HELP" "$INPUT" "$SOLUTION_REGEX"


############################################# SOLUTION
for ((i = 0; i < ${#SOLUTIONS[@]}; i++ )); do 
  echo "Aufgabe $(($i+1)): ${SOLUTIONS[$i]}"
done

echo "ENDE"
