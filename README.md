
# LASC Arduino class presented by Collexion 2016



Simon Game on Arduino

##  Behavior

Each button lights its LED and makes a sound. Each buttons light/sound is different.

Simon gives you a sound and a light.
You have to hit that button.

If you get it right, Simon adds another button to the pattern and plays the new pattern.
The longer the pattern, the faster it plays.
You have to hit the sequence in order each time.

If you get it wrong, It tazes you.
Then it all starts over.

Sequence grows until it is 15 notes long, when you beat the boss.

Advanced mode - activates tazer when you mess up.


## Equipment list:

* LED lights - 4 diff colors (red green blue yellow) (Need a blue LED!)
* Sounds - 1 speaker
* Buttons - 4
* Breadboard
* Arduino
* Cables
* Tazer

## Pin counts

### Outputs

* lights - 4
* speaker - 1
* tazer - 1
* reset? - 1

### Inputs -

* buttons - 4
* serial port to load software - 2 (RX/TX)
* Difficulty dial / advanced mode - 1

