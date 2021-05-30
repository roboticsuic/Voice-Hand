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
In the following Zip File you'll find all the parts needed to be 3D PRINTED:</h3>
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
<li>First of all, you need to print out all the parts, which can be found on thingiverse.com. For this, the print setting we used for all the parts were:
  </li>
<table>
<thead>
	<tr>
		<th></th>
		<thcolspan="2">PRINTING PARAMETERS</th>
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


