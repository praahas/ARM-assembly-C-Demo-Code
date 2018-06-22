# ARM-assembly-C-Demo-Code
# Author - Praahas Amin 
The repository contains the Assembly Language & C Programs for the Microprocessor & Microcontroller Laboratory Course (15CSL48) under VTU.
# democode.s
The program can demonstrate various types of data transfer, using MOV instruction and also loading & storing using LDR & STR instructions. Arithmetic & Logic Operations are also demonstrated in this code. <br>
#Instructions:
The program can be executed using Keil Software.<br>
Steps for Execution:<br>
1.Run the Keil μvision IDE Package & Start a New μvision Project<br>
2. Enter filename in the File Name box. Say, MyFirstExample. Click on Save.<br>
3. This causes a box labelled Select Device for Target ‘Target 1’ to pop up.<br> 
4. From the list of devices select ARM and then from the new list select ARM7 (Big Endian). Click on OK. The box disappears. You are returned to the main μVision window.<br>
5. We need to type the source program. Click File. Select New and click it. This brings up an edit box labelled Text1. We can now enter a simple program.<br>
6. Select File then Save from menu. This prompts you for a Filename. Use democode.s  The extension .s indicates source code. This returns you to the window now called democode and with the code set out using ARM’s conventions to highlight code, numbers, and comments.<br>
7. We now have to set up the environment. Click Project in the main menu. From the pulldown list select Manage. That will give you a new list. Select Components, Environment, Books..<br>
8. You now get a form with three windows. Below the right hand window, select Add Files.<br>
9. This gives you the normal Windows file view. Click on the File of type expansion arrow and select Asm Source file (*.s*; *.src; *.a*). You should now see your own file democode.s appear in the window. Select this and click the Add tab. This adds your source file to the project. Then click Close. You will now see your file in the rightmost window. Click OK to exit.<br>
10. Select Project from the top line and then click on Built target. In the bottom window labelled Build Output you will see the result of the assembly process.<br>
11. You should see something like:<br>
Build target 'Target 1'<br>
assembling democode.s...<br>
linking...<br>
Program Size: Code=16 RO-data=0 RW-data=0 ZI-data=0<br>
"democode.axf" - 0 Error(s), 0 Warning(s).<br>
Note:<br> 
1.Ensure that only labels are touching the margin.<br>
2.Since the code is LOADING and STORING data from memory, ensure that READONLY (RO) and READWRITE(R/W) areas of memory are not overlapping.Select Options for Target1 and in LINKER tab, the address Ranges of RO & R/W areas must not overlap<br>

#step.c & lcd.c
The C programs are written for use with LPC2148 ARM Based Microcontroller.<br>
lcd.c is used to display characters on the lcd module display.<br>
step.c is used to rotate the stepper motor clockwise and anticlockwise.<br>
#Instructions:
The program can be executed using Keil Software.<br>
Steps for Execution:<br>
1.	Create a project folder before creating NEW Project.<br>
2.	Open Keil μVision IDE.<br>
3.	Go to Project.Then New μVision Project & save it with a name in the respective project folder previously created.<br>
4.	Select the device as NXP. In that LPC2148. Then click OK. Then click on YES Button to add startup.s file.<br>
5.	Open startup file. Go to Configuration Wizard.<br>
6.	In Configuration Wizard Window uncheck PLL Setup & check VPBDIV Setup.<br>
7.	Go to File. In that New to open an editor window. Create your source file & use the header file lpc21xx.h in the source file & save the file. Colour Syntax Highlighting will be enabled once the file is saved with the extension such as “.C”. <br> 
8.	Right Click on Source Group 1 and select Add Existing Files to Group Source Group 1 and add the *.C source file(s) to the group.<br>
9.	After adding the source file you can see the file in Project Window. Then go to Project in that Translate to compile the File(s).<br>
10.	Check the Build Output window.<br>
11.	Right Click on Target1 and select options for Target Target1. Then go to option Target in that<br>
a.	Xtal 12.0MHz<br>
b.	Select Use MicroLIB<br>
c.	Select IROM1(starting 0x0 size 0x80000)<br>
d.	Select IRAM1(starting 0x40000000 size 0x8000)<br>
e.	Then go to option Output & select Create Hex File<br>
f.	Then go to option Linker & select Use Memory Layout from Target Dialog<br>
12.	Click OK.<br>
13.	Go to Project in that Build Target. For building all source files such as .C, .ASM, .H files etc. This will create the *.HEX file if no warnings & no errors. Check the Build Output Window.<br>
14.	Connect the serial cross cable from DB2 to the PC COM port. Push both SW3 1 &2 to ON position. JP1 should be shorted while using ISP programming. Connect DC +5V power through DB1 applied from an external source. Switch ON the power. Open JP6 while downloading the software.<br>
15.	In Flash Magic, Go to Options then go to Advanced Options. Then choose Hardware Config. Enable these options only:<br>
•	Use DTR and RTS to control RST and ISP Pin<br>
•	Keep RTS asserted while COM port open. Click OK then do the following Settings<br>
Step 1: (Communications):<br>
•	Device: LPC2148<br>
•	COM Port: COM1(Check & Connect)<br>
•	Baud Rate: 9600(may vary with systems)<br>
•	Interface: None (ISP)<br>
•	Oscillator:12 MHz<br>
 	Step 2: (ERASE): Select Erase Blocks used by Hex File.<br>
	Step 3: (Hex File): Browse & Select the Hex file which you want to download.<br>
	Step 4: (Options): Select Verify after Programming.<br>
	Step 5: (Start): Click Start to download the hex file to the controller.<br>
The program should now execute on the LPC2148 kit
