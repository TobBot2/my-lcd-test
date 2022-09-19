#include <stdio.h>
#include "pico/stdlib.h"

// LCD includes
#include "Pico_LCD_code/c/lib/Config/DEV_Config.h"
#include "Pico_LCD_code/c/lib/LCD/LCD_2in.h"
#include "Pico_LCD_code/c/lib/GUI/GUI_Paint.h"

#define WHITE 0XFF
#define BLACK 0X00
#define FIRST 0X55
#define SECOND 0XAA
#define THIRD 0XFF

#define WIDTH 320
#define HEIGHT 240
#define BUTTON_COUNT 4

const short int buttonPins[] = {4, 5, 20, 22};
bool buttonVals[] = {0, 0, 0, 0};

float pos[] = { WIDTH/2, HEIGHT/2 };
int size[] = { 32, 24 }; 

void updateButtonValues(){
    for (int i = 0; i < BUTTON_COUNT; i++){
        buttonVals[i] = DEV_Digital_Read(buttonPins[i]);
    }
}

void update() {
    updateButtonValues();

}

void render() {

}

int main()
{
    stdio_init_all();

    while (true) {
        Paint_Clear(0XFF);
    }

    return 0;
}
