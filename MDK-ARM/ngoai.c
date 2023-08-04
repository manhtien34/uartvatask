#include "ngoai.h"
#include "cmsis_os.h"
#include "response_ci.h"
osThreadId AboveNormalHandle; 
  void StartDefaultTask(void const * argument)
{
  /* USER CODE BEGIN 5 */
  /* Infinite loop */
  for(;;)
  {  
		response_print2("this is task 1");
    osDelay(500);
  }
  /* USER CODE END 5 */
}
void AboveNormalTask(void const *pragmeter){
while(1){
		response_print2("this is task normal ");

	osDelay(1000);//trong rtos thi su dung ham nay de chay delay
}
}