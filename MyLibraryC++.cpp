
#include <iostream>
#include <cmath>

using namespace std;

	class MyClass{
	
		public: // Access specifier

		//-----------------------------------------
		// (0.0) The class Methoud Math 
		//-----------------------------------------
		class Math{ 
         	public:             // Access specifier
			
			//-- [M-1]-----------------	
			float Pow(short Number , short ous){
                           float Ruslt = 1 ; 
                           for(short index = 1 ; index <= ous ; index++){
                           Ruslt = Ruslt * Number ; 
                         }
                         return Ruslt ; 
                        }
			//-------------------
			
		//-----------------------------------------
		// (0.1) The class Methoud Mathematical Laws
		//-----------------------------------------
		class MathematicalLaws{
	        public:               // Access specifier
			 
			 //-- [M:1] -----------------------
			 float Calcule_CircleArea(float Radius){
                            float const PI = 3.141592653589793  ;
                            float Area = PI * (Radius * Radius) ;
                            return Area ; 
                          }
			  //-------------------------
			   
			  //-- [M:2] -----------------------
			  float Calcule_CircleAreaThroughDiameter(float Diameter){
                            float const PI = 3.141592653589793 ;
                            short Area = (PI * (Diameter * Diameter)) / 4 ;
                            return Area ;
                          }
                          //-------------------------
				
			  //-- [M:3] -----------------------
		          float Calcule_CircleAreaByDiameter(float D){
                             float PI = 3.141592653589793 ; 
                             short Area = (PI * pow(D , 2)) / 4 ;
                             return Area ; 
                          }
			  //-------------------------
			   
			  //-- [M:4] -----------------------
			  float Calcule_CircleAreaInscribedInSquare(float SquareSide){
                              const float PI = 3.141592653589793 ;
                              float Area =  (PI * pow( SquareSide , 2 )) / 4 ;
                              return Area ; 
                          }
			  //-------------------------
			   
			  //-- [M:4] -----------------------
                          float Circle_AreaAlongTheCircumference(float LongTheCircumference){
                             const float PI = 3.141592653589793 ;
                             float Area = (LongTheCircumference * LongTheCircumference)/(4 * PI) ;
                             return Area ;
                          }
			  //-------------------------
			
		  };
                };
		//-----------------------------------------
		// (1.0) The class Methoud ReadData
		//-----------------------------------------
		class Read{ 
		
         	public:             // Access specifier
		   
		//-- [M:1] -------------------------------------------------------------
                float ReadNumberAndMessage(string Message){
                     float Number = 0 ;
                     cout << Message << endl ;
                     cin >> Number ; 
                   return Number ;
                }
			//----------------------------------------------------------------------

			
			//-- [M:2] -------------------------------------------------------------
            short ReadNumberInRange(short From , short To){
              short Numbre ;

              do{
               cout << "Entre Numbre Or Range : " << endl ;
               cin >> Numbre; 
              } while( Numbre < From || Numbre > To); /* condition */

              return Numbre ; 
            }
			//---------------------------------------------------------------------

			
			//-- [M:3] ------------------------------------------------------------
            short ReadNumberPositive(string Message){
               short Number ;
        
               do{
                 cout << Message << endl ; 
                 cin >> Number ;
               }while(Number < 0);
           
               return Number ;
            }
			//---------------------------------------------------------------------
	
        };	
	   
   	    //-----------------------------------------
		// (2.0) Converting to negative and positive numbers
		//-----------------------------------------
		class Converting{
            
            public:             // Access specifier


		    short ChangeToA_PositiveNumber(short Number){
               if(Number < 0){
                 Number = -Number ; 
                 return Number ; 
               }else{
                 return Number ; 
               }
		    }
		 
        };

	
	};
	
	// Object My Laybrari
    MyClass::Read ReadData;
    MyClass::Math Math ;
    MyClass::Math::MathematicalLaws  MathLaws ;
    MyClass::Converting EvenOrOdd ;
    //--------------------------------------------


    short AbsSum(short List[4]){
        short Sum = 0 ; 
        for(short index = 0 ; index <= 3 ; index ++){
            Sum = Sum + EvenOrOdd.ChangeToA_PositiveNumber(List[index]) ;
        }
        return Sum ;
    }
 
int main()
{
    
    short List[4] = {1 , -5 , 4 , 2};
    cout << "Sum : " << AbsSum(List) << endl ;
    
    return 0;
}
