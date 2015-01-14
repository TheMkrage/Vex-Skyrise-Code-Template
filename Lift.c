void setLift(int power) {
	motor[rightLiftTop] = power;
	motor[rightLiftBot] = power;
	motor[leftLiftTop] = power;
	motor[leftLiftBottom] = power;
}
void stopLift() {
	motor[rightLiftTop] = 0;
	motor[rightLiftBot] = 0;
	motor[leftLiftTop] = 0;
	motor[leftLiftBottom] = 0;
}
task liftTask() {
	//Lift Loop, ran repeatedly/repeatidly to control lift
	while(true) {

		//Finds the Position of ch4 axis on partner joystick and then sets to the lift
		int liftPower = vexRT[Ch4Xmtr2];
		setLift(liftPower);

	}
}

//------------------------------------------- AUTONOMOUS FUNCTIONS -------------------------------------------\\
//the following methods are methods that will be used in mostly autonomous, they can be used elsewhere but will mainly be called in auto

//set the lift at power x for y milliseconds
void setLiftAtFor(int power, int time) {
	setLift(power);
	wait1Msec(time);
	stopLift();
}
