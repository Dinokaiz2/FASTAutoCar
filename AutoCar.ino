//PSEUDOCODICAL FOR NOW
//import adafruit stuff
//init motor(s?)
//init rgb stuff

boolean isTurning = false;
boolean isStraightawaying = true;

void setup() {
  
}

void loop() {
  engageTurnSequence();
  //on seeing next blue tape
  engageStraightawaySequence();
}

public static void engageTurnSequence() {
  // 3 options:
  
  // 1: turn robot in arc:
  // disadvantage: will require tuning to perfect arc
  // disadvantage: volatile, will change based on weight distribution and tire traction
  // disadvantage: will be interrupted by collisions
  
  // 2: follow yellow tape:
  // advantage: taking shortest path
  // disadvantage: high speed line following is difficult
  // disadvantage: risky, could leave the track, especially on collision
  
  // 3: ride outside wall using side-mounted wheel:
  // disadvantage: taking longest path
  // advantage: simple, reliable execution
  // advantage: likely to recover after a collision
}

public static void engageStraightawaySequence() {
  // 1) alignment
  //      a) gyro
  //      b) two rgb sensors placed to detect blue tape in two different places(ex one on upper left corner, one on bot right)
  //            if both rgb sensors see blue, then its aligned
  
  // drive full speed without veering
  // i don't think following the green line is worth it
  // ideally we implement a way to recover from collision while on straightaway
}

public static boolean isSeeingWhite() {
  return // if rgb sensor is seeing white tape
}

public static boolean isSeeingGreen() {
  return // if rgb sensor is seeing green tape
}

public static boolean isSeeingBlue() {
  return // if rgb sensor is seeing blue tape
}

public static boolean isSeeingYellow() {
  return // if rgb sensor is seeing yellow tape
}
