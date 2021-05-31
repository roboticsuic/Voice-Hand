# Voice-Hand
<h3>A 3D-printed dynamic hand prosthesis with voice recognition software. 
  <img width="950" alt="Screen Shot 2021-05-30 at 2 50 19 PM" src="https://user-images.githubusercontent.com/60470010/120104768-64f41c80-c156-11eb-8aee-cd612a9d6588.png">
Members: Cedric Cordova, Antonio Julia, Saioa Ortiz, and Eduardo Saman
<h2>
INTRODUCTION </h2>
<p>
Do you live with only one hand or ever feel that two just is not enough? The task of biomimicking the human hand, the most dextrous tool ever devised, has taken on new significance and nowadays, owing to new technologies, including 3D printing, it is possible to build your own prosthesis and in a very economical way. 

The project that has been carried out is based on the open-source 3D robotics work called InMoov and the proposed modifications of Patrick S. in its job: “DIY Prosthetic Hand & Forearm (Voice Controlled)”,  which can be found in instructables.com. In this way, this project aims to activate the movement of a prosthetic hand by means of the voice. To do so, it has been used an Arduino Nano 33 BLE Sense system and the software Edge Impulse (which utilizes machine learning and neural networks). The main interest of voice control remains in the fact that muscles are not required.

In relation to the movements that our prosthesis can perform, these can be classified as ROCK (closing all the fingers to form a fist with the hand) or TEST (contracting and relaxing one by one all the fingers). 

Therefore, this report compiles the materials that have been needed, the procedures that have been followed and the problems that have been encountered throughout the challenge, as well as possible improvements that could be made to optimize this prosthesis. Thos projet is based on:https://www.instructables.com/Voice-Controlled-Prosthetic-Hand-Forearm/
	
</p>

<img width="950" alt="Screen Shot 2021-05-30 at 7 16 18 PM" src="https://user-images.githubusercontent.com/60470010/120113919-02624700-c17d-11eb-904e-1ba55acd0fcd.png">
	

