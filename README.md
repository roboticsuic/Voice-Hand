# Voice-Hand
<h3>A 3D-printed dynamic hand prosthesis with voice recognition software.
</h3>
  <img width="950" alt="Screen Shot 2021-05-30 at 2 50 19 PM" src="https://user-images.githubusercontent.com/60470010/120104768-64f41c80-c156-11eb-8aee-cd612a9d6588.png">
<h2>
INTRODUCTION </h2>
<p>
Do you live with only one hand or ever feel that two just is not enough? The task of biomimicking the human hand, the most dextrous tool ever devised, has taken on new significance and nowadays, owing to new technologies, including 3D printing, it is possible to build your own prosthesis and in a very economical way. 

The project that has been carried out is based on the open-source 3D robotics work called InMoov and the proposed modifications of Patrick S. in its job: “DIY Prosthetic Hand & Forearm (Voice Controlled)”,  which can be found in instructables.com. In this way, this project aims to activate the movement of a prosthetic hand by means of the voice. To do so, it has been used an Arduino Nano 33 BLE Sense system and the software Edge Impulse (which utilizes machine learning and neural networks). The main interest of voice control remains in the fact that muscles are not required.

In relation to the movements that our prosthesis can perform, these can be classified as ROCK (closing all the fingers to form a fist with the hand) or TEST (contracting and relaxing one by one all the fingers). 

Therefore, this report compiles the materials that have been needed, the procedures that have been followed and the problems that have been encountered throughout the challenge, as well as possible improvements that could be made to optimize this prosthesis.</p>
<h3>
In the following Zip File you'll find all the parts needed to be 3D PRINTED:
</h3>
[3D Files.zip](https://github.com/roboticsuic/Voice-Hand/files/6566216/3D.Files.zip)


<h2> MATERIALS</h2>
<ul>
<li>Arduino Nano 33 BLE Sense</li>
<li>5x Servo motors (MG995)</li>
Screws:
<li>14 x 2.5mm (or 3mm) bolts (20mm long)</li>
<li>1 x 8mm bolt (55mm long)</li>
<li>1 x 8mm bolt (80mm long)</li>
<li>1 x 8mm bolt (60mm long)</li>
<li>Wires(Macho Macho)</li>
<li>Pins</li>
<li>Fishing line (Nylon)</li>
<li>Breadboard</li>
<li>PRUSA 3D printer</li>
<li>PLA</li>
<li>Sandpaper</li>
<li>Super glue</li>
<li>Greese</li>
<li>3D Printed(Print each file once)</li>
</ul>
  
<h2>METHODS</h2>
<p>1. First of all, you need to print out all the parts, which can be found on thingiverse.com. For this, the print setting we used for all the parts were:
</p>
<table>
<thead>
	<tr>
		PRINTING PARAMETERS
	</tr>
</thead>
<tbody>
	<tr>
		<td>Printing Temperature</td>
		<td>Optimal temperature for PLA is 200ºC</td>
	</tr>
	<tr>
		<td>Bed Temperature</td>
		<td>60ºC</td>
	</tr>
  	<tr>
		<td>Speed</td>
		<td>40 mm/s</td>
	</tr>
  	<tr>
		<td>Infill</td>
		<td>20%</td>
	</tr>
  	<tr>
		<td>Support</td>
		<td>None/Change of orientation</td>
	</tr>
</tbody>
</table>

<p>
This parameters may change if the printer used is different, the one we used was PRUSA 

The parts that were printed are the following (you can find them in the zipfile above):</p>
<ul>
	<li>Fingers: Auriculaire3.stl, Index3.stl, Majeure3.stl, ringfinger3.stl, thumb5.stl </li>
	<li> Wrist: robpart1V2.stl,robpart2V3, robpart3V3, WristsmallV3.stl, WristlargeV4.stl</li>
	<li> Half forearm: robpart2V4.stl, robpart3V4.stl, robpart4V3.stl, robpart5V3.stl</li>
	<li>Motor Mounts/Pieces: RobServoBedV5.stl, RobCableFrontV3.stl, RobCableBackV3.stl, RobRingV3.stl</li>
</ul>

<p>2. Once the parts are all printed, we need to start the assembly:

- In order to assemble the joints you will need different types of screws. Maybe it is required to make the holes bigger to facilitate the fit  (you can use a drill, sandpaper or even modify it in solidworks). It is really important to ensure the easy bending of the finger parts, because if not the prosthetic hand will not be able to do all the desired movements and flex without resistance. 
- Take the nylon and pull it through the different parts of the finger (leave enough excess length) and the channels of the hand and wrist. After that, make double knots where the fishing line can slip (tip of the fingers and cable tensioners). The fingers should be able to flex and relax when the strings are tightened (We had to grease the parts where there was the most friction to ensure this smooth movement).
- Some parts will need glue to be attached, but make sure to do it once you have everything else done. Let it dry before using it.

3. As soon as the prosthetic hand and forearm are assembled it is time to start programming. Below, you will find the code we used. 
	</p>

<h2> CODE</h2>

<p>
The folowing zipfile opens a folder with scripts. There are three scripts, one for the voice_control, another for the servo_motors, and one last that integrates both. THe last one didnt work in our presentation, it present an error in the first line which we dont understand why, but added it so you get a general idea on how it would work. Although this happens in the integrated one, the other two work perfectly in separate, so if you want to test it,you have both to give a try to everything. Each script's important features or line are commented with their respective function, purpose and logic behind. </p>

[ARDUINO CODE.zip](https://github.com/roboticsuic/Voice-Hand/files/6566481/ARDUINO.CODE.zip)
<ul>
	<li>nano_ble33_sense_microphone_ALL: integrated</li> 
	<li>nano_ble33_sense_microphone_VOICE: only voice</li>
	<li>motor_code_only: servo motors</li>
</ul>
