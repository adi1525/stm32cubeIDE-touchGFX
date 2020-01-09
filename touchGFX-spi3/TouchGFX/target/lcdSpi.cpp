/*
 * lcdSpi.cpp
 *
 *  Created on: Jan 9, 2020
 *      Author: Adrian Dusinski
 */

#include <touchgfx/hal/OSWrappers.hpp>
#include <touchgfx/lcd/LCD.hpp>
#include <touchgfx/hal/GPIO.hpp>

#include <STM32F7HAL_DSI.hpp>
#include <STM32F7DMA.hpp>
#include "lcdSpi.hpp"




uint16_t* stm32F7_MyHAL::getTFTFrameBuffer() const
{

}

void stm32F7_MyHAL::setFrameBufferStartAddress(void* adr, uint16_t depth, bool useDoubleBuffering, bool useAnimationStorage)
{

}

void stm32F7_MyHAL::setTFTFrameBuffer(uint16_t* adr)
{


}

void stm32F7_MyHAL::configureInterrupts()
{

}

/* Enable LCD line interrupt, when entering video (active) area */
void stm32F7_MyHAL::enableLCDControllerInterrupt()
{

}

void stm32F7_MyHAL::disableInterrupts()
{

}

void stm32F7_MyHAL::enableInterrupts()
{

}

bool stm32F7_MyHAL::beginFrame()
{

}

void stm32F7_MyHAL::endFrame()
{


}
