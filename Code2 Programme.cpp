
#include <iostream> 
using namespace std ;


// Valide value Number of 0 (Sum4 : /)
bool ValideTowNumber(short Num1 , short Num2){
  return (Num1 == 0 || Num2 == 0);
}


void ReadNumberAndOper(short &Num1 , short &Num2 , char &Oper){
	
	cout << "Entre Number 1 : " << endl ;
	cin >> Num1 ; 
	
	cout << "Entre Number 2 : " << endl ;
	cin >> Num2 ;
	
	cout << "Entre operator : " << endl ;
	cin >> Oper ;
}


// Tout function of Stetment Arthimatic Calucatrice
short CalculatePlus(short Num1 , short Num2){
	return Num1 + Num2 ;
}
short CalculateMinus(short Num1 , short Num2){
	return Num1 - Num2 ;
}
short CalculateMultiplication(short Num1 , short Num2){
	return Num1 * Num2 ;
}
short CalculateDivision(short Num1 , short Num2){
	if(ValideTowNumber(Num1 , Num2)){
		return 0 ;
	}else{
		return Num1 / Num2 ;
	}
}


void PrintRuslt(short Num1 , char Oper , short Num2 , short Ruslt){
    cout << "Ruslt : " << Num1 << " " << Oper << " " << Num2 << " = " << Ruslt << endl ;
}

// Calculatrice Programme 
void calculatorResult(short Num1 , short Num2 , char Oper){
	if(Oper == '+'){
         PrintRuslt(Num1 , Oper , Num2 , CalculatePlus(Num1 , Num2));
	}else if(Oper == '-'){
		 PrintRuslt(Num1 , Oper , Num2 , CalculateMinus(Num1 , Num2)) ;
 	}else if(Oper == '*'){
		 PrintRuslt(Num1 , Oper , Num2 , CalculateMultiplication(Num1 , Num2)) ;
	}else if(Oper == '/'){
	  	 PrintRuslt(Num1 , Oper , Num2 , CalculateDivision(Num1 , Num2)) ;
	}
}


int main(){
	
	short Num1 , Num2 ; 
	char Oper ;
	
	ReadNumberAndOper(Num1 , Num2 , Oper);
	calculatorResult(Num1 , Num2 , Oper);
	return 0 ;
}