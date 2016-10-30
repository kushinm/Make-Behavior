int LMOTOR = 0;
int RMOTOR = 3;

void forward(){
	motor(LMOTOR, 50);
	motor(RMOTOR, 50);
	msleep(25);
}

void turnLeft(){
	motor(LMOTOR, -75);
	motor(RMOTOR, 75);
	msleep(100);
}


int main (){
	while(1){
		if(digital(12) == 1){
			turnLeft();
		}
		else{
			forward();
		}
	}	
}
	
