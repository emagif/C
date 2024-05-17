/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
SPI_HandleTypeDef hspi1;

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_SPI1_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
void spi_write(uint16_t data) {
	HAL_GPIO_WritePin(SPI1_CS_GPIO_Port, SPI1_CS_Pin, 0);
	HAL_SPI_Transmit(&hspi1, &data, 1, 100);
	HAL_GPIO_WritePin(SPI1_CS_GPIO_Port, SPI1_CS_Pin, 1);
}

void max7219_write(uint8_t addr, uint8_t data) {
	spi_write(data | addr<<8);
}

void hourglass(void) {
	max7219_write(1, 0xFF);
	max7219_write(2, 0x7E);
	max7219_write(3, 0x3C);
	max7219_write(4, 0x18);
	max7219_write(5, 0x18);
	max7219_write(6, 0x3C);
	max7219_write(7, 0x7E);
	max7219_write(8, 0xFF);
}

void litera_E(void) {
	max7219_write(1, 0x00);
	max7219_write(2, 0x00);
	max7219_write(3, 0xFF);
	max7219_write(4, 0x91);
	max7219_write(5, 0x91);
	max7219_write(6, 0x91);
	max7219_write(7, 0x91);
	max7219_write(8, 0x00);
}

void litera_M(void) {
	max7219_write(1, 0xFF);
	max7219_write(2, 0x02);
	max7219_write(3, 0x04);
	max7219_write(4, 0x08);
	max7219_write(5, 0x08);
	max7219_write(6, 0x04);
	max7219_write(7, 0x02);
	max7219_write(8, 0xFF);
}

void litera_A(void) {
	max7219_write(1, 0x00);
	max7219_write(2, 0xFF);
	max7219_write(3, 0x09);
	max7219_write(4, 0x09);
	max7219_write(5, 0x09);
	max7219_write(6, 0x09);
	max7219_write(7, 0xFF);
	max7219_write(8, 0x00);
}


void litera_G(void) {
	max7219_write(1, 0x00);
	max7219_write(2, 0x00);
	max7219_write(3, 0xFF);
	max7219_write(4, 0x81);
	max7219_write(5, 0x91);
	max7219_write(6, 0x91);
	max7219_write(7, 0xF1);
	max7219_write(8, 0x00);
}

void litera_I(void) {
	max7219_write(1, 0x00);
	max7219_write(2, 0x00);
	max7219_write(3, 0x00);
	max7219_write(4, 0xFF);
	max7219_write(5, 0xFF);
	max7219_write(6, 0x00);
	max7219_write(7, 0x00);
	max7219_write(8, 0x00);
}


void litera_F(void) {
	max7219_write(1, 0x00);
	max7219_write(2, 0x00);
	max7219_write(3, 0xFF);
	max7219_write(4, 0x09);
	max7219_write(5, 0x09);
	max7219_write(6, 0x09);
	max7219_write(7, 0x09);
	max7219_write(8, 0x00);
}



void czyszczenie(void) {
	max7219_write(1, 0x00);
	max7219_write(2, 0x00);
	max7219_write(3, 0x00);
	max7219_write(4, 0x00);
	max7219_write(5, 0x00);
	max7219_write(6, 0x00);
	max7219_write(7, 0x00);
	max7219_write(8, 0x00);
}

void max7219_init() {
	 spi_write(0xB07);
	 spi_write(0x900);
	 spi_write(0xC01);
	 spi_write(0xF00);
	 spi_write(0xA01);
}

void ledOn(void) {
	HAL_GPIO_WritePin(LD1_GPIO_Port, LD1_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LD3_GPIO_Port, LD3_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LD4_GPIO_Port, LD4_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LD5_GPIO_Port, LD5_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LD6_GPIO_Port, LD6_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LD7_GPIO_Port, LD7_Pin, GPIO_PIN_SET);
	HAL_GPIO_WritePin(LD8_GPIO_Port, LD8_Pin, GPIO_PIN_SET);
}


