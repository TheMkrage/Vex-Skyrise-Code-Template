
//these two methods set their according side to specified power level
void setRight(int power) {
	motor[rightFront] = power;
	motor[rightBack] = power;
}
void setLeft(int power) {
	motor[leftFront] = power;
	motor[leftBack] = power;
}

//main Task that controls drive
task driveTask() {
	//Drive Loop, ran repeatedly/repeatidly to control drive
	while(true) {
		//equations for driving arcade drive, if the robot turns the wrong direction, switch the plus and minus
		int rightPower = (vexRT[Ch3] + vexRT[Ch1]);
		int leftPower  = (vexRT[Ch3] - vexRT[Ch1]);
		setRight(rightPower);
		setLeft(leftPower);
	}
}

//------------------------------------------- AUTONOMOUS FUNCTIONS -------------------------------------------\\
//the following methods are methods that will be used in mostly autonomous, they can be used elsewhere but will mainly be called in auto

//sets entire drive to x power
void setDrive(int power) {
	setRight(power);
	setLeft(power);
}
void stopDrive() {
	setDrive(0);
}

//sets all motors at 127 for x milliseconds
void goForwardFor(int time) {
	setDrive(127);
	wait1Msec(time);
	stopDrive();
}
//sets all drive for x milliseconds at y power
void setDriveAtFor(int power, int time) {
	setDrive(power);
	wait1Msec(time);
	stopDrive();
}
