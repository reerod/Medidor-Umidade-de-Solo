//This c++ code is generated by PictoBlox

//Included Libraries
#include <LedControl.h>
#include <binary.h>

//MACROS are defined here
LedControl dotMatrixDisplay = LedControl(3, 6, 5, 1);

//Gloabl Variables are declared here
float umidadeSolo;

void setup() {
	//put your setup code here, to run once:
	dotMatrixDisplay.shutdown(0,false);
	dotMatrixDisplay.setIntensity(0,8);
	dotMatrixDisplay.clearDisplay(0);
	pinMode(0, INPUT);
	
	
}

void loop() {
	//put your main code here, to run repeatedly:
	
	
	umidadeSolo = analogRead(0);
	if((umidadeSolo > 900)) {
		dotMatrixDisplay.drawFromString(0, "0000000001100110100110011000000101000010001001000001100000000000");
	}
	if(((umidadeSolo > 800) && (umidadeSolo < 899))) {
		dotMatrixDisplay.drawFromString(0, "0000000001100110100110011000000101000010001111000001100000000000");
	}
	if(((umidadeSolo > 700) && (umidadeSolo < 799))) {
		dotMatrixDisplay.drawFromString(0, "0000000001100110100110011000000101111110001111000001100000000000");
	}
	if(((umidadeSolo > 600) && (umidadeSolo < 699))) {
		dotMatrixDisplay.drawFromString(0, "0000000001100110100110011111111101111110001111000001100000000000");
	}
	if(((umidadeSolo > 500) && (umidadeSolo < 599))) {
		dotMatrixDisplay.drawFromString(0, "0000000001100110111111111111111101111110001111000001100000000000");
	}
}