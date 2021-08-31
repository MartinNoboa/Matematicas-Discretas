#ifndef DISCRETAS_H_INCLUDED
#define DISCRETAS_H_INCLUDED

//funcion para repetir main
void repetir(){
    system("pause");
    system("cls");
    main();
}


//funcion para el menu principal
void header(){
    puts("***MATEMATICAS DISCRETAS***");
    puts("***Proyecto Segundo Parcial***");
    puts("***Los Discretos***");
}

void menuPrincipal(){
    puts("Menu Principal");
    puts("1. Primer parcial.");
    puts("2. Segundo parcial.");
    puts("3. Salir.");
    printf("Opcion: ");
}


//*************************************************************************Segundo parcial
void corregir_predicados(char p1, char p2, char p3, char p4, char p5){
    printf("\n1. %c - Respuesta: Verdadero", p1);
    printf("\n2. %c - Respuesta: False", p2);
    printf("\n3. %c - Respuesta: Verdadero", p3);
    printf("\n4. %c - Respuesta: Verdadero", p4);
    printf("\n5. %c - Respuesta: Falso\n", p5);

    system("pause");
    system("cls");
}




void problemas_predicados(){
    puts("Dado el problema: P(x)=x^2 <= 10");
    puts("Evalue las siguientes proposiciones e indique sus valores de verdad (V o F).");
    puts("P(-2)");
    puts("P(-6)");
    puts("P(1)");
    puts("P(2)");
    puts("P(-4)");

    printf("\n1. ");
    char p1 = 0;
    scanf("%c%*c", &p1);
    printf("\n2. ");
    char p2 = 0;
    scanf("%c%*c", &p2);
    printf("\n3. ");
    char p3 = 0;
    scanf("%c%*c", &p3);
    printf("\n4. ");
    char p4 = ' ' ;
    scanf("%c%*c", &p4);
    printf("\n5. ");
    char p5 = ' ';
    scanf("%c%*c", &p5);

    corregir_predicados(p1,p2,p3, p4,p5);
}

void predicados(){
    puts("*****PREDICADOS*****");
    printf("\n");
    puts("Un predicado es una sentencia declarativa que contiene un numero definido de variables.");
    puts("Se vuelve en una proposicion cuando las variables son sustituidas por valores.");
    getchar();
    puts("El dominio de un predicado es el conjunto de todos los valores que pueden ser sustituidos en las variables.");
    getchar();
    problemas_predicados();

}

void corregir_cuantificadores(char c1, char c2, char c3, char c4){
    printf("\n");
    printf("\n1. %c - Respuesta A", c1);
    printf("\n2. %c - Respuesta D", c2);
    printf("\n3. %c - Respuesta C", c3);
    printf("\n4. %c - Respuesta B", c4);
    printf("\n");

    system("pause");
    system("cls");
}

void problemas_cuantificadores(){
    puts("Dado el dominio D = {1,2} ; une cada uno con su equivalente proposicional");
    puts("1. Para toda x y para toda y, P(x,y)");
    puts("2. Para toda x y para alguna y, P(x,y)");
    puts("3. Para alguna x y para toda y, P(x,y)");
    puts("4. Para alguna x y para alguna y, P(x,y)");

    puts("a. P(1,1) ^ P(1,2) ^ P(2,1) ^ P(2,2)");
    puts("b. P(1,1) v P(1,2) v P(2,1) ^ P(2,2)");
    puts("c. (P(1,1) ^ P(1,2)) v (P(2,1) ^ P(2,2))");
    puts("d. (P(1,1) v P(1,2)) ^ (P(2,1) v P(2,2))");

    printf("1. ");
    char c1 = ' ';
    scanf("%c%*c", &c1);
    printf("2. ");
    char c2 = ' ';
    scanf("%c%*c", &c2);
    printf("3. ");
    char c3 = ' ';
    scanf("%c%*c", &c3);
    printf("4. ");
    char c4 = ' ';
    scanf("%c%*c", &c4);

    corregir_cuantificadores(c1,c2,c3,c4);
}


