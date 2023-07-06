#include <iostream>
#include "functions.cpp"

using namespace std;

// dichiarazione in_place
void esercizio1();

void esercizio2();

void esercizio3();

void esercizio4();

void esercizioNuovo();

void eserciziofunzioni1();

void eserciziofunzioni2();

void cicli2();

void cicli3();

void cicli4();

void cicli1();

void cicli5();

void cicli6();

void cicli7();

void cicli12();

void cicli12A();

void if1();

void if2();

void if3();

void if4();

void if5();

int main() {
    //esercizio1();
    //esercizioNuovo();
    //eserciziofunzioni1();
    //eserciziofunzioni2();
    //cicli2();
    //cicli3();
    //cicli4();
    //cicli1();
    //cicli5();
    //cicli6();
    //cicli7();
    //cicli12();
    //cicli12A();
    //if1();
    //if2();
    //if3();
    //if4();
    if5();
    return 0;
}

// definizioni in_place
void esercizioNuovo() {
    /*Scrivere due funzioni:
    - una che esegua la prima legge di ohm dato in ingresso la resistenza desiderata espressa in Kilohm.
    - una che esegua la prima legge della dinamica di Newton.

    Scrivere un menù di scelta per l'utente per decidere quale legge vuole calcolare.*/

    int nu;
    float R;
    float i;
    float a;
    float m;

    cout << "inserisci il numero 1 se vuoi la legge ohm se no premi 2 se vuoi la legge della dinamica" << endl;
    cin >> nu;

    while (nu == 1 || nu == 2) {
        if (nu == 1) {
            cout << "inserisci R" << endl;
            cin >> R;
            cout << "inserisci i" << endl;
            cin >> i;
            cout << compute_ohm_law(R, i) << endl;
        }

        if (nu == 2) {
            cout << "inserisci m" << endl;
            cin >> m;
            cout << "inserisci a" << endl;
            cin >> a;
            cout << compute_dynamic_law(m, a) << endl;
        }

        cout
                << "se vuoi che il codice finisca premi qualsiasi numero tranne 1 e 2, in caso se vorresti fare altri esercizi premi 1 per ohm e 2 per la dinamica"
                << endl;
        cin >> nu;
    }
}

void esercizio2() {
    int a;
    int b;

    std::cout << "inserisci a" << std::endl;
    std::cin >> a;
    std::cout << "inserisci b" << std::endl;
    std::cin >> b;

    int c = sum(a, b);
    std::cout << "la somma e': " << c << std::endl;

    int s = sot(a, b);
    std::cout << "la sottrazione e': " << s << std::endl;
}

void esercizio3() {
    float a;
    float b;
    float c;

    std::cout << "inerisci il coefficiente angolare" << std::endl;
    std::cin >> a;
    std::cout << "inserisci il coefficiente di y" << std::endl;
    std::cin >> b;
    std::cout << "inserisci la quota" << std::endl;
    std::cin >> c;

    std::cout << compute_m(a, b) << std::endl;
    std::cout << compute_q(b, c) << std::endl;
}

void esercizio1() {
    int x = 1;
    int y = 1;
    int old_y;
    std::cout << x << std::endl;
    std::cout << y << std::endl;

    while (y <= 100) {
        old_y = y;
        y = x + y;
        std::cout << y << std::endl;
        x = old_y;
    }

    std::cout << "Fine" << std::endl;
}

void esercizio4() {
    /*
    Scrivere una funzione che dato in ingresso le coordinate di un punto, verifichi
    che esso appartiene ad una certa retta conosciuta a priori*/

    float m;
    float q;
    float y;
    float x;

    cout << "crea un'equazione" << std::endl;
    cout << "Inserisci m" << std::endl;
    cin >> m;
    cout << "Inserici q" << std::endl;
    cin >> q;

    cout << "Inserisci adesso le coordinate" << std::endl;
    cout << "Inserisci x" << std::endl;
    cin >> x;
    cout << "Inserisci y" << std::endl;
    cin >> y;

    float y_1 = eq(m, x, q);
    cout << y_1 << std::endl;

    if (y_1 == y) {
        std::cout << "appartiene alla retta" << endl;
    } else {
        cout << "non appartiene alla retta" << endl;
    }
}

