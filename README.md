### Clasa `Animal`

Clasa `Animal` este o clasă abstractă, care servește ca bază pentru clasele derivate `Caine` și `Pisica`. Această clasă conține următoarele membri de date:

- `lastID` (static): Un membru static care stochează ultimul ID generat pentru un animal.
- `id`: Un număr întreg care reprezintă ID-ul unic al animalului.
- `nume`: Un șir de caractere care reprezintă numele animalului.
- `varsta`: Un număr întreg care reprezintă vârsta animalului.

De asemenea, clasa `Animal` conține următoarele metode:

- `Animal(std::string _nume, int _varsta)`: Constructorul clasei `Animal` care primește numele și vârsta animalului și inițializează membrii corespunzători.
- `getID() const`: Metoda getter care returnează ID-ul animalului.
- `virtual std::string getInfo() const = 0`: Metoda pur virtuală care returnează o descriere a animalului. Această metodă trebuie implementată în clasele derivate.

### Clasa `Caine`

Clasa `Caine` este o clasă derivată a clasei `Animal` și adaugă caracteristici specifice câinilor. Aceasta conține variabila suplimentară:

- `rasa`: Un șir de caractere care reprezintă rasa câinelui.

De asemenea, clasa `Caine` suprascrie metoda `getInfo()` pentru a returna o descriere specifică câinilor, care include rasa.

### Clasa `Pisica`

Clasa `Pisica` este o clasă derivată a clasei `Animal` și adaugă caracteristici specifice pisicilor. Aceasta conține variabila suplimentară:

- `rasa`: Un șir de caractere care reprezintă rasa pisicii.

La fel ca în clasa `Caine`, clasa `Pisica` suprascrie metoda `getInfo()` pentru a returna o descriere specifică pisicilor, care include rasa.

### Funcționalitatea aplicației

Aplicația "Gestiunea Animalelor" oferă următoarele funcționalități:

1. Adăugarea unui animal: Utilizatorul poate adăuga un nou animal în sistem. Utilizatorul va introduce numele, vârsta și rasa animalului. Apoi, utilizatorul va alege tipul de animal (câine sau pisică). Animalul va primi un ID unic generat automat și va fi adăugat în lista de animale.
2. Afișarea informațiilor despre animale: Utilizatorul poate vizualiza informațiile despre toate animalele din sistem. Aplicația va afișa ID-ul, numele, vârsta și rasa fiecărui animal.
3. Interac

țiunea cu utilizatorul: Aplicația va oferi un meniu interactiv pentru a permite utilizatorului să aleagă opțiunile dorite și să interacționeze cu sistemul.

### Implementarea și utilizarea aplicației

Pentru a utiliza aplicația "Gestiunea Animalelor", trebuie să creați un fișier sursă `main.cpp` în care să includeți fișierele de antet ale claselor (`Animal.h`, `Caine.h`, `Pisica.h`) și să implementați funcționalitățile necesare. Puteți utiliza vectori pentru a stoca animalele și bucle pentru a afișa informațiile și a interacționa cu utilizatorul.

În cadrul funcționalităților, veți crea obiecte de tipul claselor `Caine` și `Pisica` pentru a adăuga și afișa informațiile despre animale.

Asigurați-vă că dezalocați memoria alocată pentru obiectele animalului la finalul programului pentru a evita scurgerile de memorie.

Aceasta este o prezentare generală a proiectului "Gestiunea Animalelor". Dacă doriți detalii suplimentare sau cod specific pentru funcționalitățile menționate, vă rugăm să specificați cerințele sau întrebările suplimentare.