void cuantificadores(){
    puts("*****CUANTIFICADORES*****");
    puts("**Cuantificador Universal**");
    puts("Sea Q(x) un predicado y D el dominio de Q. Una afirmacion universal es una declaracion de la forma:");
    puts("Para toda x del dominio D,Q(x)");
    getchar();
    puts("Es definida a ser verdadera si y solo si Q(x) es verdadera para todo elemento x que esta en el dominio D.");
    puts("La afirmacion es falsa si y solo si Q(x) es falsa al menos para un elemento x del dominio.");
    getchar();
    printf("\n");
    puts("**Cuantificador Existencial**");
    puts("Sea Q(x) un predicado con dominio D. Una afirmacion existencial es una declaracion de la forma:");
    puts("Para alguna x del dominio D,Q(x)");
    getchar();
    puts("Y es definida a ser verdadera si y sólo si existe en el dominio D");
    puts("al menos un valor de x para el cual Q(x) es verdadera.");
    getchar();
    problemas_cuantificadores();
}


void corregir_conjuntos(char pc1a, char pc1b, char pc1c, char pc1d, char pc2a, char pc2b, char pc2c, char pc2d){
    printf("\n");
    puts("1.");
    printf("  a. %c - Respuesta: V\n" , pc1a);
    printf("  b. %c - Respuesta: V\n" , pc1b);
    printf("  c. %c - Respuesta: F\n", pc1c);
    printf("  d. %c - Respuesta: F\n" , pc1d);
    getchar();
    puts("2.");
    printf("  a. %c - Respuesta: V\n" , pc2a);
    printf("  b. %c - Respuesta: F\n" , pc2b);
    printf("  c. %c - Respuesta: F\n", pc2c);
    printf("  d. %c - Respuesta: V\n" , pc2d);

    system("pause");
    system("cls");
}


void problemasConjuntos(){
    puts("1.");
    puts("Indique verdadero si pertenece al conjunto y falso si no pertenece. Dominio = numeros enteros");
    puts("x pertence a D, -3 < x < 5");
    puts("a. 3");
    puts("a. 6");
    puts("a. 1.5");
    puts("a. -2");

    char pc1a = ' ';
    printf("a. ");
    scanf("%c%*c", &pc1a);
    char pc1b = ' ';
    printf("b. ");
    scanf("%c%*c", &pc1b);
    char pc1c = ' ';
    printf("c. ");
    scanf("%c%*c", &pc1c);
    char pc1d = ' ';
    printf("d. ");
    scanf("%c%*c", &pc1d);

    printf("\n");
    puts("2.");
    puts("Si A = {c,d,f,i} B = {a,f} C = {c,i} , cuales son verdaderas?");
    puts("a. B subconjunto de B");
    puts("b. B subconjunto propio de B");
    puts("c. C subconjunto de B");
    puts("d. C subconjunto de A");

    printf("\n");
    char pc2a = ' ';
    printf("a. ");
    scanf("%c%*c", &pc2a);
    char pc2b = ' ';
    printf("b. ");
    scanf("%c%*c", &pc2b);
    char pc2c = ' ';
    printf("c. ");
    scanf("%c%*c", &pc2c);
    char pc2d = ' ';
    printf("d. ");
    scanf("%c%*c", &pc2d);

    corregir_conjuntos( pc1a, pc1b, pc1c,pc1d, pc2a,pc2b, pc2c, pc2d);
}

void teoriaConjuntos(){
    puts("*****TEORIA DE CONJUNTOS*****");
    puts("Un conjunto es una colección o familia de objetos.");
    puts("Se denotan con letras mayúsculas");
    getchar();

    puts("**Pertenecia a un conjunto**");
    puts("Un objeto x se dice pertenecer o ser elemento o estar en un conjunto A si: ");
    puts("Cuando el conjunto A está definido por extensión: cuando el elemento x aparece en la lista de elementos del conjunto A");
    puts("Cuando el conjunto A está definido por intención: cuando el elemento x es tomado del universo del discurso");
    puts("y cumple la propiedad establecida para A");
    getchar();

    puts("**Subconjunto**");
    puts("Diremos que un conjunto A es un subconjunto de el conjunto B si: ");
    puts("Todo elemento de A es también elemento de B.");

    getchar();

    puts("**Subconjunto**");
    puts("Diremos que un conjunto A es un subconjunto propio de el conjunto B si: ");
    puts("Todo elemento de A es también elemento de B y además existe un elemento de b que no es elemento de A.");
    getchar();

    problemasConjuntos();
}

