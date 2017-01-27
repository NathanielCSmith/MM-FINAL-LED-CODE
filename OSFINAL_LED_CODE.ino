/*
THIS CODE ADDRESSES
1) how to set state variables
2) Creates functions you take the head and tail and make the specific
to each strip remove NUMPIXEL AND PUT END PIXEL (above set up)
3) Calling functions for each strip animation (in the loop) call each function
4) This then maps the strips to a count from button presses (in the loop)
*/

//PUT ALL OF THIS ABOVE SET UP (START HERE)---------------------------
boolean bluestrip1animating = false;
boolean redstrip1animating = false;

//put outside of loop

// TEAM COLORS TO ANIMATE
int redcolor = 0xFF0000; //PURE RED
int redcolortail = 0xFF0033;
int bluecolor = 0x0000FF; //PURE BLUE
int bluecolortail = 0x9900FF;

//RED TEAM TAIL AND HEADS
int redhead1 = 0; //animation points tweak this
int redtail1 = 0; //animation points tweak this
int redhead2 = 0; //animation points tweak this
int redtail2 = 0; //animation points tweak this
int redhead3 = 0; //animation points tweak this
int redtail3 = 0; //animation points tweak this
int redhead4 = 0; //animation points tweak this
int redtail4 = 0; //animation points tweak this

//BLUE TEAM TAIL AND HEADS
int bluehead1 = 0; //animation points tweak this
int bluetail1 = 0; //animation points tweak this
int bluehead2 = 0; //animation points tweak this
int bluetail2 = 0; //animation points tweak this
int bluehead3 = 0; //animation points tweak this
int bluetail3 = 0; //animation points tweak this
int bluehead4 = 0; //animation points tweak this
int bluetail4 = 0; //animation points tweak this

/*
STRIP FUNCTIONS ARE BELOW HERE BOTH RED(PLAYER 1) BLUE(PLAYER 2): 
These are all the strip Functions they correspond to each led set of pixels 
on the game board. If you end up having the strip only show strip 3 when the count get there 
Then you need to go back and change the beginning of the strip value to o to start
at the head of the whole entire Led Strip. I suspect that may happen, but build 
it this way to start.
*/

//RED TEAM 01 FUNCTIONS (START HERE)---------------

void redteamstrip1 () { //pixel 0 to 35 
  if (redstrip1animating) {
    //  This is the animation part and it has a reference in //variables start for the color animations
    strip.setPixelColor(redhead1, redcolor);
    if (redtail1 >= 0) {
      strip.setPixelColor(redtail1, redcolortail);
    }
    strip.show();
    //  delay(35);                        // Pause 20 milliseconds (~50 FPS)

    if (++redhead1 >= 35) {        // Increment head index.  Off end of strip?
      redhead1 = 0;                       //  Yes, reset head index to start
    }
    if (++redtail1 >= 35) {
      redtail1 = 0;
    }
  } else { //dont do the animation and reset if not time
    for (int i = 0; i <= 35; ++i) {
      strip.setPixelColor(i, 0);
    }
    strip.show();
    redhead1 = 0;
    redtail1 = -10;
  }
}

void redteamstrip2 () { //pixel 36 to 71 
  if (redstrip2animating) {
    //  This is the animation part and it has a reference in //variables start for the color animations
    strip.setPixelColor(redhead2, redcolor);
    if (redtail2 >= 36) {
      strip.setPixelColor(redtail2, redcolortail);
    }
    strip.show();
    //  delay(35);                        // Pause 20 milliseconds (~50 FPS)

    if (++redhead2 >= 71) {        // Increment head index.  Off end of strip?
      redhead2 = 36;                       //  Yes, reset head index to start
    }
    if (++redtail2 >= 71) {
      redtail2 = 36;
    }
  } else { //dont do the animation and reset if not time
    for (int i = 36; i <= 71; ++i) {
      strip.setPixelColor(i, 0);
    }
    strip.show();
    redhead2 = 36;
    redtail2 = 36-10;
  }
}

void redteamstrip3 () { //pixel 72 to 106 
  if (redstrip3animating) {
    //  This is the animation part and it has a reference in //variables start for the color animations
    strip.setPixelColor(redhead3, redcolor);
    if (redtail3 >= 72) {
      strip.setPixelColor(redtail3, redcolortail);
    }
    strip.show();
    //  delay(35);                        // Pause 20 milliseconds (~50 FPS)

    if (++redhead3 >= 106) {        // Increment head index.  Off end of strip?
      redhead3 = 72;                       //  Yes, reset head index to start
    }
    if (++redtail3 >= 106) {
      redtail3 = 72;
    }
  } else { //dont do the animation and reset if not time
    for (int i = 72; i <= 106; ++i) {
      strip.setPixelColor(i, 0);
    }
    strip.show();
    redhead3 = 72;
    redtail3 = 72-10;
  }
}

void redteamstrip4 () { //pixel 107 to 143 
  if (redstrip4animating) {
    //  This is the animation part and it has a reference in //variables start for the color animations
    strip.setPixelColor(redhead4, redcolor);
    if (redtail4 >= 107) {
      strip.setPixelColor(redtail4, redcolortail);
    }
    strip.show();
    //  delay(35);                        // Pause 20 milliseconds (~50 FPS)

    if (++redhead4 >= 143) {        // Increment head index.  Off end of strip?
      redhead4 = 107;                       //  Yes, reset head index to start
    }
    if (++redtail4 >= 143) {
      redtail4 = 107;
    }
  } else { //dont do the animation and reset if not time
    for (int i = 107; i <= 143; ++i) {
      strip.setPixelColor(i, 0);
    }
    strip.show();
    redhead4 = 107;
    redtail4 = 107-10;
  }
}

