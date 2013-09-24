// Tonokip RepRap firmware rewrite based off of Hydra-mmm firmware.
// Licence: GPL
extern "C" void __cxa_pure_virtual();
void __cxa_pure_virtual(){};
void get_command();
void process_commands();

void manage_inactivity(int debug);
void setup_acceleration();

void manage_heater();

#if defined HEATER_USES_THERMISTOR
#define temp2analogh( c ) temp2analog_thermistor(c,temptable,NUMTEMPS)
#define analog2temp( c ) analog2temp_thermistor(c,temptable,NUMTEMPS)
#endif

#if defined BED_USES_THERMISTOR
#define temp2analogBed( c ) temp2analog_thermistor((c),bedtemptable,BNUMTEMPS)
#define analog2tempBed( c ) analog2temp_thermistor((c),bedtemptable,BNUMTEMPS)
#endif

#if defined (HEATER_USES_THERMISTOR) || defined (BED_USES_THERMISTOR)
int temp2analog_thermistor(int celsius, const short table[][2], int numtemps);
int analog2temp_thermistor(int raw,const short table[][2], int numtemps);
#endif

#if X_ENABLE_PIN != NC
#define  enable_x() p_x_enable = X_ENABLE_ON;//WRITE(X_ENABLE_PIN, X_ENABLE_ON)
#define disable_x() p_x_enable = !X_ENABLE_ON;//WRITE(X_ENABLE_PIN,!X_ENABLE_ON)
#else
#define enable_x() ;
#define disable_x() ;
#endif
#if Y_ENABLE_PIN != NC
#define  enable_y() p_y_enable = Y_ENABLE_ON;// WRITE(Y_ENABLE_PIN, Y_ENABLE_ON)
#define disable_y() p_y_enable = !Y_ENABLE_ON;//WRITE(Y_ENABLE_PIN,!Y_ENABLE_ON)
#else
#define enable_y() ;
#define disable_y() ;
#endif
#if Z_ENABLE_PIN != NC
#define  enable_z() p_z_enable = Z_ENABLE_ON;//WRITE(Z_ENABLE_PIN, Z_ENABLE_ON)
#define disable_z() p_z_enable = !Z_ENABLE_ON;//WRITE(Z_ENABLE_PIN,!Z_ENABLE_ON)
#else
#define enable_z() ;
#define disable_z() ;
#endif
#if E_ENABLE_PIN != NC
#define  enable_e() p_e_enable = E_ENABLE_ON;//WRITE(E_ENABLE_PIN, E_ENABLE_ON)
#define disable_e() p_e_enable = !E_ENABLE_ON;//WRITE(E_ENABLE_PIN,!E_ENABLE_ON)
#else
#define enable_e() ;
#define disable_e() ;
#endif

void FlushSerialRequestResend();
void ClearToSend();

void get_coordinates();
void prepare_move();
void linear_move(unsigned long steps_remaining[]);
void do_step(int axis);
void kill(int debug);
