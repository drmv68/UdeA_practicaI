#include <iostream>
#include <cstdlib>


using namespace std;

int ej1(){
    int a=0, b=0, c=0;
    cout << "ingrese numero A: ";
    cin >> a;
    cout << "ingrese numero B: ";
    cin >> b;

    if(b==0){
        cout << "el numero B debe ser diferente de 0 ";
        ej1();
    }

    c = a%b;

    cout << "El residuo entre los numeros A y B es: " << c << endl;

    return 0;
}

int ej2 (){

    int n=0;
    cout<<"ingrese numero n: ";
    cin >> n;

    int operacion=n%2;
    if(operacion == 0){
        cout << "El numero es par. ";
    } else {
        cout << "El numero es impar. ";
    }

    return 0;
}

int ej3(){
    int a=0, b=0;
    cout << "ingrese numero 'a' a comprar : ";
    cin >> a;
    cout << "ingrese numero 'b' a comprar : ";
    cin >> b;

    if(a>b){
        cout<<"El numero mayor es : "<< a;
    } else {
        cout << "El numero mayor es : "<< b;
    }

    return 0;
}

int ej4(){
    int a=0, b=0;
    cout << "ingrese numero 'a' a comprar : ";
    cin >> a;
    cout << "ingrese numero 'b' a comprar : ";
    cin >> b;

    if(a<b){
        cout<<"El numero menor es : "<< a;
    } else {
        cout << "El numero menor es : "<< b;
    }

    return 0;
}

int ej5(){
    int n=0, b=0;
    cout << "ingrese numero a divir: ";
    cin >> n;
    cout << "segundo numero(dividendo): ";
    cin >> b;

    int operacion=n/b;
    cout << "La operacion da: " << operacion;

    return 0;
}

int ej6(){
    int a=0, b=0, resultado=1;

    cout << "Ingrse el numero a elevar: ";
    cin >> a;
    cout << "A cuento se quiere elevar: ";
    cin >> b;

    for(int i=0; i<=b; i++){
        resultado*=resultado;
    }

    cout << "El resultado es: "<< resultado;
    return 0;
}

int ej7(){
    int a=0, b=0, resultado=1;

    cout << "Ingrse el numero a elevar: ";
    cin >> a;
    cout << "A cuento se quiere elevar: ";
    cin >> b;

    for(int i=0; i<=b; i++){
        resultado+=resultado;
    }

    cout << "El resultado es: "<< resultado;
    return 0;
}

int ej8(){
    int a=0, resultado=0;
    cout << "hasta que numero sumar?: ";
    cin >> a;

    for(int i=1; i<=a; i++){
        resultado*=resultado;
    }

    cout<<"resultado: "<< resultado;

    return 0;
}


int ej9(){
    int radio=0, perimetro=0, area=0;
    float pi=3.1416;
    cout << "Ingrese el valor del radio: ";
    cin >>radio;

    perimetro=2*pi*radio;
    area=pi*radio*radio;

    cout<<"Resultado del perimetro: " << perimetro << "resultado del area: " << area;
    return 0;
}

int ej10(){
    int a=0, resultado=0;
    cout << "numero a conocer multiplos: ";
    cin >> a;

    for(int i=1; i<=100; i++){
        resultado=a*i;
        cout << resultado << endl;
    }

    return 0;
}

int ej11(){
    int a=0, resultado=0;
    cout << "numero a conocer multiplos hasta el 10: ";
    cin >> a;

    for(int i=1; i<=10; i++){
        resultado=a*i;
        cout << resultado << endl;
    }

    return 0;
}

int ej12(){
    int a=0;

    cout << "Ingrse el numero a elevar hasta 5: ";
    cin >> a;

    for(int i=0; i<=5; i++){
        a*=a;
    }

    cout << "resultado: " << a;
    return 0;
}

int ej14(){
    int x = 0;
    int y = 50;
    int disminuirIteracion = 1;

    for(int i = 1; i <= 50; i++){
        x = i;
        y -= disminuirIteracion;

        cout << x << "    " << y << endl;
    }
    return 0;
}