void menu_segundoParcial(){
    puts("Segundo Parcial");
    puts("1. Predicados.");
    puts("2. Cuantificadores.");
    puts("3. Teoria de Conjuntos");
    printf("Opcion: ");
}
void eleccionSegundo(int eleccion_segundoParcial){
    switch(eleccion_segundoParcial){
        case 1: predicados();
        break;
        case 2: cuantificadores();
        break;
        case 3:
            teoriaConjuntos();
        break;
    }
}







//*************************************************************************Primer parcial
//funcion para corregir tablas
void corregir_tablas(int tabla_uno, int tabla_dos){
    if (tabla_uno == 2 && tabla_dos == 3){
        printf("\nEjericio 1 - Correcto.");
        printf("\nEjericio 2 - Correcto.\n");
        repetir();
    }else if(tabla_uno == 2 && tabla_dos !=3) {
        printf("\nEjericio 1 - Correcto.");
        printf("\nEjericio 2 - Incorrecto.\n");
        repetir();
    }else if(tabla_uno != 2 && tabla_dos ==3){
        printf("\nEjericio 1 - Incorrecto.");
        printf("\nEjericio 2 - Correcto.\n");
        repetir();
    }

}

//funcion para mostrar los ejercicios de tablas
void ejercicios_tablas(){
    //primer ejercico
    printf("\nA. ");
    printf("\nP   Q   PvQ    ~Q   Pv~Q    (PvQ)^(Pv~Q)");
    printf("\nT   F    T      F     T           F");
    printf("\nT   T    F      F     T           T");
    printf("\nF   F    T      T     F           F");
    printf("\nF   T    F      F     F           T\n");

    printf("\nP   Q   PvQ    ~Q   Pv~Q    (PvQ)^(Pv~Q)");
    printf("\nT   T    T      F     T           T");
    printf("\nT   F    T      T     T           T");
    printf("\nF   T    T      F     F           F");
    printf("\nF   F    F      T     T           F\n");

    printf("\nP   Q   PvQ    ~Q   Pv~Q    (PvQ)^(Pv~Q)");
    printf("\nT   T    T      F     T           T");
    printf("\nT   F    F      T     T           F");
    printf("\nF   T    T      T     F           T");
    printf("\nF   F    F      T     T           F\n");

    //segundo ejercicio

    printf("\nB. ");
    printf("\nP   Q   ~Q     Pv~Q   Pv~Q -> ~Q");
    printf("\nT   F    T      F         T     ");
    printf("\nT   T    F      F         T     ");
    printf("\nF   F    T      T         F     ");
    printf("\nF   T    F      F         F   \n");

    printf("\nP   Q   ~Q     Pv~Q   Pv~Q -> ~Q");
    printf("\nT   F    T      F         F     ");
    printf("\nT   T    F      F         T     ");
    printf("\nF   F    T      T         T     ");
    printf("\nF   T    F      T         F   \n");

    printf("\nP   Q   ~Q     Pv~Q   Pv~Q -> ~Q");
    printf("\nT   F    F      T         F     ");
    printf("\nT   T    T      T         T     ");
    printf("\nF   F    F      F         T     ");
    printf("\nF   T    T      T         T   \n");


    printf("\nA. ");
    int tabla_uno = 0;
    scanf("%i%*c", &tabla_uno);

    printf("\nB. ");
    int tabla_dos = 0;
    scanf("%i%*c", &tabla_dos);
    corregir_tablas(tabla_uno, tabla_dos);

}

//funcion para manu de tablas de verdad
void menu_tablas(){
    printf("\nTABLAS DE VERDAD");
    printf("\nUna tabla de verdad evalua todos los valores de verdad (Verdadero o Falso) de una/as proposicion/es.");
    printf("\nLa cantidad de reglones depende de la cantidad de variables proposicionales.");
    printf("\nEste valor esta dado por 2^n, donde n = numero de variables proposicionales.");
    getchar();
    printf("\nSe van a mostrar ejemplos de tablas de verdad.");
    printf("\nDe acuerdo a la tabla que tu realizes, ingresa el numero del que creas correcto.");
    getchar();
    ejercicios_tablas();
}



