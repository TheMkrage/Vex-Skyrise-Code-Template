//stops all motors, run when auto is finished to ensure that all motors are at 0
void stopAll() {
	motor[claw] = 0;
	stopDrive();
	stopLift();
}

//changed "Name" to "Example"
void startAutoExample() {
	//drive forward at 63 power for 3 seconds, then open claw and stop
	setDriveAtFor(63, 3000);
	openClaw();

	stopAll();
}