void eserciziofunzioni2() {
    int a;
    cout << "Inserisci a" << endl;
    cin >> a;
    identifier(a, 4);
}

void cicli2() {
    /*testo Calcolare an usando solo la moltiplicazione.*/
    int a;
    int b;
    int a_old;

    cout << "Inserisci a" << endl;
    cin >> a;
    cout << "inserisci b" << endl;
    cin >> b;
    a_old = a;
    for (int n = 1; n < b; n++) {
        a = a * a_old;
    }
    cout << "Il risultato e'" << a << endl;

}

void eserciziofunzioni1() {
    int a;
    int b = 100;

    cout << "inserisci a" << endl;
    cin >> a;

    cout << comparison(a, b) << endl;

    b = 1000;

    cout << comparison(a, b) << endl;

}

void cicli3() {
    /*Dati in ingresso N numeri interi, contare quante volte viene immesso il numero 9.*/
    int n;
    int c = 0;
    cin >> n;
    int number;
    for (int i = 0; i < n; i++) {
        cin >> number;
        if (number == 9) {
            c = c + 1;
            cout << "ci sono " << c << " 9" << endl;
        }
    }

}

void cicli4() {
    /*Dati in ingresso N numeri contare quanti sono divisibili per 3.*/
    int n;
    int nu;
    int count = 0;
    cout << "Inserisci n" << endl;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Inserisci nu" << endl;
        cin >> nu;
        if (nu % 3 == 0 && nu != 0) {
            count++;
        }
        cout << "hai messo " << count << " divisivili per 3" << endl;
    }
}

void cicli1() {
    /*Sommare i primi 10 numeri naturali e visualizzarne il risultato.*/
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        cout << i << endl;
        sum = sum + i;
    }
    cout << sum << endl;
}

void cicli5() {
    /*Calcolare e visualizzare il valore minimo di una serie di N misurazioni.*/

    int N;
    int number;
    int number_old = 0;
    cout << "Inserisci il numero di numeri che vorresti mettere" << endl;
    cin >> N;
    cout << "Inserisci i numeri" << endl;
    cin >> number;
    number_old = number;
    for (int i = 0; i < N - 1; i++) {
        cin >> number;
        if (number < number_old) {
            number_old = number;
        }
    }
    cout << "Il piu' piccolo e' " << number_old << endl;
}

void cicli6() {
    /*Scrivere un algoritmo che somma i primi 100 termini della seguente successione 1/1, 1/2, 1/3, 1/4, ..1/100 e stampa il risultato a video.*/
    int one = 1;
    int b = 1;
    float division;
    float sum = 0;
    for (int i = 0; i < 100; i++) {
        cout << one << "/" << b << endl;
        b++;
    }
    b = 1;
    for (int i = 0; i < 100; i++) {
        division = (float) one / (float) b;
        cout << division << endl;
        b++;
        sum = division + sum;
    }
    cout << sum << endl;
}

void cicli7() {
    /*Data una serie di numeri interi, visualizzarne la somma totale: la serie termine con l'immisione del valore 0.*/
    int N;
    int sum = 0;
    cout << "Inserisci N" << endl;
    cin >> N;
    while (N != 0) {
        sum = N + sum;
        cout << "La somma e'" << sum << endl;
        cin >> N;
    }
}

void cicli12() {
    /*Si vuole realizzare un algoritmo che consenta, dati in ingresso due numeri dei quali il secondo deve essere maggiore del primo,
     * di stampare tutti i numeri compresi tra i due,
     * cioè maggiori o uguali al primo e minori o uguali al secondo.*/
    int N_1;
    int N_2;
    cout << "Inserisci il primo numero (miraccomando deve essere minore del secondo numero)" << endl;
    cin >> N_1;
    cout << "Inserisci il secondo numero (miraccomando deve essere maggiore del primo numero)" << endl;
    cin >> N_2;
    while (N_1 < N_2) {
        for (int i = N_1; i != N_2; i++) {
            cout << i << endl;
            N_1++;
        }
        cout << N_2 << endl;
    }
}