//funcion para imprimir menu principal
void menu_primerParcial(){

    printf("***Bienvenid@!***");
    printf("\n1. Tablas de Verdad");
    printf("\n2. Equivalencias Logicas.");
    printf("\n3. Argumentos.");
    printf("\nEleccion: ");
    }

//comprobar equivalenicas
void comprobar_equivalencias(int equivalencia_1, int equivalencia_2){
    if (equivalencia_1 == 0 && equivalencia_2 == 0){
            printf("\nEjercicio 1 .... OK");
            printf("\nEjercicio 2 .... OK\n");
            repetir();
    }else if(equivalencia_1 == 0 && equivalencia_2 != 0){
            printf("\nEjercicio 1 .... OK");
            printf("\nEjercicio 2 .... Error\n");
            repetir();
    }else if(equivalencia_1 != 0 && equivalencia_2 == 0){
            printf("\nEjercicio 1 .... Error");
            printf("\nEjercicio 2 .... OK\n");
            repetir();
    }
}

//ejercicos equivalencias logicas
void problemas_logicos(){
    printf("\nA. (R ^ ~P) v (R ^ P) = R");
    printf("\nB. (T ^ (~(~T v Q))) v (T ^ Q) = ~T\n");

    printf("\nA. ");
    int equivalencia_1 = 0;
    scanf("%i%*c", &equivalencia_1);

    printf("\nB. ");
    int equivalencia_2 = 0;
    scanf("%i%*c", &equivalencia_2);

    comprobar_equivalencias(equivalencia_1, equivalencia_2);

}


//menu de equivalencias logicas
void menu_logicas(){
    printf("\nEquivalencias Logicas.");
    printf("\nSe dice que 2 proposiciones son logicamente equivalentes si y solo si sus tablas de verdad son iguales para todos los valores de verdad.");
    printf("\nSe puede comprobar las equivalencias con tablas de verdad o con leyes.");
    printf("\nLas leyes son equivalencias ya comprobadas y son verdaderas para todos los casos.");
    getchar();
    printf("\nDados casos mostrados, ingrese 0 si es verdadero o 1 si es falso.");
    getchar();
    problemas_logicos();
}


//corregir argumentos
void corregir_argumentos(int resp_argumentos){
    if(resp_argumentos == 0){

        printf("\nRespuesta .... OK\n");
        repetir();
    }else{
    printf("\nRespuesta .... ERROR\n");
    repetir();
    }
}


//mostrar argumentos
void mostrar_argumentos(){
    printf("\nP -> Q");
    printf("\nQ -> P");
    printf("\nP v Q");

    printf("\nRespuesta: ");
    int resp_argumentos = 0;
    scanf("%i%*c", &resp_argumentos);

    corregir_argumentos(resp_argumentos);
}

//menu de argumentos
void menu_argumentos(){
    printf("\nARGUMENTOS");
    printf("\nLos argumentos son una secuencia de afirmaciones que terminan en una conclusion.");
    printf("\nPara comprobar si un argumento es valido se observa sus reglones criticos.");
    printf("\nLos reglones criticos se obervan en la tabla de verdad de las afirmaciones o hipotesis.");
    printf("\nPara identificar un reglon critico, busca aquellos reglones para los cuales las hipotesis sean verdaderas.");
    printf("\nFinalmente, observa la conclusion de los reglones criticos.");
    printf("\nSi posee algun reglon critico con conclusion FALSA, es un argumento invalido.");
    printf("\nAl contrario, si todos los reglones criticos tienen conclusion VERDADERA, es un argumento valido.");

    getchar();
    printf("\nSe mostraran argumentos.");
    printf("\nSi el argumento es valido, ingresa 0.");
    printf("\nSi el argumento es invalido, ingresa 1.");
    getchar();
    mostrar_argumentos();
}


//funcion para dirigir  usuario a la eleccion
void eleccion(int eleccion_primer){
    switch(eleccion_primer){
        case 1: menu_tablas();
        break;
        case 2: menu_logicas();
        break;
        case 3: menu_argumentos();
        break;
        default:
            printf("\nEleccion invalida.");
            repetir();
    }
}

#endif // DISCRETAS_H_INCLUDED
