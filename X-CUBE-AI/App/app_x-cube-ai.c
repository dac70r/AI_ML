
/**
  ******************************************************************************
  * @file    app_x-cube-ai.c
  * @author  X-CUBE-AI C code generator
  * @brief   AI program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */

 /*
  * Description
  *   v1.0 - Minimum template to show how to use the Embedded Client API
  *          model. Only one input and one output is supported. All
  *          memory resources are allocated statically (AI_NETWORK_XX, defines
  *          are used).
  *          Re-target of the printf function is out-of-scope.
  *   v2.0 - add multiple IO and/or multiple heap support
  *
  *   For more information, see the embeded documentation:
  *
  *       [1] %X_CUBE_AI_DIR%/Documentation/index.html
  *
  *   X_CUBE_AI_DIR indicates the location where the X-CUBE-AI pack is installed
  *   typical : C:\Users\<user_name>\STM32Cube\Repository\STMicroelectronics\X-CUBE-AI\7.1.0
  */

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/

#if defined ( __ICCARM__ )
#elif defined ( __CC_ARM ) || ( __GNUC__ )
#endif

/* System headers */
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <inttypes.h>
#include <string.h>

#include "app_x-cube-ai.h"
#include "main.h"
#include "ai_datatypes_defines.h"
#include "sine_model.h"
#include "sine_model_data.h"

/* USER CODE BEGIN includes */
#include "usart.h"
#include <math.h>	  // For M_PI
/* USER CODE END includes */

/* IO buffers ----------------------------------------------------------------*/

#if !defined(AI_SINE_MODEL_INPUTS_IN_ACTIVATIONS)
AI_ALIGNED(4) ai_i8 data_in_1[AI_SINE_MODEL_IN_1_SIZE_BYTES];
ai_i8* data_ins[AI_SINE_MODEL_IN_NUM] = {
data_in_1
};
#else
ai_i8* data_ins[AI_SINE_MODEL_IN_NUM] = {
NULL
};
#endif

#if !defined(AI_SINE_MODEL_OUTPUTS_IN_ACTIVATIONS)
AI_ALIGNED(4) ai_i8 data_out_1[AI_SINE_MODEL_OUT_1_SIZE_BYTES];
ai_i8* data_outs[AI_SINE_MODEL_OUT_NUM] = {
data_out_1
};
#else
ai_i8* data_outs[AI_SINE_MODEL_OUT_NUM] = {
NULL
};
#endif

/* Activations buffers -------------------------------------------------------*/

AI_ALIGNED(32)
static uint8_t pool0[AI_SINE_MODEL_DATA_ACTIVATION_1_SIZE];

ai_handle data_activations0[] = {pool0};

/* AI objects ----------------------------------------------------------------*/

static ai_handle sine_model = AI_HANDLE_NULL;

static ai_buffer* ai_input;
static ai_buffer* ai_output;

static void ai_log_err(const ai_error err, const char *fct)
{
  /* USER CODE BEGIN log */
  if (fct)
    printf("TEMPLATE - Error (%s) - type=0x%02x code=0x%02x\r\n", fct,
        err.type, err.code);
  else
    printf("TEMPLATE - Error - type=0x%02x code=0x%02x\r\n", err.type, err.code);

  do {} while (1);
  /* USER CODE END log */
}

static int ai_boostrap(ai_handle *act_addr)
{
  ai_error err;

  /* Create and initialize an instance of the model */
  err = ai_sine_model_create_and_init(&sine_model, act_addr, NULL);
  if (err.type != AI_ERROR_NONE) {
    ai_log_err(err, "ai_sine_model_create_and_init");
    return -1;
  }

  ai_input = ai_sine_model_inputs_get(sine_model, NULL);
  ai_output = ai_sine_model_outputs_get(sine_model, NULL);

#if defined(AI_SINE_MODEL_INPUTS_IN_ACTIVATIONS)
  /*  In the case where "--allocate-inputs" option is used, memory buffer can be
   *  used from the activations buffer. This is not mandatory.
   */
  for (int idx=0; idx < AI_SINE_MODEL_IN_NUM; idx++) {
	data_ins[idx] = ai_input[idx].data;
  }
#else
  for (int idx=0; idx < AI_SINE_MODEL_IN_NUM; idx++) {
	  ai_input[idx].data = data_ins[idx];
  }
#endif

#if defined(AI_SINE_MODEL_OUTPUTS_IN_ACTIVATIONS)
  /*  In the case where "--allocate-outputs" option is used, memory buffer can be
   *  used from the activations buffer. This is no mandatory.
   */
  for (int idx=0; idx < AI_SINE_MODEL_OUT_NUM; idx++) {
	data_outs[idx] = ai_output[idx].data;
  }
#else
  for (int idx=0; idx < AI_SINE_MODEL_OUT_NUM; idx++) {
	ai_output[idx].data = data_outs[idx];
  }
#endif

  return 0;
}

