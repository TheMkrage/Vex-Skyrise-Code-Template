#pragma config(Motor,  port1,           rightFront,    tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,           rightBack,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           leftFront,     tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           leftBack,      tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           rightLiftTop,  tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,           rightLiftBot,  tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,           leftLiftTop,   tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,           leftLiftBottom, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,           claw,          tmotorVex393_MC29, openLoop)

//Makes robot compatible with vex competition
#pragma platform(VEX)
#pragma competitionControl(Competition)
//15 second auto and 1:45 second user controler
#pragma autonomousDuration(15)
#pragma userControlDuration(105)
#include "Vex_Competition_Includes.c"

//classes for each aspect of the robot
#include "Drive.c"
#include "Lift.c"
#include "Claw.c"
//classes for auto
#include "AutoMain.c"

void pre_auton() {
	//This method is required and runs everytime the robot starts up
	//Does not run in competition matches, only when you manually start the robot
	//I would not recomend using this at all
}

task autonomous() {
	//I added another task for auto to keep code organized, it can be found in AutoMain.c
	//write all auto code there
	startTask(auto);
}

task usercontrol()
{
	//start Tasks at the beginning of usercontrol, this ensures that all aspects of the robot will run simultaniously
	//each of these tasks contains the code that controls each aspect of the robot
	startTask(driveTask);
	startTask(liftTask);
	startTask(clawTask);

	//main robot loop, only add stuff to this loop that does not effect drive, lift, or claw
	//examples of what to add to this loop would be writeDebugStreamLines to debug the program
	while(true) {

	}
}