int ej16() {
    int x = 0;
    int iteracciones = 0;
    int acumulador = 0;
    int promedioEntero = 0;
    int resto = 0;

    do {
        cout << "ingresar numero para hacer promedio: ";
        cin >> x;

        if (x != 0) {
            acumulador += x;
            iteracciones++;
        }

    } while (x != 0);

    if (iteracciones > 0) {
        promedioEntero = acumulador / iteracciones;
        resto = acumulador % iteracciones;

        cout << "el promedio es: " << promedioEntero;

        if (resto != 0) {
            cout << "." << resto;
        }

    } else {
        cout << "no se ingresaron números para calcular el promedio " << endl;
    }

    return 0;
}

int ej18(){
    int numeroIngresado = 0;
    int operacion = 0;
    cout << "ingrese numero para saber si es cuadrado perfecto o no:  ";
    cin >> numeroIngresado;

    for(int i = 0; i <= numeroIngresado; i++){
        operacion = i*i;

        if(numeroIngresado==operacion){
            cout << "es un cuadrado perfecto, segun yo xD" << endl;
            break;
        } else if (numeroIngresado == i+1){
            cout << "No es un cuadrado perfecto" << endl;
        }
    }
    return 0;
}

int ej20(){
    int numeroPalindromo;
    int numeroOriginal;
    int contadorLongitudNumero = 0;

    cout << "Ingrese un numero para saber si es un palindromo o no: ";
    cin >> numeroPalindromo;

    numeroOriginal = numeroPalindromo;

    int numero = numeroPalindromo;
    while (numero != 0) {
        numero /= 10;
        contadorLongitudNumero++;
    }

    if (numeroPalindromo == 0) {
        contadorLongitudNumero = 1;
    }

    bool esPalindromo = true;
    for (int i = 0; i < contadorLongitudNumero / 2; i++) {
        int divisorIzq = 1;
        for (int j = 0; j < contadorLongitudNumero - i - 1; j++) {
            divisorIzq *= 10;
        }

        int divisorDer = 1;
        for (int j = 0; j < i; j++) {
            divisorDer *= 10;
        }

        int digitoIzq = (numeroPalindromo / divisorIzq) % 10;
        int digitoDer = (numeroPalindromo / divisorDer) % 10;

        if (digitoIzq != digitoDer) {
            esPalindromo = false;
            break;
        }
    }

    if (esPalindromo) {
        cout << "El numero " << numeroOriginal << " es un palindromo." << endl;
    } else {
        cout << "El numero " << numeroOriginal << " no es un palindromo." << endl;
    }

    return 0;
}

int ej22(){
    int segTotales;
    cout << "ingres los segundos para transformarlo al formato hh:mm:ss ";
    cin >> segTotales;

    int horas = segTotales / 3600;
    int minutos = (segTotales % 3600) / 60;
    int segundos = segTotales % 60;

        cout << (horas < 10 ? "0" : "") << horas << ":"
             << (minutos < 10 ? "0" : "") << minutos << ":"
             << (segundos < 10 ? "0" : "") << segundos << endl;

    return 0;
}

int ej24(){
    int anchoYlargo;
    cout << "Ingrese el ancho y largo del cuadrado: ";
    cin >> anchoYlargo;

    for(int i = 0; i < anchoYlargo; i++) {
        for(int j = 0; j < anchoYlargo; j++) {
            if(i == 0 || i == anchoYlargo - 1 || j == 0 || j == anchoYlargo - 1) {
                cout << "+";
            } else {
                cout << " ";
            }
        }
        cout << "\n";
    }

    return 0;
}

int ej26(){
    int a, b, c;
    cout << "Que tipo de triangulo es? (isosceles, equilatero, escaleno) \n"
         << "Ingrese el lado A: ";
    cin >> a;
    cout << "Ingrese el lado B: ";
    cin >> b;
    cout << "Ingrese el lado C: ";
    cin >> c;

    if (a == b && b == c) {
        cout << "\n  -Es un triangulo equilatero mi rey";
    } else if (a == b || b == c || a == c) {
        cout << "\n  -Es un triangulo isosceles mami" << endl;
    } else if (a != b && b != c && a != c) {
        cout << "\n  -Es un triangulo escaleno" << endl;
    } else {
        cout << "\n  -Es otro tipo de triangulo" << endl;
    }

    return 0;
}

