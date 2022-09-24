class DFRobot_BMX160 {
/*
 * @function Gyroscope enum range, unit: G
 */
typedef enum{
 eGyroRange_2000DPS, /*Gyroscope sensitivity at 2000dps*/
 eGyroRange_1000DPS, /*Gyroscope sensitivity at 1000dps*/
 eGyroRange_500DPS,  /*Gyroscope sensitivity at 500dps*/
 eGyroRange_250DPS,  /*Gyroscope sensitivity at 250dps*/
 eGyroRange_125DPS   /*Gyroscope sensitivity at 125dps*/
}eGyroRange_t;

/*
 * @function Accelerometer enum range, unit, m/s^2
 */
typedef enum{
 eAccelRange_2G,  /* Macro for mg per LSB at +/- 2g sensitivity (1 LSB = 0.000061035mg) */
 eAccelRange_4G,  /* Macro for mg per LSB at +/- 4g sensitivity (1 LSB = 0.000122070mg) */
 eAccelRange_8G,  /* Macro for mg per LSB at +/- 8g sensitivity (1 LSB = 0.000244141mg) */
 eAccelRange_16G  /* Macro for mg per LSB at +/- 16g sensitivity (1 LSB = 0.000488281mg) */
}eAccelRange_t;

/*
 * @function reset sensor
 * @Return true if it succeeds
 */
bool softReset();

/*
 * @function init sensor
 * @Return true if it succeeds
 */
bool begin();

/*
 * @function set gyroscope range, unit: G
 * @Parameter One variable from eGyroRange_t
 */
void setGyroRange(eGyroRange_t bits);

/*
 * @function set accelerometer range, unit: m/s^2
 * @Parameter One variable from eAccelRange_t 
 */
void setAccelRange(eAccelRange_t bits);

/*
 * @function Get data of accelerometer, gyroscope, geomagnetic sensor
 * @Parameter Store the address of all data
 */
void getAllData(struct bmx160SensorData *magn, struct bmx160SensorData *gyro, struct bmx160SensorData *accel);

/*
 * @function Turn off geomagnetic sensor, gyroscope enters low power mode(there are data output from accelerometer)
 */
void setLowPower();

/*
 * @function Turn on geomagnetic sensor, gyroscope enters normal mode
 */
void wakeUp();

