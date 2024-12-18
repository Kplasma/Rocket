#include<iostream>
#include<cmath>
using std::log;
using std::cout;
using std::endl;
float mo=549054.0;//initial mass
float mfr=2100;//mass flow rate in kg/sec

float rem_mass(float time){
	return mo-(mfr*time);
}


int main(){
	float t=0.0;//time
	float v =0;//velocity of rocket 
	float ve= 3000 ;//exhaust velocity in m/sec
	float mass_propellant=520800.0;//mass of propellant in kgs
	float max_time=mass_propellant/mfr;//time taken for burning the propellant
	while(t<=max_time/*execute if time is equal or less than max_time */){
		
		v= ve*log(mo/rem_mass(t));

		cout<<"for time= "<<t<<","<<"velocity= "<< v<<endl;
		t+=1.3;//increment in time


	}
}






