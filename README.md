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
