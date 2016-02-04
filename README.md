# virtual-swamp-animals :frog: :bug: 
Virtual reality project for Google Cardboard depicting the food chain in a swamp environment. Experience life as a bug, frog, and a raven and interact with your environment with a full range of movements.

[Helpful git guide](http://rogerdudler.github.io/git-guide/)
[Link to the website](http://virtualrealitygroup.github.io/virtual-swamp-animals/)

### Description
Virtual Swamp Animals, supported by Google Cardboard, depicts the food chain in a swamp. Experience life as a pond skater, frog, and a hawk and interact with your environment with a full range of head movements. The goal of the game is to consume creatures lower on the food chain than yourself, and then experience moving up the food chain into a higher position. The amount of creatures consumed in the game will appear on the screen, and after a set time in the experience, the next part of the game will be enabled with game play continuing.

### Motivation
We based our motivation for the game off of the idea that a first person view could depict something other than a person. Our idea eventually developed into a method of depicting a scene in nature a person could never experience: participating in a food chain as the animal itself.

### Technical explanation of the project
Our project consists of a movement of a player at a constant rate with interactions with neighboring assets, which are consumed when the player reaches the outer range of the boundaries set on the asset. Once hit, the asset will disappear, and the counter for items consumed will increase. Around fifteen to twenty seconds before the experience as the specific animal ends, the animal will meet an animal higher on the food chain which will then consume the player and then will continue to that animal's viewpoint.

###Game Screenshots
![alt text](https://raw.githubusercontent.com/VirtualRealityGroup/virtual-swamp-animals/master/Pictures/stereo.png)

### Gameplay Video
7 minute Youtube Video - 6 minute of the experience followed by 1 minute explaining technical components
View a video of gameplay at this link.


### Authors and Contributors
[Marie Urmano](https://github.com/marieurmano), [Reid Gill](https://github.com/reidgill), and [Evan Amstutz](https://github.com/EvanMAmstutz) worked on this project in Spring 2016 for the University of Florida's Virtual Reality class taught by Benjamin Lok.

### References
We utilized some models for our unity project. Listed below are the people credited for creating these aspects of our game.


[Rotation of prey script from Bluntweapon, edited a bit to include rotation and speed of movement](http://forum.unity3d.com/threads/enemy-circle-movement-pattern.134134/)

[Swamp Encounter Map designed by Small] (https://3dwarehouse.sketchup.com/model.html?id=e82b608cb24714e19a3a42bcd3a00697)

[Unity Roll-A-Ball Tutorial interactions with rotating squares in scene](https://unity3d.com/learn/tutorials/projects/roll-ball-tutorial)

[Audio Clip in Audio Source provided by Kamil](http://answers.unity3d.com/questions/902586/audio-clip-in-audio-source-via-script-c.html)

[C# Countdown Timer Provided by Michael 8](http://answers.unity3d.com/questions/225213/c-countdown-timer.html)

[Frog Croaking Audio] (https://www.youtube.com/watch?v=fPCwL7tr72A)

[Toad and Frog Croaks] (https://www.youtube.com/watch?v=q0rPv84gJ0g)

[Red Tailed Hawk Audio] (https://www.youtube.com/watch?v=OLn1i0UxQGE)
