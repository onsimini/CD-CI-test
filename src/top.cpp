#include <stdio.h>
#include <stdlib.h>
#include "Vtop.h"
#include "verilated.h"

int main(int argc, char **argv){
    Verilated::commandArgs(argc,argv);
    Vtop *tb = new Vtop;

    for(int k=0; k<20; k++){
        tb->i_switch = k&1;
        tb->eval();
        printf("k = %2d, ",k);
        printf("switch = %d, ",tb->i_switch);
        printf("led = %d\n",tb->o_led);
    }
}