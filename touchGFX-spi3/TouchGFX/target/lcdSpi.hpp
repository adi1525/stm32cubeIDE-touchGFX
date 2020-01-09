/*
 * lcdSpi.hpp
 *
 *  Created on: Jan 9, 2020
 *      Author: Adrian Dusinski
 */

#ifndef TARGET_LCDSPI_HPP_
#define TARGET_LCDSPI_HPP_
#include "main.h"

class stm32F7_MyHAL: public touchgfx::HAL {

public:

	stm32F7_MyHAL(touchgfx::DMA_Interface &dma, touchgfx::LCD &display, touchgfx::TouchController &tc, uint16_t width, uint16_t height) :
			touchgfx::HAL(dma, display, tc, width, height) {
	}
	void flushFrameBuffer(const Rect &rect) {
		// Remember to call base implementation
		touchgfx::HAL::flushFrameBuffer(rect);
		HAL_GPIO_TogglePin(LD_USER1_GPIO_Port, LD_USER1_Pin);
		// platform specific (pseudo code)
		// Tell display which region of the screen is now being updated.
		//spi_display_set_region(rect.x, rect.y, rect.width, rect.height);
		// Transfer this region of frame buffer to display.
		//spi_transfer_fb(rect);
	}
	 virtual void disableInterrupts();

	    /**
	     * @fn virtual void STM32F4HAL_DSI::enableInterrupts();
	     *
	     * @brief Enables the DMA and LCD interrupts.
	     *
	     *        Enables the DMA and LCD interrupts.
	     */
	    virtual void enableInterrupts();

	    /**
	     * @fn virtual void STM32F4HAL_DSI::configureInterrupts();
	     *
	     * @brief Sets the DMA and LCD interrupt priorities.
	     *
	     *        Sets the DMA and LCD interrupt priorities.
	     */
	    virtual void configureInterrupts();

	    /**
	     * @fn virtual void STM32F4HAL_DSI::enableLCDControllerInterrupt();
	     *
	     * @brief Configure the LCD controller to fire interrupts at VSYNC.
	     *
	     *        Configure the LCD controller to fire interrupts at VSYNC. Called automatically
	     *        once TouchGFX initialization has completed.
	     */
	    virtual void enableLCDControllerInterrupt();

	protected:
	    /**
	     * @fn virtual uint16_t* STM32F4HAL_DSI::getTFTFrameBuffer() const;
	     *
	     * @brief Gets the frame buffer address used by the TFT controller.
	     *
	     *        Gets the frame buffer address used by the TFT controller.
	     *
	     * @return The address of the frame buffer currently being displayed on the TFT.
	     */
	    virtual uint16_t* getTFTFrameBuffer() const;

	    /**
	     * @fn virtual void STM32F4HAL_DSI::setTFTFrameBuffer(uint16_t* adr);
	     *
	     * @brief Sets the frame buffer address used by the TFT controller.
	     *
	     *        Sets the frame buffer address used by the TFT controller.
	     *
	     * @param [in,out] adr New frame buffer address.
	     */
	    virtual void setTFTFrameBuffer(uint16_t* adr);

	    /**
	     * @fn virtual void setFrameBufferStartAddress(void* adr, uint16_t depth = 16, bool useDoubleBuffering = true, bool useAnimationStorage = true);
	     *
	     * This function is overridden in order to detect whether it is used in single- or double buffering mode.
	     * @param [in] adr            Starting address to use for frame buffers.
	     * @param depth               Depth of each pixel in bits, default is 16.
	     * @param useDoubleBuffering  If true, reserve memory for an extra frame buffer.
	     * @param useAnimationStorage If true, reserve memory for animation storage.
	     * @note Will also call the base implementation.
	     */
	    virtual void setFrameBufferStartAddress(void* adr, uint16_t depth = 16, bool useDoubleBuffering = true, bool useAnimationStorage = true);

	    /**
	     * This function is overridden to detect whether there are any frame buffer changes in this frame.
	     * @return The value of the base implementation.
	     */
	    virtual bool beginFrame();

	    /**
	     * This function is overridden to detect whether there are any frame buffer changes in this frame.
	     * @note Will also call the base implementation.
	     */
	    virtual void endFrame();

};



#endif /* TARGET_LCDSPI_HPP_ */