static int ai_run(void)
{
  ai_i32 batch;

  batch = ai_sine_model_run(sine_model, ai_input, ai_output);
  if (batch != 1) {
    ai_log_err(ai_sine_model_get_error(sine_model),
        "ai_sine_model_run");
    return -1;
  }
  else
	  printToConsole("\r\n AI RUN \r\n");

  return 0;
}

/* USER CODE BEGIN 2 */
int acquire_and_process_data(ai_i8* data[])
{
	// Define buffer
		 char strs[40]; // Ensure this buffer is large enough

	// Generate a random value between 0 and 1
		double random_fractions = (double)rand() / RAND_MAX;

		// Scale it to the range [0, 2*pi]
		double random_values = random_fractions * 2.0 * M_PI;

		// Convert integer to string using snprintf
		snprintf(strs, sizeof(strs), "Inserted random value is: %f", random_values);

		// Print to visualize the results
		printToConsole(strs);

	// ai_i8 size = sizeof(data) / sizeof(data[0]);
	// Fill the array pointed to by data[0] with the value of position

	for (int i = 0; i < AI_SINE_MODEL_IN_NUM; i++) {
		(*data)[i] = random_values;
	}

	return 0;
}

int post_process(ai_i8* data[])
{
  /* process the predictions
  for (int idx=0; idx < AI_SINE_MODEL_OUT_NUM; idx++ )
  {
      data[idx] = ....
  }
  */
	uint8_t value_data[AI_SINE_MODEL_IN_NUM] = {};

	for (int i = 0; i < AI_SINE_MODEL_IN_NUM; i++) {
		value_data[i] = (*data)[i];
		if(value_data[i] >= 128)
		{
			value_data[i] -= 128;
		}

		else
		{
			value_data[i] += 128;
		}
	}
	/*
*/
  return 0;
}
/* USER CODE END 2 */

/* Entry points --------------------------------------------------------------*/

void MX_X_CUBE_AI_Init(void)
{
    /* USER CODE BEGIN 5 */
  printf("\r\nTEMPLATE - initialization\r\n");
  printToConsole("\r\nTEMPLATE - initialization\r\n");

  /* Create and initialize an instance of the model */
  ai_boostrap(data_activations0);
    /* USER CODE END 5 */
}

void MX_X_CUBE_AI_Process(void)
{
    /* USER CODE BEGIN 6 */
  int res = -1;
  uint8_t x_count = 0;
  //uint8_t* x_count_ptr = &x_count;

  printf("TEMPLATE - run - main loop\r\n");
  printToConsole("TEMPLATE - run - main loop\r\n");

  if (sine_model) {

    do {
      /* 1 - acquire and pre-process input data */ // calls the function in the model
      res = acquire_and_process_data(data_ins);
      /* 2 - process the data - call inference engine */ // calls the function in the model
      if (res == 0)
        res = ai_run();
      /* 3- post-process the predictions */
      if (res == 0)
        res = post_process(data_outs);
      //printToConsole("Acquiring and Processing Data:");
      //HAL_UART_Transmit(&huart3, x_count_ptr, sizeof(x_count), 100);
      //printToConsole("\n");
      HAL_Delay(1000);
    } while (res==0);
  }

  if (res) {
    ai_error err = {AI_ERROR_INVALID_STATE, AI_ERROR_CODE_NETWORK};
    ai_log_err(err, "Process has FAILED");
    printToConsole("Process has FAILED");
  }
    /* USER CODE END 6 */
}
#ifdef __cplusplus
}
#endif