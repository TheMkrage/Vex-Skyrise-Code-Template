
task clawTask() {
	//Claw Loop, ran repeatedly/repeatidly to control Claw
	while(true) {
		//If 6U pressed, run claw at 127. If 6D, run claw at -127. If no buttons pressed, set to 0.
		//If claw is reversed, reverse motor in motor and sensor setup
		if(vexRT[Btn6U] == 1) {
			motor[claw] = 127;
		}else if(vexRT[Btn5D] == 1) {
			motor[claw] = -127;
		}else {
			motor[claw] = 0;
		}

	}

}

//------------------------------------------- AUTONOMOUS FUNCTIONS -------------------------------------------\\
//the following methods are methods that will be used in mostly autonomous, they can be used elsewhere but will mainly be called in auto
void closeClaw() {
	motor[claw] = -127;
	wait1Msec(500);
	motor[claw] = 0;
}

void openClaw() {
	motor[claw] = 127;
	wait1Msec(500);
	motor[claw] = 0;
}
