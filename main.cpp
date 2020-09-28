#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:       bison
//  action 1:   the bison eats
bison.eat();
//  action 2:   the bison flies
bison.fly();
//  action 3:   the bison fights for his territory
 bision.fightForTerritory();
//  2)
//  Noun:       jury
//  action 1:   the jury votes
jury.vote();
//  action 2:   the jury deliberates 
jury.deliberate();
//  action 3:   the jury breaks for lunch
jury.breakForLunch();
 //  3)         
//  Noun:       coat
//  action 1:   the coat warms its wearer
coat.warmWearer();
//  action 2:   the coat unravels
coat.unravel();
//  action 3:   the coat carries fleas
coat.carryFleas();
 //  4)          
//  Noun:       factory
//  action 1:   the factory provides a workplace
factory.provideWorkplace();
//  action 2:   the factory burns down
factory.burnDown();
//  action 3:   the factory houses equipment
factory.houseEquipment();
//  5)
//  Noun:       spokesperson
//  action 1:   the spokesperson pauses
spokeperson.pause();
//  action 2:   the spokesperson faints 
spokesperson.faint();
//  action 3:   the spokesperson taps the microphone
spokesperson.tapMic();
 //  6)
//  Noun:       boat
//  action 1:   the boat moves
boat.move();
//  action 2:   the boat carries passengers
boat.carryPassengers();
//  action 3:   the boat crosses the ocean
 boat.crossOcean();
//  7)
//  Noun:       drum
//  action 1:   the drums resonates
drum.resonate();
//  action 2:   the drum rolls down a hill
drum.rollDownHill();
//  action 3:   the drum cracks in the heat
 drum.crackInHeat();
//  8)
//  Noun:       politician
//  action 1:   the politician lies
politician.lie();
//  action 2:   the politician leads
politician.lead();
//  action 3:   the politician delivers a speech
politician.deliverSpeech();
//  9)          
//  Noun:       picture
//  action 1:   the picture conjures memories
picture.conjureMemories();
//  action 2:   the picture fills the frame
picture.fillFrame();
//  action 3:   the picture fades with time
pciture.fadeWithTime();
//  10)         
//  Noun:       phone
//  action 1:   the phone rings
phone.ring();
//  action 2:   the phone distracts
phone.distract();
//  action 3:   the phone connects to the operator
 phone.connectToOperator();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
