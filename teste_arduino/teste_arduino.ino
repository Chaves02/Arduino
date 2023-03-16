#include <Arduino_FreeRTOS.h>
#include <MultiFunctionShield.h>
#include <semphr.h>
#define TIME_UPDATE 100
MultiFunctionShield MFS;
TaskHandle_t Handle_S1;
TaskHandle_t Handle_S2;
TaskHandle_t Handle_S3;
SemaphoreHandle_t mutex;

void TaskReadInputs( void *pvParameters );
void TaskCount100( void *pvParameters );
void TaskCount200 ( void *pvParameters );
void TaskCount300( void *pvParameters );

void setup() {
MFS.begin();
mutex = xSemaphoreCreateMutex();

xTaskCreate(TaskReadInputs, "Task_Inputs", 128, NULL, 1, NULL);
xTaskCreate(TaskCount100, "Task_Read1_S1", 128, NULL, 1, Handle_S1);
xTaskCreate(TaskCount200, "Task_Read_S2", 128, NULL, 1, Handle_S2);
xTaskCreate(TaskCount300, "Task_Read1_S3", 128, NULL, 1, Handle_S3);
vTaskStartScheduler();
}

void displayValue(int count, int button) {
for(int i = 0; i < count; i++){
delay(TIME_UPDATE);
MFS.Display(i+button*1000);
}
return;
}

void TaskCount100(void *pvParameters) {
while(1) {
int count = 100;
if() {
displayValue(count, 1);
}
}
}

void TaskCount200(void *pvParameters) {
while(1) {
int count = 200;
if {
displayValue(count, 2);
}
}
}
void TaskCount300(void *pvParameters) {
while(1) {
int count = 300;
if {
displayValue(count, 3);
}
}
}
void TaskReadInputs(void *pvParameters) {
pinMode(BUTTON_1_PIN, INPUT);
pinMode(BUTTON_2_PIN, INPUT);
pinMode(BUTTON_3_PIN, INPUT);
delay(1000);
vTaskSuspend(Handle_S1);
vTaskSuspend(Handle_S2);
vTaskSuspend(Handle_S3);
while(1){
if( < 10)
if( < 10)
if( < 10)
vTaskDelay (100/ portTICK_PERIOD_MS);
}
}
void loop() {}