<h2> MATERIALS, SOFTWARES, and HARDWARE</h2>
<ul>
<li>Arduino Nano 33 BLE Sense(https://store.arduino.cc/arduino-nano-33-ble-sense)</li>
<li>5x Servo motors MG995(https://es.banggood.com/6X-MG995-High-Torque-Metal-Gear-Analog-Servo-for-RC-Airplane-Models-p-1181877.html?rmmds=detail-left-hotproducts&cur_warehouse=CZ)</li>
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
<li>PLA(1.75mm fillament)</li>
<li>Sandpaper</li>
<li>Super glue</li>
<li>Greese</li>
<li>3D Printed(Print each file once)</li>
<li>Ultimaker Cura software</li>
<li>SOLIDWORKS software</li>
<li>Edge Impulse software</li>
</ul>
	
 <h3> In the following Zip File you'll find all the parts needed to be 3D PRINTED:
</h3>
[3D Files.zip](https://github.com/roboticsuic/Voice-Hand/files/6566216/3D.Files.zip)
<h4> 
	APPROXIMATE COST:69€
</h4>
<img width="950" alt="Screen Shot 2021-05-30 at 7 16 18 PM" src="https://user-images.githubusercontent.com/60470010/120113919-02624700-c17d-11eb-904e-1ba55acd0fcd.png">

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

<img width="950" alt="Screen Shot 2021-05-30 at 7 16 18 PM" src="https://user-images.githubusercontent.com/60470010/120113919-02624700-c17d-11eb-904e-1ba55acd0fcd.png">
<h2>EDGE IMPULSE</h2>

As we had a problem with the EasyVR board, we had to find a solution for our project and change the initial proposal of using such hardware. We decided to icorporate TiniML by using EDGE IMPULSE vanguard software and platform to keep on with out work. In order to download and stablish connection between the Arduino Nano BLE and the Edge Impulse tools, refer to the following guide that thoroughly explains everything. If there is any problem you can reach out to one of the members of the team using the following email: eduardos@uic.es. This platform work for with Window and macOS users. 

[Edge_Impulse-Arduino-UIC.pdf](https://github.com/roboticsuic/Voice-Hand/files/6566510/Edge_Impulse-Arduino-UIC.pdf)

Once connection has been stablished, go to the Edge Impulse webpage(https://www.edgeimpulse.com/) and make sure the arduino board is connected in the 'Devices
' tab. 
<img width="950" alt="Screen Shot 2021-05-30 at 6 29 28 PM" src="https://user-images.githubusercontent.com/60470010/120112165-fb373b00-c174-11eb-9fce-1011ef162dc0.png">

Now go to data acquisition and select the microphone from the sensor that the Nano BLE has. 

Record a minimum total of 1 minute for each class andmake each sample lenght of 2 seconds, we included three classes: TEST_DEVICE(saying 'prueba'), ROCK(saying 'cierra'), and noise(background noise to include any other classification that doesn't fall into the previous two on this one). The following are examples taken from our library:

Use the following blocks to make your processing and create the neural network.
<img width="1292" alt="Screen Shot 2021-05-30 at 6 34 24 PM" src="https://user-images.githubusercontent.com/60470010/120112341-ab0ca880-c175-11eb-87a5-d8d612384436.png">
<ul>
<li> Time series data:
	
	
	- Window Size: 1000ms for sectioning the raw data into two
	- Window increase: 100ms milliseconds to increase the sliding window for each step
	
</li>
<li> Audio(MFCC)/Feature extracter: a scale used to compare new frequencies with the classified ones(finds features). (source:https://medium.com/prathena/the-dummys-guide-to-mfcc-aceab2450fd)</li>
<li> Neural Network(Keras): the neural network that will process the data and assign weight to the input based on the frequency similarity found in the MFCC features that were found</li>
    </ul>

In the MFCC Block: Use the following parameter to make the feature extraction:
<table>
<thead>
	<tr>
		Parameters
	</tr>
</thead>
<tbody>
	<tr>
		<td>Number of coefficients</td>
		<td>13</td>
	</tr>
	<tr>
		<td>Frame length</td>
		<td>0.02</td>
	</tr>
  	<tr>
		<td>Frame stride</td>
		<td>0.02</td>
	</tr>
  	<tr>
		<td>Filter number</td>
		<td>32</td>
	</tr>
  	<tr>
		<td>Window size</td>
		<td>101</td>
	</tr>
	<tr>
		<td>Low frequency</td>
		<td>300</td>
	</tr>
	<tr>
		<td>Coefficient</td>
		<td>0.8</td>
	</tr>
	<tr>
		<td>Shift</td>
		<td>1</td>
	</tr>
</tbody>
</table>
<p> Then press generate features</p>
<img width="163" alt="Screen Shot 2021-05-30 at 7 01 59 PM" src="https://user-images.githubusercontent.com/60470010/120113171-85819e00-c179-11eb-898f-d8ff56d5fc90.png">
<p> It should generate a feature extraction graph like the one below, it shows the features extracted in clusters</p>

<img width="600" alt="Screen Shot 2021-05-30 at 7 12 58 PM" src="https://user-images.githubusercontent.com/60470010/120113515-20c74300-c17b-11eb-8abf-d2c95f2be09e.png">

<p>Go to the NN CLassifier and add the following parameters and layers to the network. </p>
<table>
<thead>
	<tr>
		Parameters
	</tr>
</thead>
<tbody>
	<tr>
		<td>Number of training cycles</td>
		<td>300</td>
	</tr>
	<tr>
		<td>Learning rate</td>
		<td>0.0001</td>
	</tr>
  	<tr>
		<td>Minimum confidence rating</td>
		<td>0.90</td>
	</tr>
</tbody>
</table>


<img width="400" alt="center" src="https://user-images.githubusercontent.com/60470010/120113262-f2953380-c179-11eb-9b27-30fa79f78e3f.png">

<p> Then start training your network pressing "start training"</p>
<img width="111" alt="Screen Shot 2021-05-30 at 7 11 11 PM" src="https://user-images.githubusercontent.com/60470010/120113453-d219a900-c17a-11eb-94a2-a9a51982e816.png">
<p>it should generate a confusion matrix and tell you the accuracy and loss your algorithm has. Ours shows the following:
	</p>
<img width="500" alt="Screen Shot 2021-05-30 at 7 13 53 PM" src="https://user-images.githubusercontent.com/60470010/120113530-32104f80-c17b-11eb-961c-b2da95acbb51.png">


<p> Once done training, test your model in the 'Live clasification' tab
	
<p> In the 'Deployment' tab, select arduino to create an arduino library that will be exported as a zipfile to be imported by the arduino IDE.</p>
	
<img width="950" alt="Screen Shot 2021-05-30 at 7 16 34 PM" src="https://user-images.githubusercontent.com/60470010/120113614-8fa49c00-c17b-11eb-9d35-b1acbce7e8c6.png">

<img width="950" alt="Screen Shot 2021-05-30 at 7 16 18 PM" src="https://user-images.githubusercontent.com/60470010/120113919-02624700-c17d-11eb-904e-1ba55acd0fcd.png">

<h2> CODE</h2>

<p>
The folowing zipfile opens a folder with scripts. There are three scripts, one for the voice_control(generated by the deployment), another for the servo_motors, and one last that integrates both. THe last one didnt work in our presentation, it present an error in the first line which we dont understand why, but added it so you get a general idea on how it would work. Although this happens in the integrated one, the other two work perfectly in separate, so if you want to test it,you have both to give a try to everything. Each script's important features or line are commented with their respective function, purpose and logic behind. </p>

[ARDUINO CODE.zip](https://github.com/roboticsuic/Voice-Hand/files/6566481/ARDUINO.CODE.zip)
<ul>
	<li>nano_ble33_sense_microphone_ALL: integrated</li> 
	<li>nano_ble33_sense_microphone_VOICE: only voice, OPEN THE SERIAL MONITOR TO CHECK CLASSIFICATION ONCE IT UPLOADS IT</li>
	<li>motor_code_only: servo motors</li>
</ul>

<img width="950" alt="Screen Shot 2021-05-30 at 7 16 18 PM" src="https://user-images.githubusercontent.com/60470010/120113919-02624700-c17d-11eb-904e-1ba55acd0fcd.png">

<h2> CONCLUSION</h2>
<p>
This project has been carried out as a final work for the Computing, Robotics and Bionics course. All in all, although we have encountered some problems, such as the failure of some of the Servo motors, the Easy VR board (which is used in one of the works from which we have been inspired), the use of softwares that we had never used before, among many others, we have learned a lot and it has been possible to demonstrate that it is feasible to trigger the movement of the fingers of a prosthetic hand by voice alone.

We have been able to explore the different Arduino libraries, how to program with Servos and even how to manipulate various softwares, specifically Edge Impulse. By now, we have mastered analyzing the setbacks as they happen and to find a solution as quickly as possible in order to move forward and overcome them. 

</p>


<h4>DRAWBACKS</h4>
<p>
While  building our robotic hand we confronted a few impediments that we had to overcome. First, one of our servos was faulty ,that is why we can observe in the video that the pinkie finger does not get up. Second, the EasyVR ,where all the voice data and material was, we were not able to make it work with the Arduino as we believe that the board could not process all the information that was inserted. Third, although the hand can partially move the four fingers,once we had all the hand built up and started executing the Arduino code the nylon thread became unstressed and could not realize its function correctly as the threads had to be as tense as possible to arise them completely forward. Another factor that was involved in the lifting of the fingers were the screws and the 3D printed pieces. The failure was due to the rubbing of the material with the screws and with the other piece where it is embedded.
</p>

<h4> FUTURE CONSIDERATIONS</h4>
<p>

As future improvements, we believe that changing the measurements of the pieces with Solidworks and using a through screw instead of a threaded screw would decrease the friction and permit the piece to move more freely, leaving the fingers to complete the entire movement. On the other hand, we also consider substituting  the nylon threads for another type of material that would not yield. And last, for the EasyVR we speculate that replacing the board for another one with more load capacity the system might not collapse and it could work.
</p>
<img width="200" alt="Screen Shot 2021-05-31 at 9 32 08 AM" src="https://user-images.githubusercontent.com/60470010/120157235-15176300-c1f3-11eb-9032-51e76c3e14a7.png">
<h4>EXTRA RESOURCES</h4>
<h5>Video</h5>


https://user-images.githubusercontent.com/60470010/120114667-88cc5800-c180-11eb-960b-8f8175e6065a.mov


https://user-images.githubusercontent.com/60470010/120114514-c977a180-c17f-11eb-8ab9-50ce27240681.mp4



	
https://user-images.githubusercontent.com/60470010/120162486-bb199c00-c1f8-11eb-9495-e3a71cc8e68f.mov


<h5>Images</h5>

![PHOTO-2021-05-30-14-48-05](https://user-images.githubusercontent.com/60470010/120114522-ced4ec00-c17f-11eb-80c8-0a89fcd72188.jpg)