void cicli12A() {
    /*Si vuole realizzare un algoritmo che consenta, dati in ingresso due numeri dei quali il secondo deve essere maggiore del primo,
     * di stampare tutti i numeri compresi tra i due,
     * cioè maggiori o uguali al primo e minori o uguali al secondo.*/
    int N_1, N_2;
    cout << "inserisci il primo numero" << endl;
    cin >> N_1;

    cout << "inserisci il secondo numero" << endl;
    cin >> N_2;

    if (N_1 < N_2) {
        for (int i = N_1; i <= N_2; i++) {
            cout << " " << i;
        }
    } else {
        cout << "hai sbagliato, il primo numero DEVE essere < del secondo" << endl;
    }
}

void if1() {
    /*Dato un numero verificare se è pari o dispari e visualizzare in ogni caso un opportuno messaggio*/
    int N;
    cout << "Inserisci N" << endl;
    cin >> N;
    if (N % 2 == 0) {
        cout << "E' Pari" << endl;
    } else {
        cout << "E' Dispari" << endl;
    }
}

void if2() {
    /*Dati due numeri interi, verificare se sono uno il multiplo dell'altro.*/
    int N_1;
    int N_2;
    cout << "Inserisci il primo  numero" << endl;
    cin >> N_1;
    cout << "Inserisci il secondo numero" << endl;
    cin >> N_2;

    if (N_2 % N_1 == 0) {
        cout << " E' un multiplo di " << N_1 << endl;
    } else {
        if (N_1 % N_2 == 0) {
            cout << "E' un multiplo di " << N_2 << endl;
        } else {
            cout << "Nessun numero e' multiplo dell'altro" << endl;
        }
    }
}

void if3() {
    /*Digitati due numeri stabilire se sono entrambi positivi,
     * o entrambi negativi oppure se sono uno positivo e l’altro negativo.*/

    int N_1;
    int N_2;
    cout << "Inserisci il primo numero" << endl;
    cin >> N_1;
    cout << "Inserisci il secondo numero" << endl;
    cin >> N_2;

    if (N_1 < 0) {
        cout << "Il primo numero e' negativo" << endl;
    }
    if (N_1 > 0) {
        cout << "Il primo numero e' positivo" << endl;
    }
    if (N_1 == 0) {
        cout << "Il primo numero e' neutro" << endl;
    }
    if (N_2 < 0) {
        cout << "Il secondo numero e' negativo" << endl;
    }
    if (N_2 > 0) {
        cout << "Il secondo numero e' positivo" << endl;
    }
    if (N_2 == 0) {
        cout << "Il secondo numero e' neutro" << endl;
    }
}

void if4() {
    /*Digitati tre numeri, stabilire se sono in ordine crescente.*/

    int n1;
    int n2;
    int n3;

    cout << "Inserisci il primo numero" << endl;
    cin >> n1;
    cout << "Inserisci il secondo numero" << endl;
    cin >> n2;
    cout << "Inserisci il terzo numero" << endl;
    cin >> n3;

    if (n1 < n2 && n2 < n3) {
        cout << " I tre numeri sono in ordine crescente" << endl;
    }else{
        cout << "I tre numeri non sono in ordine crescente" << endl;
    }
}

void if5(){
    /*Date le coordinate di un punto su un piano cartesiano, verificare se il punto appartiene ad uno degli assi.*/

    int x;
    int y;

    cout << "Inserisci x" << endl;
    cin >> x;
    cout << "Inserisci y" << endl;
    cin >> y;

    if (x == 0 && y == 0){
        cout << "Il punto e' l'origine, cioe' tocca tutte e due le assi, asse x e asse y" << endl;
    }else{
        if (x == 0){
            cout << "La x tocca l'asse delle y" << endl;
        }else{
            if(y == 0){
                cout << "La y tocca l'asse delle x" << endl;
            }else{
                cout << "Nessuno dei punti appartengono agl'assi" << endl;
            }
        }
    }
}

