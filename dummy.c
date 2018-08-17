extern int variable; //extern actua como pasar de un archivo y configurar a otro archivo

int dummy(void){
    printf("\ndummy\n");
    variable=2;
    return variable;
}