void ledOff(void) {
	HAL_GPIO_WritePin(LD1_GPIO_Port, LD1_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LD3_GPIO_Port, LD3_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LD4_GPIO_Port, LD4_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LD5_GPIO_Port, LD5_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LD6_GPIO_Port, LD6_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LD7_GPIO_Port, LD7_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(LD8_GPIO_Port, LD8_Pin, GPIO_PIN_RESET);
}


/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_SPI1_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */

  max7219_init();
  litera_I();
  while (1)
  {
	  litera_E();
	  HAL_GPIO_WritePin(LD1_GPIO_Port, LD1_Pin, GPIO_PIN_SET);
	  HAL_Delay(300);
	  czyszczenie();
	  HAL_GPIO_WritePin(LD1_GPIO_Port, LD1_Pin, GPIO_PIN_RESET);
	  HAL_Delay(300);
	  litera_M();
	  HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_SET);
	  HAL_Delay(300);
	  czyszczenie();
	  HAL_GPIO_WritePin(LD2_GPIO_Port, LD2_Pin, GPIO_PIN_RESET);
	  HAL_Delay(300);
	  litera_A();
	  HAL_GPIO_WritePin(LD3_GPIO_Port, LD3_Pin, GPIO_PIN_SET);
	  HAL_Delay(300);
	  czyszczenie();
	  HAL_GPIO_WritePin(LD3_GPIO_Port, LD3_Pin, GPIO_PIN_RESET);
	  HAL_Delay(300);
	  litera_G();
	  HAL_GPIO_WritePin(LD4_GPIO_Port, LD4_Pin, GPIO_PIN_SET);
	  HAL_Delay(300);
	  czyszczenie();
	  HAL_GPIO_WritePin(LD4_GPIO_Port, LD4_Pin, GPIO_PIN_RESET);
	  HAL_Delay(300);
	  litera_I();
	  HAL_GPIO_WritePin(LD5_GPIO_Port, LD5_Pin, GPIO_PIN_SET);
	  HAL_Delay(300);
	  czyszczenie();
	  HAL_GPIO_WritePin(LD5_GPIO_Port, LD5_Pin, GPIO_PIN_RESET);
	  HAL_Delay(300);
	  litera_F();
	  HAL_GPIO_WritePin(LD6_GPIO_Port, LD6_Pin, GPIO_PIN_SET);
	  HAL_Delay(300);
	  czyszczenie();
	  HAL_GPIO_WritePin(LD6_GPIO_Port, LD6_Pin, GPIO_PIN_RESET);
	  HAL_Delay(300);

    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief SPI1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_SPI1_Init(void)
{

  /* USER CODE BEGIN SPI1_Init 0 */

  /* USER CODE END SPI1_Init 0 */

  /* USER CODE BEGIN SPI1_Init 1 */

  /* USER CODE END SPI1_Init 1 */
  /* SPI1 parameter configuration*/
  hspi1.Instance = SPI1;
  hspi1.Init.Mode = SPI_MODE_MASTER;
  hspi1.Init.Direction = SPI_DIRECTION_2LINES;
  hspi1.Init.DataSize = SPI_DATASIZE_16BIT;
  hspi1.Init.CLKPolarity = SPI_POLARITY_LOW;
  hspi1.Init.CLKPhase = SPI_PHASE_1EDGE;
  hspi1.Init.NSS = SPI_NSS_SOFT;
  hspi1.Init.BaudRatePrescaler = SPI_BAUDRATEPRESCALER_32;
  hspi1.Init.FirstBit = SPI_FIRSTBIT_MSB;
  hspi1.Init.TIMode = SPI_TIMODE_DISABLE;
  hspi1.Init.CRCCalculation = SPI_CRCCALCULATION_DISABLE;
  hspi1.Init.CRCPolynomial = 7;
  hspi1.Init.CRCLength = SPI_CRC_LENGTH_DATASIZE;
  hspi1.Init.NSSPMode = SPI_NSS_PULSE_ENABLE;
  if (HAL_SPI_Init(&hspi1) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN SPI1_Init 2 */

  /* USER CODE END SPI1_Init 2 */

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
/* USER CODE BEGIN MX_GPIO_Init_1 */
/* USER CODE END MX_GPIO_Init_1 */

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOE_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(SPI1_CS_GPIO_Port, SPI1_CS_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOE, LD3_Pin|LD4_Pin|LD5_Pin|LD6_Pin
                          |LD7_Pin|LD8_Pin|LD1_Pin|LD2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin : SPI1_CS_Pin */
  GPIO_InitStruct.Pin = SPI1_CS_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(SPI1_CS_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : LD3_Pin LD4_Pin LD5_Pin LD6_Pin
                           LD7_Pin LD8_Pin LD1_Pin LD2_Pin */
  GPIO_InitStruct.Pin = LD3_Pin|LD4_Pin|LD5_Pin|LD6_Pin
                          |LD7_Pin|LD8_Pin|LD1_Pin|LD2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOE, &GPIO_InitStruct);

/* USER CODE BEGIN MX_GPIO_Init_2 */
/* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */