
// Write 2 functions - one to print "Hello" and another to print "good bye".
/* #include <stdio.h>
void Hello(); // function prototype
void Goodbye(); // function prototype
int main(){
    Hello(); // function call
    Goodbye(); // function call
    return 0;
}
void Hello(){ // function definition
    printf("Hello \n");               
}
void Goodbye(){ // function definition
    printf("Good Bye \n");
} */



// Write a function that prints Namaste if user is Indian & Bonjour if the user is French.
/* #include<stdio.h>
void namaste();
void bonjour();
int main(){
    printf("Enter f for French & i for Indian : ");
    char ch;
    scanf("%c",&ch);
    if(ch == 'i'){
        namaste();
    } 
    else{
        bonjour();
    }
    return 0;
}
void namaste(){
    printf("Namaste \n");
}
void bonjour(){
    printf("Bonjour \n");
}*/



/* #include<stdio.h>
int sum(int a,int b); // int a, int b is called parameter(functions can take value)
int main(){
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    int s = sum(a,b); // sum(a,b) means int sum(int a,int b);The return value of sum function is then stored in a new integer variable s.
    printf("Sum is : %d \n",s);
    return 0;
}
int sum(int a, int b){
    return a+b; // return value (functions give some value)  
} */



/* #include<stdio.h>
void printTable(int n);
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);
    printTable(n); // argument / actual parameter : used to send value 
    return 0;
}
void printTable(int n){ // parameter / formal parameter : used to receive value
    for(int i = 1;i<=10;i++){
        printf("%d \n",i*n);
    }
}*/




