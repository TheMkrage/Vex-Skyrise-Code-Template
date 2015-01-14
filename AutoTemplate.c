//stops all motors, run when auto is finished to ensure that all motors are at 0
void stopAll() {
	motor[claw] = 0;
	stopDrive();
	stopLift();
}

//save as this file and change the "Name" to the name of the auto
void startAutoName() {
	//Place auto code here

	stopAll();
}
