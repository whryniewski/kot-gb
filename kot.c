#include <gb/gb.h>

unsigned char background[] =
{
  0x4E,0x00,0x08,0x00,0x4A,0x00,0x0A,0x00,
  0x68,0x00,0x0A,0x00,0x48,0x00,0x00,0x00
};

unsigned char kot[] =
{
  0x20,0x20,0x31,0x31,0x3F,0x3F,0x39,0x27,
  0x3D,0x23,0x3F,0x21,0x3F,0x20,0x3F,0x3F,
  0x0F,0x08,0x0F,0x08,0x0F,0x0C,0x07,0x07,
  0x0D,0x0D,0x19,0x19,0x31,0x31,0x21,0x21,
  0x80,0x80,0x80,0x80,0x80,0x80,0x80,0x80,
  0x81,0x81,0xFB,0xFB,0x8C,0xFC,0x86,0xFE,
  0xC2,0x3E,0xE6,0x1E,0xE6,0x1E,0xFE,0xDE,
  0x73,0x73,0x11,0x11,0x11,0x11,0x19,0x19,
  0x01,0x01,0x01,0x01,0x01,0x01,0x01,0x01,
  0x81,0x81,0xDF,0xDF,0x31,0x3F,0x61,0x7F,
  0x43,0x7C,0x67,0x78,0x67,0x78,0x7F,0x7B,
  0xCE,0xCE,0x88,0x88,0x88,0x88,0x98,0x98,
  0x04,0x04,0x8C,0x8C,0xFC,0xFC,0x9C,0xE4,
  0xBC,0xC4,0xFC,0x84,0xFC,0x04,0xFC,0xFC,
  0xF0,0x10,0xF0,0x10,0xF0,0x30,0xE0,0xE0,
  0xB0,0xB0,0x98,0x98,0x8C,0x8C,0x84,0x84,
  0x00,0x00,0x8B,0x8B,0xDA,0xDA,0xAB,0xAB,
  0x8A,0x8A,0x8B,0x8B,0x00,0x00,0x00,0x00,
  0x00,0x00,0xDD,0xDD,0x15,0x15,0xD5,0xD5,
  0x15,0x15,0xDD,0xDD,0x00,0x00,0x00,0x00,
  0x00,0x00,0x10,0x10,0x10,0x10,0x10,0x10,
  0x50,0x50,0xB0,0xB0,0x00,0x00,0x00,0x00
};

#define CATL 0
#define CATL_SPRITE_TOP_LEFT 0
#define CATL_SPRITE_BOTTOM_LEFT 1
#define CATL_SPRITE_TOP_RIGHT 2
#define CATL_SPRITE_BOTTOM_RIGHT 3

#define CATR 4
#define CATR_SPRITE_TOP_LEFT 4
#define CATR_SPRITE_BOTTOM_LEFT 5
#define CATR_SPRITE_TOP_RIGHT 6
#define CATR_SPRITE_BOTTOM_RIGHT 7

#define MEOW_0 8
#define MEOW_1 9
#define MEOW_2 10


#define LEFT 0
#define RIGHT 1

void move_quarduple_sprite(UBYTE sprite_index, UBYTE x, UBYTE y) {
  move_sprite(sprite_index, x, y);
  move_sprite(sprite_index+1, x, y+8);
  move_sprite(sprite_index+2, x+8, y);
  move_sprite(sprite_index+3, x+8, y+8);
}
void move_catl(UBYTE x, UBYTE y) {
  move_quarduple_sprite(CATL, x, y);
}

void move_catr(UBYTE x, UBYTE y) {
  move_quarduple_sprite(CATR, x, y);
}

void move_cat(UBYTE x, UBYTE y, UBYTE current_dir) {
  if (current_dir == LEFT) {
    move_catr(0, 0);
    move_catl(x, y);
  } else {
    move_catl(0, 0);
    move_catr(x, y);
  }
  return;
}

void move_meow(UBYTE x, UBYTE y) {
  move_sprite(MEOW_0, x, y);
  move_sprite(MEOW_1, x+8, y);
  move_sprite(MEOW_2, x+16, y);
}

void show_meow_next_to_cat(UBYTE x, UBYTE y, UBYTE current_dir) {
  if (current_dir == LEFT) {
    move_meow(x-8, y-8);
  } else {
    move_meow(x+16, y-8);
  }
}

void play_meow() {

  NR52_REG = 0x80; // enable sound
  NR51_REG = 0x11; // chan 1 to left, chan 1 to right
  NR50_REG = 0x77; // max volume (what do 4th and 8th bits do?)
  
  NR10_REG = 0x7E; // 0001 1110
  NR11_REG = 0x01; //0x10;
  NR12_REG = 0xF3; //0xF3; // 1111 1011
  NR13_REG = 0xFF;
  NR14_REG = 0x87;
 
}
void hide_meow() {
  move_meow(0, 0);
}

void main()
{
  UBYTE counter,x,y,step,current_dir;
  current_dir=RIGHT;
  x=40;
  y=40;
  step=8;
  disable_interrupts();
  DISPLAY_OFF;
  
  // load background
  set_bkg_data(0,1,background);
  
  // load sprite
  SPRITES_8x8;
  set_sprite_data(0, 11, kot);

  set_sprite_tile(CATL_SPRITE_TOP_LEFT,0);
  set_sprite_tile(CATL_SPRITE_BOTTOM_LEFT,1);
  set_sprite_tile(CATL_SPRITE_TOP_RIGHT,2);
  set_sprite_tile(CATL_SPRITE_BOTTOM_RIGHT,3);
  
  set_sprite_tile(CATR_SPRITE_TOP_LEFT,4);
  set_sprite_tile(CATR_SPRITE_BOTTOM_LEFT,5);
  set_sprite_tile(CATR_SPRITE_TOP_RIGHT,6);
  set_sprite_tile(CATR_SPRITE_BOTTOM_RIGHT,7);

  set_sprite_tile(MEOW_0, 8);
  set_sprite_tile(MEOW_1, 9);
  set_sprite_tile(MEOW_2, 10);
	
  move_cat(x, y, current_dir);

  SHOW_BKG;
  SHOW_SPRITES; 
  DISPLAY_ON;
  enable_interrupts();
  
  while(1) {
    /* Skip four VBLs (slow down animation) */
    for(counter = 0; counter < 8; counter++){
      wait_vbl_done();
    }
    
    counter = joypad();
    if(counter & (J_UP | J_DOWN | J_LEFT | J_RIGHT)) {
      // hide_meow();
    }
    if(counter & J_UP)
      y-=step;
    if(counter & J_DOWN)
      y+=step;
    if(counter & J_LEFT) {
      current_dir = LEFT;
      x-=step;
    }
    if(counter & J_RIGHT) {
      current_dir = RIGHT;
      x+=step;
    }
    if(counter & J_A) {
      show_meow_next_to_cat(x,y, current_dir);
      play_meow();
      delay(300);
      hide_meow();
    }
    move_cat(x,y, current_dir);
    // waitpadup();
  }
}
