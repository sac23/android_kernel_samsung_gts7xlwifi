// SPDX-License-Identifier: GPL-2.0-only
/*
 * Copyright (c) 2020, The Linux Foundation. All rights reserved.
 */

#include <linux/types.h>
#include "rouleur-registers.h"

const u8 rouleur_reg_access_analog[ROULEUR_REG(
			ROULEUR_ANALOG_REGISTERS_MAX_SIZE)] = {
	[ROULEUR_REG(ROULEUR_ANA_MICBIAS_MICB_1_2_EN)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_ANA_MICBIAS_MICB_3_EN)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_ANA_MICBIAS_LDO_1_SETTING)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_ANA_MICBIAS_LDO_1_CTRL)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_ANA_TX_AMIC1)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_ANA_TX_AMIC2)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_ANA_MBHC_MECH)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_ANA_MBHC_ELECT)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_ANA_MBHC_ZDET)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_ANA_MBHC_RESULT_1)] = RD_REG,
	[ROULEUR_REG(ROULEUR_ANA_MBHC_RESULT_2)] = RD_REG,
	[ROULEUR_REG(ROULEUR_ANA_MBHC_RESULT_3)] = RD_REG,
	[ROULEUR_REG(ROULEUR_ANA_MBHC_BTN0_ZDET_VREF1)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_ANA_MBHC_BTN1_ZDET_VREF2)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_ANA_MBHC_BTN2_ZDET_VREF3)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_ANA_MBHC_BTN3_ZDET_DBG_400)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_ANA_MBHC_BTN4_ZDET_DBG_1400)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_ANA_MBHC_MICB2_RAMP)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_ANA_MBHC_CTL_1)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_ANA_MBHC_CTL_2)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_ANA_MBHC_PLUG_DETECT_CTL)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_ANA_MBHC_ZDET_ANA_CTL)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_ANA_MBHC_ZDET_RAMP_CTL)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_ANA_MBHC_FSM_STATUS)] = RD_REG,
	[ROULEUR_REG(ROULEUR_ANA_MBHC_ADC_RESULT)] = RD_REG,
	[ROULEUR_REG(ROULEUR_ANA_MBHC_CTL_CLK)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_ANA_MBHC_ZDET_CALIB_RESULT)] = RD_REG,
	[ROULEUR_REG(ROULEUR_ANA_NCP_EN)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_ANA_NCP_VCTRL)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_ANA_HPHPA_CNP_CTL_1)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_ANA_HPHPA_CNP_CTL_2)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_ANA_HPHPA_PA_STATUS)] = RD_REG,
	[ROULEUR_REG(ROULEUR_ANA_HPHPA_FSM_CLK)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_ANA_HPHPA_L_GAIN)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_ANA_HPHPA_R_GAIN)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_ANA_HPHPA_SPARE_CTL)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_SWR_HPHPA_HD2)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_ANA_SURGE_EN)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_ANA_COMBOPA_CTL)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_ANA_COMBOPA_CTL_4)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_ANA_COMBOPA_CTL_5)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_ANA_RXLDO_CTL)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_ANA_MBIAS_EN)] = RD_WR_REG,
};

const u8 rouleur_reg_access_digital[ROULEUR_REG(
			ROULEUR_DIGITAL_REGISTERS_MAX_SIZE)] = {
	[ROULEUR_REG(ROULEUR_DIG_SWR_CHIP_ID0)] = RD_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_CHIP_ID1)] = RD_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_CHIP_ID2)] = RD_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_CHIP_ID3)] = RD_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_SWR_TX_CLK_RATE)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_CDC_RST_CTL)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_TOP_CLK_CFG)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_CDC_RX_CLK_CTL)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_CDC_TX_CLK_CTL)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_SWR_RST_EN)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_CDC_RX_RST)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_CDC_RX0_CTL)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_CDC_RX1_CTL)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_CDC_TX_ANA_MODE_0_1)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_CDC_COMP_CTL_0)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_CDC_RX_DELAY_CTL)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_CDC_RX_GAIN_0)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_CDC_RX_GAIN_1)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_CDC_RX_GAIN_CTL)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_CDC_TX0_CTL)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_CDC_TX1_CTL)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_CDC_TX_RST)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_CDC_REQ0_CTL)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_CDC_REQ1_CTL)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_CDC_RST)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_CDC_AMIC_CTL)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_CDC_DMIC_CTL)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_CDC_DMIC1_CTL)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_CDC_DMIC1_RATE)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_PDM_WD_CTL0)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_PDM_WD_CTL1)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_INTR_MODE)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_INTR_MASK_0)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_INTR_MASK_1)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_INTR_MASK_2)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_INTR_STATUS_0)] = RD_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_INTR_STATUS_1)] = RD_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_INTR_STATUS_2)] = RD_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_INTR_CLEAR_0)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_INTR_CLEAR_1)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_INTR_CLEAR_2)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_INTR_LEVEL_0)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_INTR_LEVEL_1)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_INTR_LEVEL_2)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_CDC_CONN_RX0_CTL)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_CDC_CONN_RX1_CTL)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_LOOP_BACK_MODE)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_DRIVE_STRENGTH_0)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_DIG_DEBUG_CTL)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_DIG_DEBUG_EN)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_DEM_BYPASS_DATA0)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_DEM_BYPASS_DATA1)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_DEM_BYPASS_DATA2)] = RD_WR_REG,
	[ROULEUR_REG(ROULEUR_DIG_SWR_DEM_BYPASS_DATA3)] = RD_WR_REG,
};
