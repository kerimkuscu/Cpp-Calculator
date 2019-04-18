class Calculator
{
private:
float a;
float b;
public:
float add(float,float);						 //toplama
float subtract(float,float); 			     //cikarma
float multiply(float,float); 				 //carpma
float divide(float,float); 					 //bolme	
float exponential(float,float); 			 //üs alma
float squart(float, float); 				 //karekök
float logarithm(float, float); 				 //logaritma
float trigonometry_sin(float, float); 		 // trigonometri sinüs hesaplama
float trigonometry_cos(float, float); 		 // trigonometri cosinüs hesaplama
float trigonometry_tan(float, float);		 // trigonometri tanjant hesaplama 
float percent(float,float); 				 //yüzde hesaplama
void display();
};

