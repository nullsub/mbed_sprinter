#define NC -1

#define X_STEP_PIN         p5
#define X_DIR_PIN          p6
#define X_ENABLE_PIN       NC // not used. For me --> ALWAYS ON!
#define X_MIN_PIN           NC //p28
#define X_MAX_PIN           NC


#define Y_STEP_PIN         p7
#define Y_DIR_PIN          p8
#define Y_ENABLE_PIN       NC // not used. For me --> ALWAYS ON!
#define Y_MIN_PIN          NC //p29
#define Y_MAX_PIN          NC

#define Z_STEP_PIN         p9
#define Z_DIR_PIN          p10
#define Z_ENABLE_PIN       NC 
#define Z_MIN_PIN          NC //p30
#define Z_MAX_PIN          NC

#define E_STEP_PIN         p11
#define E_DIR_PIN          p12
#define E_ENABLE_PIN       NC // not used. For me --> ALWAYS ON!

#define ENABLE_ALL_STEPPERS P13 //just set always to 0(it must be inverted!)

#define HEATER_0_PIN       p21 // I guess this is for the extruder
#define HEATER_1_PIN       p22 //p22 if you want to use a heated build platform NOt connected atm

#define TEMP_0_PIN         p16 //EXtruder temp
#define TEMP_1_PIN         p15 //p19 if you want to use a heated build platform with thermistor

#define SDPOWER            NC
#define SDSS               NC
#define LED_PIN            LED3 
#define FAN_PIN            LED4
#define PS_ON_PIN          NC
#define KILL_PIN           NC
#define ALARM_PIN          NC

//List of pins which to ignore when asked to change by gcode, 0 and 1 are RX and TX, do not mess with those!
const int sensitive_pins[] = {0, 1, X_STEP_PIN, X_DIR_PIN, X_ENABLE_PIN, X_MIN_PIN, X_MAX_PIN, Y_STEP_PIN, Y_DIR_PIN, Y_ENABLE_PIN, Y_MIN_PIN, Y_MAX_PIN, Z_STEP_PIN, Z_DIR_PIN, Z_ENABLE_PIN, Z_MIN_PIN, Z_MAX_PIN, E_STEP_PIN, E_DIR_PIN, E_ENABLE_PIN, LED_PIN, PS_ON_PIN, HEATER_0_PIN, HEATER_1_PIN, FAN_PIN, TEMP_0_PIN, TEMP_1_PIN};