int ej28(){
    int aproximacion = 0;
    double result = 0.0;
    cout << "Cuantas fracciones quieres aproximar? ";
    cin >> aproximacion;

    for(int i = 0; i < aproximacion; i++) {
        int divisor = 2 * i + 1;
        double term = (i % 2 == 0 ? 1.0 : -1.0) / divisor;
        result += term;
    }

    result *= 4;
    cout << "Resultado aproximado es: " << result << endl;

    return 0;
}

int ej30(){
    int semilla = 0;
    int x = 0;
    int interaccionUno = 0;

    cout << "Introduce un numero para cambiar la semilla del generador(del uno al mil): " <<endl;
    cin >> semilla;

    srand(semilla);
    int numeroRandom = rand() % 100 + 1;

    cout << "Ingresa un numero para adivinar. " << endl;
    cin >> x;

    do {
        if (interaccionUno != 0) {
            cout << "Ingresa un nuevo numero para adivinar. " << endl;
            cin >> x;
        }

        if (x > numeroRandom) {
            cout << "Ingresa un numero menor" << endl;
        } else if (x < numeroRandom) {
            cout << "Ingresa un numero mayor" << endl;
        } else {
            cout << "El numero es igual!" << endl;
        }

        interaccionUno++;

    } while (x != numeroRandom);

    return 0;
}

int ej32(){
    int cantidad;
    cout << "Introduce la cantidad de dinero: ";
    cin >> cantidad;

    int billetesMonedas[10] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};
    int resultado[10] = {0};

    int faltante = cantidad;

    for (int i = 0; i < 10; i++) {
        resultado[i] = faltante / billetesMonedas[i];
        faltante = faltante % billetesMonedas[i];
    }

    cout << "La cantidad mínima de billetes y monedas para " << cantidad << " es:\n";
    for (int i = 0; i < 10; i++) {
        cout << billetesMonedas[i] << " : " << resultado[i] << endl;
    }

    if (faltante > 0) {
        cout << "Faltante: " << faltante << endl;
    } else {
        cout << "Faltante: 0" << endl;
    }

    return 0;
}

int ej34(){
    int horaActual;
    int duracion;

    cout << "Introduce la hora actual (en formato HHMM): ";
    cin >> horaActual;

    if (horaActual < 0 || horaActual >= 2400 || (horaActual % 100 >= 60)) {
        cout << horaActual << " es un tiempo invalido." << endl;
        return 1;
    }

    cout << "Introduce la duracion (en formato HHMM): ";
    cin >> duracion;

    if (duracion < 0 || duracion >= 2400 || (duracion % 100 >= 60)) {
        cout << duracion << " es un tiempo invalido." << endl;
        return 1;
    }

    int horasActuales = horaActual / 100;
    int minutosActuales = horaActual % 100;

    int horasDuracion = duracion / 100;
    int minutosDuracion = duracion % 100;

    int minutosTotales = minutosActuales + minutosDuracion;
    int horasTotales = horasActuales + horasDuracion;

    if (minutosTotales >= 60) {
        minutosTotales -= 60;
        horasTotales += 1;
    }

    if (horasTotales >= 24) {
        horasTotales -= 24;
    }

    int resultado = horasTotales * 100 + minutosTotales;

    cout << "La hora es " << resultado << "." << endl;

    return 0;
}

int ej36(){
    int numElementos;

    cout << "Introduce el numero de elementos para la aproximacion de e: ";
    cin >> numElementos;

    if (numElementos <= 0) {
        cout << "El numero de elementos debe ser mayor que 0." << endl;
        return 1;
    }

    double e = 0.0;
    double factorial = 1.0;

    for (int i = 0; i < numElementos; ++i) {
        if (i > 0) {
            factorial *= i;
        }
        e += 1.0 / factorial;
    }

    cout << "e es aproximadamente: " << e << endl;

    return 0;

}

