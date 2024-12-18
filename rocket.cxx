#include<iostream>
#include<cmath>
using std::log;
using std::cout;
using std::endl;
float mo=549054.0;//initial mass
float mfr=2100;//mass flow rate in kg/sec

float rem_mass(float time){
	return mo- (mfr*time);
}

//v=ve*ln(mo/m)
int main(){
	float t=0.0;//time
	float v =0;//velocity of rocket 
	float max_time=240.0;//maximum time of flight
	float ve= 3000 ;//exhaust velocity in m/sec

	while(t<=250.0/*execute if time is equal or less than 250 sec */){
		
		v= ve*log(mo/rem_mass(t));

		cout<<"for time= "<<t<<","<<"velocity= "<< v<<endl;
		t+=1.3;//increment in time


	}
}






