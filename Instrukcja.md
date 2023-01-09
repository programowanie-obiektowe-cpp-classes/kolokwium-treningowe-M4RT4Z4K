# Instrukcja
Zadania wykonuj uzupełniając pliki `.hpp` w folderze `include`.
Nie modyfikuj zawartości katalogu `src`.
Po rozwiązaniu wszystkich zadań (lub upłynięciu czasu pracy) oddaj kolokwium `git push`ując do zdalnego repozytorium.
Projekt definiuje zasady kompilacji dla 5 osobnych plików wykonaywalnych odpowiadających poszczególnym zadaniom.

## Kompilacja z konsoli
Aby kompilować kolokwium z konsoli należy najpierw stworzyć w katalogu projektu folder roboczy wspólny dla wszystkich zadań (w tym przykładzie `build`):

```bash
mkdir build
cd build
```

Drzewo projektu wygląda teraz następująco:

```
kolokwium
|
\-build <- folder roboczy, tutaj jesteśmy
|
\-include
|
\-src
|
\-CMakeLists.txt
```

Następnie konfigurujemy projekt (wystarczy zrobić to raz)

```
cmake ..
```

Gdy chcemy skompilować zadanie nr X, piszemy:

```bash
cmake --build . --target zadX
```

Możemy teraz uruchomić utworzony plik wykonywalny:

```bash
./zadX
```

Jeżeli kompilacja powiodła się i testy zostały zaakceptowane możemy przejśc do pracy nad kolejnym zadaniem.

## Kompilacja w IDE
Kolokwium kompilujemy w IDE podobnie do zadań domowych z laboratorium.
Różnica polega na tym, że mamy teraz 5 plików wykonywalnych pomiędzy którymi musimy się przełączać przy pomocy odpowiedniej rozwijanej listy.
W razie wątpliwości poproś o pomoc osobę prowadzącą zajęcia.
