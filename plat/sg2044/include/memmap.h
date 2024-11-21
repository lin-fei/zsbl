#ifndef __MEMMAP_H__
#define __MEMMAP_H__

#define SYS_CTRL_BASE		0x7050000000
#define TOP_BASE		SYS_CTRL_BASE
#define SG2044_TOP_BASE		TOP_BASE

#define REG_TOP_CONF_INFO	0x4
#define BOOT_SEL_ADDR		(TOP_BASE + REG_TOP_CONF_INFO)
#define BOOT_FROM_SRAM  	(1 << 2)

#define REG_TOP_MISC_CONTROL		0x8
#define REG_TOP_MISC_CONTROL_ADDR	(TOP_BASE + REG_TOP_MISC_CONTROL)
#define RGMII0_DISABLE_INTERNAL_DELAY	(1 << 16)

#define UART_BASE	0x7030001000

#define UART_REG_WIDTH  32

#if defined(CONFIG_TARGET_EMULATOR)

#define UART_PCLK	153600
#define UART_BAUDRATE	9600

#elif defined(CONFIG_TARGET_PALLADIUM)

#define UART_PCLK	153600
#define UART_BAUDRATE	9600

#elif defined(CONFIG_TARGET_FPGA)

#define UART_PCLK	25000000
#define UART_BAUDRATE	115200

#elif defined(CONFIG_TARGET_ASIC)

#define UART_PCLK	500000000
#define UART_BAUDRATE	115200

#else
#error "no target specified"
#endif

#endif