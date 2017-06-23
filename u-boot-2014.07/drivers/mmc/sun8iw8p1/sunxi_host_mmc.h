/*
 * (C) Copyright 2007-2015
 * Allwinner Technology Co., Ltd. <www.allwinnertech.com>
 * sunxi_host_mmc.h
 * Description: MMC  driver for  mmc controller operations of sun8iw8p1
 * Author: Xielinfei
 * Date: 2016/10/10 16:30:00
 */
#ifndef __SUNXI_HOST_MMC_H__
#define __SUNXI_HOST_MMC_H__

#ifndef CONFIG_ARCH_SUN7I
#define MMC_REG_FIFO_OS     (0x200)
#define MMC2_REG_FIFO_OS    (0X20)
#else
#define MMC_REG_FIFO_OS     (0x100)
#endif

#endif /*  __SUNXI_HOST_MMC_H__ */