int ej38(){
    int a, b, c;
    int suma = 0;

    cout << "Introduce el valor de a: ";
    cin >> a;
    cout << "Introduce el valor de b: ";
    cin >> b;
    cout << "Introduce el valor de c: ";
    cin >> c;

    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Todos los valores deben ser mayores que 0." << endl;
        return 1;
    }

    bool yaSumado[c] = {false};

    for (int i = a; i < c; i += a) {
        if (!yaSumado[i]) {
            suma += i;
            yaSumado[i] = true;
        }
    }

    for (int i = b; i < c; i += b) {
        if (!yaSumado[i]) {
            suma += i;
            yaSumado[i] = true;
        }
    }

    cout << "La suma de los multiplios de " << a << " y " << b << " menores a " << c << " es: " << suma << endl;

    return 0;
}

int ej40(){
    int n;
    cout << "Introduce el valor de n: ";
    cin >> n;

    if (n <= 0) {
        cout << "El valor de n debe ser mayor que 0." << endl;
        return 1;
    }

    int count = 0;
    int num = 2;

    while (count < n) {
        bool esPrimo = true;
        for (int i = 2; i * i <= num; ++i) {
            if (num % i == 0) {
                esPrimo = false;
                break;
            }
        }

        if (esPrimo) {
            ++count;
        }

        if (count < n) {
            ++num;
        }
    }

    cout << "El primo numero " << n << " es: " << num << endl;

    return 0;
}


int ej42(){
    int num;
    cout << "Introduce un numero: ";
    cin >> num;

    if (num <= 1) {
        cout << "El numero debe ser mayor que 1." << endl;
        return 1;
    }

    int maxFactorPrimo = 0;
    int divisor = 2;

    while (num > 1) {
        if (num % divisor == 0) {
            maxFactorPrimo = divisor;
            while (num % divisor == 0) {
                num /= divisor;
            }
        }
        ++divisor;
    }

    cout << "El mayor factor primo de 33 es: " << maxFactorPrimo << endl;

    return 0;

}


int ej44(){
    int maxPalindromo = 0;
    int factor1 = 0;
    int factor2 = 0;

    for (int i = 100; i <= 999; ++i) {
        for (int j = i; j <= 999; ++j) {
            int product = i * j;
            int originalProduct = product;
            int reversedProduct = 0;

            while (product > 0) {
                reversedProduct = reversedProduct * 10 + (product % 10);
                product /= 10;
            }

            if (reversedProduct == originalProduct) {
                if (originalProduct > maxPalindromo) {
                    maxPalindromo = originalProduct;
                    factor1 = i;
                    factor2 = j;
                }
            }
        }
    }

    cout << factor1 << "*" << factor2 << "=" << maxPalindrome << endl;

    return 0;
}


int main()
{
    int x;

    while(true){

        cout << "Ingrese el numero del ejercicio: " << endl;
        cin >> x;

        switch(x){
        case 2:
            ej2();
            break;
        case 4:
            ej4();
            break;
        case 6:
            ej6();
            break;
        case 8:
            ej8();
            break;
        case 10:
            ej10();
            break;
        case 12:
            ej12();
            break;
        case 14:
            ej14();
            break;
        case 16:
            ej16();
            break;
        case 18:
            ej18();
            break;
        case 20:
            ej20();
            break;
        case 22:
            ej22();
            break;
        case 24:
            ej24();
            break;
        case 26:
            ej26();
            break;
        case 28:
            ej28();
            break;
        case 30:
            ej30();
            break;
        case 32:
            ej32();
            break;
        case 34:
            ej34();
            break;
        case 36:
            ej36();
            break;
        case 38:
            ej38();
            break;
        case 40:
            ej40();
        case 42:
            ej42();
            break;
        case 44:
            ej44();
            break;
        default:
            cout << "Opcion no valida" << endl;
            break;
        }
    }
    return 0;
}