//RED TEAM 01 FUNCTIONS (END HERE)---------------

//BLUE TEAM 02 FUNCTIONS (START HERE)---------------

void blueteamstrip1 () { //pixel 0 to 35 
  if (bluestrip1animating) {
    //  This is the animation part and it has a reference in //variables start for the color animations
    strip.setPixelColor(bluehead1, bluecolor);
    if (redtail1 >= 0) {
      strip.setPixelColor(bluetail1, bluecolortail);
    }
    strip.show();
    //  delay(35);                        // Pause 20 milliseconds (~50 FPS)

    if (++redhead1 >= 35) {        // Increment head index.  Off end of strip?
      bluehead1 = 0;                       //  Yes, reset head index to start
    }
    if (++redtail1 >= 35) {
      bluetail1 = 0;
    }
  } else { //dont do the animation and reset if not time
    for (int i = 0; i <= 35; ++i) {
      strip.setPixelColor(i, 0);
    }
    strip.show();
    bluehead1 = 0;
    bluetail1 = -10;
  }
}

void blueteamstrip2 () { //pixel 36 to 71 
  if (bluestrip2animating) {
    //  This is the animation part and it has a reference in //variables start for the color animations
    strip.setPixelColor(bluehead2, bluecolor);
    if (bluetail2 >= 36) {
      strip.setPixelColor(bluetail2, bluecolortail);
    }
    strip.show();
    //  delay(35);                        // Pause 20 milliseconds (~50 FPS)

    if (++redhead2 >= 71) {        // Increment head index.  Off end of strip?
      bluehead2 = 36;                       //  Yes, reset head index to start
    }
    if (++bluetail2 >= 71) {
      bluetail2 = 36;
    }
  } else { //dont do the animation and reset if not time
    for (int i = 36; i <= 71; ++i) {
      strip.setPixelColor(i, 0);
    }
    strip.show();
    bluehead2 = 36;
    bluetail2 = 36-10;
  }
}

void blueteamstrip3 () { //pixel 72 to 106 
  if (bluestrip3animating) {
    //  This is the animation part and it has a reference in //variables start for the color animations
    strip.setPixelColor(bluehead3, bluecolor);
    if (redtail3 >= 72) {
      strip.setPixelColor(bluetail3, bluecolortail);
    }
    strip.show();
    //  delay(35);                        // Pause 20 milliseconds (~50 FPS)

    if (++redhead3 >= 106) {        // Increment head index.  Off end of strip?
      bluehead3 = 72;                       //  Yes, reset head index to start
    }
    if (++bluetail3 >= 106) {
      bluetail3 = 72;
    }
  } else { //dont do the animation and reset if not time
    for (int i = 72; i <= 106; ++i) {
      strip.setPixelColor(i, 0);
    }
    strip.show();
    bluehead3 = 72;
    bluetail3 = 72-10;
  }
}

void blueteamstrip4 () { //pixel 107 to 143 
  if (bluestrip4animating) {
    //  This is the animation part and it has a reference in //variables start for the color animations
    strip.setPixelColor(bluehead4, bluecolor);
    if (bluetail4 >= 107) {
      strip.setPixelColor(bluetail4, bluecolortail);
    }
    strip.show();
    //  delay(35);                        // Pause 20 milliseconds (~50 FPS)

    if (++bluehead4 >= 143) {        // Increment head index.  Off end of strip?
      bluehead4 = 107;                       //  Yes, reset head index to start
    }
    if (++redtail4 >= 143) {
      bluetail4 = 107;
    }
  } else { //dont do the animation and reset if not time
    for (int i = 107; i <= 143; ++i) {
      strip.setPixelColor(i, 0);
    }
    strip.show();
    bluehead4 = 107;
    bluetail4 = 107-10;
  }
}

//BLUE TEAM 02 FUNCTIONS (END HERE)---------------

//PUT ALL OF THIS ABOVE SET UP (END HERE)---------------------------

void loop () {
  //button press detection
  //blue team
  if (team01PushCount > 10) {
    bluestrip1animating = true;
  }
  if (team01PushCount > 20) {
    bluestrip2animating = true;
  }
  if (team01PushCount > 30) {
    bluestrip3animating = true;
  }
  if (team01PushCount > 40) {
    bluestrip4animating = true;
  }

  //red team
  if (team02PushCount > 10) {
    redstrip1animating = true;
  }
  if (team02PushCount > 20) {
    redstrip2animating = true;
  }
  if (team02PushCount > 30) {
    redstrip3animating = true;
  }
  if (team02PushCount > 40) {
    redstrip4animating = true;
  }

}

/*DONT COPY THIS
DEBUG:
1) Counts in Loop: approved
2) red team functions: approved
3) blue team functions: approved
4) TEAM COLORS TO ANIMATE: approved; you have a light red and red and royal blue and purplish color
5) RED TEAM TAIL AND HEADS: approved
6) BLUE TEAM TAIL AND HEADS: approved
 */
