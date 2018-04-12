/*
 * IncFile1.h
 *
 * Created: 4/12/2018 9:10:17 AM
 *  Author: Owen Lyke
 */ 


#ifndef GPIO_H_
#define GPIO_H_

#define GPIO_OUTPUT  1
#define GPIO_INPUT   0

#define GPIO_HIGH    1
#define GPIO_LOW     0

typedef enum{
	GPIO_A = 0,
	GPIO_B,
	GPIO_C,
	GPIO_D
}GPIO_TypeDef;

#define GPIO_PIN0    0x01
#define GPIO_PIN1    0x02
#define GPIO_PIN2    0x04
#define GPIO_PIN3    0x08
#define GPIO_PIN4    0x10
#define GPIO_PIN5    0x20
#define GPIO_PIN6    0x40
#define GPIO_PIN7    0x80

void GPIO_setOutput(GPIO_TypeDef GPIOX, uint8_t pins);
void GPIO_setInput(GPIO_TypeDef GPIOX, uint8_t pins);
void GPIO_setAnalog(GPIO_TypeDef GPIOX, uint8_t pins);
void GPIO_toggle(GPIO_TypeDef GPIOX, uint8_t pins);
void GPIO_setHigh(GPIO_TypeDef GPIOX, uint8_t pins);
void GPIO_setLow(GPIO_TypeDef GPIOX, uint8_t pins);
uint8_t GPIO_read(GPIO_TypeDef GPIOX, uint8_t pin);
uint16_t GPIO_readADC(GPIO_TypeDef GPIOX, uint8_t pin);

#endif /* GPIO_H_ */
