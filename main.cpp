#include "std_lib_facilities.h"

//Oppgave 1.a


//n = 20;
/*
def isFibo():
    a = 0;
    b = 1;
    while b < n:
        x = b;
        b = b + a;
        a = x;
    if b == n:
        print('True')
    elif b != n:
        print('False')

isFibo();

Burde vel være return egt skulle bare sjekke

*/

//Oppgave 2.a

/*
int storre(int(a), int(b)) {
    if (a > b) {
        cout << "a er større eller lik b" << endl;
        return a;
    }
    else {
        cout << "b er større eller lik a" << endl;
        return b;
    }
}

int main() {
    cout << "Oppg a" << endl;
    cout << storre(2,1) << endl;
    return 0;
}

*/

//Oppgave 2.b

/*
int fib(int(n)) {
    int a = 0;
    int b = 1;
    cout << "Fibonacci numbers" << endl;
    for (int x = 1; x < n + 1; x++) {
        cout << (x,b) << endl;
        int temp = b;
        b = b + a;
        a = temp;
    }
    cout << "-------" << endl;
    return b;

};

int main() {
    cout << fib(5) << endl;
}



// 2.d
/*
int kvad(int(n)) {
    int totSum = 0;
    for (int i = 1; i < n + 1; i++) {
        totSum += i*i;
        cout << i*i << endl;
    }
    return totSum;
}

int main() {
    cout << kvad(3) << endl;
}
*/

/*
void trekant(int(n)) {
    int acc = 1;
    int num = 2;
    cout << "Trekanttall under " << n << ":" << endl;
    while (acc < n) {
        cout << acc << endl;
        acc += num;
        num += 1;
    }

}
int main() {
    trekant(14);
}

*/


/*

bool prime(int(n)) {
    for (int j = 2; j < n; j++) {
        if (n%j == 0) {
            return false;
        }
        return true;
    }
    return 0;
}

void naiv(int(n)) {
    for (int a = 2; a < n; a++) {
        if (prime(a)) {
            cout << a << " is a prime" << endl;
        }
    }
}

int main() {
    //cout << prime(95) << endl;
    naiv(43);
}

*/

//2H
/*
void printNavn() {
    string navn;
    int alder;
    cout << "Skriv inn et navn: " << endl;
    cin >> navn;
    cout << "Skriv inn alderen til " << navn << ": " << endl;
    cin >> alder;
    cout << navn << " er " << alder << "år gammel. " << endl;
}

int main() {
    printNavn();
}
*/