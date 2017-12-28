/*
 * name:        MPU-60X0
 * description: MPU-6050 Six-Axis (Gyro + Accelerometer) MEMS Motion Tracking Devices
 * manuf:       InvenseSense
 * version:     0.1
 * url:         https://store.invensense.com/datasheets/invensense/MPU-6050_DataSheet_V3%204.pdf
 * date:        2016-08-01
 * author       https://chisl.io/
 * file:        MPU-60X0.hpp
 */

#include <cinttypes>

/* Derive from class MPU_60X0_Base and implement the read and write functions! */

/* MPU-60X0: MPU-6050 Six-Axis (Gyro + Accelerometer) MEMS Motion Tracking Devices */
class MPU_60X0_Base
{
public:
	/* Pure virtual functions that need to be implemented in derived class: */
	virtual uint8_t read8(uint16_t address, uint16_t n=8) = 0;  // 8 bit read
	virtual void write(uint16_t address, uint8_t value, uint16_t n=8) = 0;  // 8 bit write
	virtual uint16_t read16(uint16_t address, uint16_t n=16) = 0;  // 16 bit read
	virtual void write(uint16_t address, uint16_t value, uint16_t n=16) = 0;  // 16 bit write
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                         REG SELF_TEST_X                                          *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG SELF_TEST_X:
	 */
	struct SELF_TEST_X
	{
		static const uint16_t __address = 13;
		
		/* Bits XA_TEST: */
		struct XA_TEST
		{
			static const uint8_t dflt = 0b000; // 3'b0
			static const uint8_t mask = 0b11100000; // [5,6,7]
		};
		/* Bits XG_TEST: */
		struct XG_TEST
		{
			static const uint8_t dflt = 0b00000; // 5'b0
			static const uint8_t mask = 0b00011111; // [0,1,2,3,4]
		};
	};
	
	/* Set register SELF_TEST_X */
	void setSELF_TEST_X(uint8_t value)
	{
		write(SELF_TEST_X::__address, value, 8);
	}
	
	/* Get register SELF_TEST_X */
	uint8_t getSELF_TEST_X()
	{
		return read8(SELF_TEST_X::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                         REG SELF_TEST_Y                                          *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG SELF_TEST_Y:
	 */
	struct SELF_TEST_Y
	{
		static const uint16_t __address = 14;
		
		/* Bits YA_TEST: */
		struct YA_TEST
		{
			static const uint8_t dflt = 0b000; // 3'b0
			static const uint8_t mask = 0b11100000; // [5,6,7]
		};
		/* Bits YG_TEST: */
		struct YG_TEST
		{
			static const uint8_t dflt = 0b00000; // 5'b0
			static const uint8_t mask = 0b00011111; // [0,1,2,3,4]
		};
	};
	
	/* Set register SELF_TEST_Y */
	void setSELF_TEST_Y(uint8_t value)
	{
		write(SELF_TEST_Y::__address, value, 8);
	}
	
	/* Get register SELF_TEST_Y */
	uint8_t getSELF_TEST_Y()
	{
		return read8(SELF_TEST_Y::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                         REG SELF_TEST_Z                                          *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG SELF_TEST_Z:
	 */
	struct SELF_TEST_Z
	{
		static const uint16_t __address = 15;
		
		/* Bits YA_TEST: */
		struct YA_TEST
		{
			static const uint8_t dflt = 0b000; // 3'b0
			static const uint8_t mask = 0b11100000; // [5,6,7]
		};
		/* Bits YG_TEST: */
		struct YG_TEST
		{
			static const uint8_t dflt = 0b00000; // 5'b0
			static const uint8_t mask = 0b00011111; // [0,1,2,3,4]
		};
	};
	
	/* Set register SELF_TEST_Z */
	void setSELF_TEST_Z(uint8_t value)
	{
		write(SELF_TEST_Z::__address, value, 8);
	}
	
	/* Get register SELF_TEST_Z */
	uint8_t getSELF_TEST_Z()
	{
		return read8(SELF_TEST_Z::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                         REG SELF_TEST_A                                          *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG SELF_TEST_A:
	 */
	struct SELF_TEST_A
	{
		static const uint16_t __address = 16;
		
		/* Bits RESERVED_0: */
		struct RESERVED_0
		{
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b11000000; // [6,7]
		};
		/* Bits XA_TEST: */
		struct XA_TEST
		{
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b00110000; // [4,5]
		};
		/* Bits YA_TEST: */
		struct YA_TEST
		{
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b00001100; // [2,3]
		};
		/* Bits ZA_TEST: */
		struct ZA_TEST
		{
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b00000011; // [0,1]
		};
	};
	
	/* Set register SELF_TEST_A */
	void setSELF_TEST_A(uint8_t value)
	{
		write(SELF_TEST_A::__address, value, 8);
	}
	
	/* Get register SELF_TEST_A */
	uint8_t getSELF_TEST_A()
	{
		return read8(SELF_TEST_A::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                          REG SMPLRT_DIV                                           *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/*
	 * REG SMPLRT_DIV:
	 * Specify the divider from the gyroscope output rate used to generate the Sample Rate for the MPU-60X0.<br>
	 * Sample Rate = Gyroscope Output Rate / (1 + SMPLRT_DIV)<br>
	 * where Gyroscope Output Rate = 8kHz when the DLPF is disabled (DLPF_CFG = 0 or 7), and 1kHz when the DLPF is
	 * enabled (see Register 26).
	 */
	struct SMPLRT_DIV
	{
		static const uint16_t __address = 25;
		
		/* Bits SMPLRT_DIV: */
		struct SMPLRT_DIV_
		{
			/* Mode:rw */
			static const uint8_t dflt = 0b00000000; // 8'h0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register SMPLRT_DIV */
	void setSMPLRT_DIV(uint8_t value)
	{
		write(SMPLRT_DIV::__address, value, 8);
	}
	
	/* Get register SMPLRT_DIV */
	uint8_t getSMPLRT_DIV()
	{
		return read8(SMPLRT_DIV::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                            REG CONFIG                                             *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/*
	 * REG CONFIG:
	 * This register configures the external Frame Synchronization (FSYNC) pin sampling and
	 * the Digital Low Pass Filter (DLPF) setting for both the gyroscopes and accelerometers.
	 */
	struct CONFIG
	{
		static const uint16_t __address = 26;
		
		/* Bits unused_0: */
		struct unused_0
		{
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b11000000; // [6,7]
		};
		/* Bits EXT_SYNC_SET: */
		/*
		 * An external signal connected to the FSYNC pin can be sampled by configuring EXT_SYNC_SET.<br>
		 * Signal changes to the FSYNC pin are latched so that short strobes may be captured. The latched FSYNC signal will be sampled at the Sampling Rate, as defined in register 25. After sampling, the latch will reset to the current FSYNC signal state.<br>
		 * The sampled value will be reported in place of the least significant bit in a sensor data register determined by the value of EXT_SYNC_SET according to the following table.
		 */
		struct EXT_SYNC_SET
		{
			static const uint8_t dflt = 0b000; // 3'b0
			static const uint8_t mask = 0b00111000; // [3,4,5]
			static const uint8_t Disabled = 0; // 
			static const uint8_t TEMP_OUT_L = 1; // 
			static const uint8_t GYRO_XOUT_L = 2; // 
			static const uint8_t GYRO_YOUT_L = 3; // 
			static const uint8_t GYRO_ZOUT_L = 4; // 
			static const uint8_t ACCEL_XOUT_L = 5; // 
			static const uint8_t ACCEL_YOUT_L = 6; // 
			static const uint8_t ACCEL_ZOUT_L = 7; // 
		};
		/* Bits DLPF_CFG: */
		/* Accelerometer: Bandwidth/Hz Delay/ms; Gyro: Bandwidth/Hz Delay/ms Fs/kHz  */
		struct DLPF_CFG
		{
			static const uint8_t dflt = 0b000; // 3'b0
			static const uint8_t mask = 0b00000111; // [0,1,2]
			static const uint8_t CFG0 = 0; // 260  0   256  0.98 8
			static const uint8_t CFG1 = 1; // 184  2.0 188  1.9  1
			static const uint8_t CFG2 = 2; // 94  3.0  98  2.8  1
			static const uint8_t CFG3 = 3; // 44  4.9  42  4.8  1
			static const uint8_t CFG4 = 4; // 21  8.5  20  8.3  1
			static const uint8_t CFG5 = 5; // 10 13.8  10 13.4  1
			static const uint8_t CFG6 = 6; // 5 19.0   5 18.6  1
			static const uint8_t CFG7 = 7; // 8
		};
	};
	
	/* Set register CONFIG */
	void setCONFIG(uint8_t value)
	{
		write(CONFIG::__address, value, 8);
	}
	
	/* Get register CONFIG */
	uint8_t getCONFIG()
	{
		return read8(CONFIG::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                         REG GYRO_CONFIG                                          *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG GYRO_CONFIG:
	 */
	struct GYRO_CONFIG
	{
		static const uint16_t __address = 27;
		
		/* Bits unused_0: */
		struct unused_0
		{
			static const uint8_t dflt = 0b000; // 3'b0
			static const uint8_t mask = 0b11100000; // [5,6,7]
		};
		/* Bits FS_SEL: */
		struct FS_SEL
		{
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b00011000; // [3,4]
		};
		/* Bits unused_1: */
		struct unused_1
		{
			static const uint8_t dflt = 0b000; // 3'b0
			static const uint8_t mask = 0b00000111; // [0,1,2]
		};
	};
	
	/* Set register GYRO_CONFIG */
	void setGYRO_CONFIG(uint8_t value)
	{
		write(GYRO_CONFIG::__address, value, 8);
	}
	
	/* Get register GYRO_CONFIG */
	uint8_t getGYRO_CONFIG()
	{
		return read8(GYRO_CONFIG::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                         REG ACCEL_CONFIG                                          *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG ACCEL_CONFIG:
	 */
	struct ACCEL_CONFIG
	{
		static const uint16_t __address = 28;
		
		/* Bits XA_ST: */
		struct XA_ST
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits YA_ST: */
		struct YA_ST
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b01000000; // [6]
		};
		/* Bits ZA_ST: */
		struct ZA_ST
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00100000; // [5]
		};
		/* Bits AFS_SEL: */
		struct AFS_SEL
		{
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b00011000; // [3,4]
		};
		/* Bits unused_0: */
		struct unused_0
		{
			static const uint8_t dflt = 0b000; // 3'b0
			static const uint8_t mask = 0b00000111; // [0,1,2]
		};
	};
	
	/* Set register ACCEL_CONFIG */
	void setACCEL_CONFIG(uint8_t value)
	{
		write(ACCEL_CONFIG::__address, value, 8);
	}
	
	/* Get register ACCEL_CONFIG */
	uint8_t getACCEL_CONFIG()
	{
		return read8(ACCEL_CONFIG::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                           REG MOT_THR                                            *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG MOT_THR:
	 */
	struct MOT_THR
	{
		static const uint16_t __address = 31;
		
		/* Bits MOT_THR: */
		struct MOT_THR_
		{
			/* Mode:rw */
			static const uint8_t dflt = 0b00000000; // 8'h0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register MOT_THR */
	void setMOT_THR(uint8_t value)
	{
		write(MOT_THR::__address, value, 8);
	}
	
	/* Get register MOT_THR */
	uint8_t getMOT_THR()
	{
		return read8(MOT_THR::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                           REG FIFO_EN                                            *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG FIFO_EN:
	 */
	struct FIFO_EN
	{
		static const uint16_t __address = 35;
		
		/* Bits TEMP: */
		struct TEMP
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits XG: */
		struct XG
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b01000000; // [6]
		};
		/* Bits YG: */
		struct YG
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00100000; // [5]
		};
		/* Bits ZG: */
		struct ZG
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00010000; // [4]
		};
		/* Bits ACCEL: */
		struct ACCEL
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00001000; // [3]
		};
		/* Bits SLV2: */
		struct SLV2
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000100; // [2]
		};
		/* Bits SLV1: */
		struct SLV1
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000010; // [1]
		};
		/* Bits SLV0: */
		struct SLV0
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000001; // [0]
		};
	};
	
	/* Set register FIFO_EN */
	void setFIFO_EN(uint8_t value)
	{
		write(FIFO_EN::__address, value, 8);
	}
	
	/* Get register FIFO_EN */
	uint8_t getFIFO_EN()
	{
		return read8(FIFO_EN::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                         REG I2C_MST_CTRL                                          *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG I2C_MST_CTRL:
	 */
	struct I2C_MST_CTRL
	{
		static const uint16_t __address = 36;
		
		/* Bits MULT_MST_EN: */
		struct MULT_MST_EN
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits WAIT_FOR_ES: */
		struct WAIT_FOR_ES
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b01000000; // [6]
		};
		/* Bits SLV_3_FIFO_EN: */
		struct SLV_3_FIFO_EN
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00100000; // [5]
		};
		/* Bits I2C_MST_P_NSR: */
		struct I2C_MST_P_NSR
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00010000; // [4]
		};
		/* Bits I2C_MST_CLK: */
		struct I2C_MST_CLK
		{
			static const uint8_t dflt = 0b0000; // 4'b0
			static const uint8_t mask = 0b00001111; // [0,1,2,3]
		};
	};
	
	/* Set register I2C_MST_CTRL */
	void setI2C_MST_CTRL(uint8_t value)
	{
		write(I2C_MST_CTRL::__address, value, 8);
	}
	
	/* Get register I2C_MST_CTRL */
	uint8_t getI2C_MST_CTRL()
	{
		return read8(I2C_MST_CTRL::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                        REG I2C_SLV0_ADDR                                         *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG I2C_SLV0_ADDR:
	 */
	struct I2C_SLV0_ADDR
	{
		static const uint16_t __address = 37;
		
		/* Bits I2C_SLV0_RW: */
		struct I2C_SLV0_RW
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits I2C_SLV0_ADDR: */
		struct I2C_SLV0_ADDR_
		{
			static const uint8_t dflt = 0b0000000; // 7'b0
			static const uint8_t mask = 0b01111111; // [0,1,2,3,4,5,6]
		};
	};
	
	/* Set register I2C_SLV0_ADDR */
	void setI2C_SLV0_ADDR(uint8_t value)
	{
		write(I2C_SLV0_ADDR::__address, value, 8);
	}
	
	/* Get register I2C_SLV0_ADDR */
	uint8_t getI2C_SLV0_ADDR()
	{
		return read8(I2C_SLV0_ADDR::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                         REG I2C_SLV0_REG                                          *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG I2C_SLV0_REG:
	 */
	struct I2C_SLV0_REG
	{
		static const uint16_t __address = 38;
		
		/* Bits I2C_SLV0_REG: */
		struct I2C_SLV0_REG_
		{
			/* Mode:rw */
			static const uint8_t dflt = 0b00000000; // 8'h0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register I2C_SLV0_REG */
	void setI2C_SLV0_REG(uint8_t value)
	{
		write(I2C_SLV0_REG::__address, value, 8);
	}
	
	/* Get register I2C_SLV0_REG */
	uint8_t getI2C_SLV0_REG()
	{
		return read8(I2C_SLV0_REG::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                        REG I2C_SLV0_CTRL                                         *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG I2C_SLV0_CTRL:
	 */
	struct I2C_SLV0_CTRL
	{
		static const uint16_t __address = 39;
		
		/* Bits I2C_SLV0_EN: */
		struct I2C_SLV0_EN
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits I2C_SLV0_BYTE_SW: */
		struct I2C_SLV0_BYTE_SW
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b01000000; // [6]
		};
		/* Bits I2C_SLV0_REG_DIS: */
		struct I2C_SLV0_REG_DIS
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00100000; // [5]
		};
		/* Bits I2C_SLV0_GRP: */
		struct I2C_SLV0_GRP
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00010000; // [4]
		};
		/* Bits I2C_SLV0_LEN: */
		struct I2C_SLV0_LEN
		{
			static const uint8_t dflt = 0b0000; // 4'b0
			static const uint8_t mask = 0b00001111; // [0,1,2,3]
		};
	};
	
	/* Set register I2C_SLV0_CTRL */
	void setI2C_SLV0_CTRL(uint8_t value)
	{
		write(I2C_SLV0_CTRL::__address, value, 8);
	}
	
	/* Get register I2C_SLV0_CTRL */
	uint8_t getI2C_SLV0_CTRL()
	{
		return read8(I2C_SLV0_CTRL::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                        REG I2C_SLV1_ADDR                                         *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG I2C_SLV1_ADDR:
	 */
	struct I2C_SLV1_ADDR
	{
		static const uint16_t __address = 40;
		
		/* Bits I2C_SLV1_RW: */
		struct I2C_SLV1_RW
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits I2C_SLV1_ADDR: */
		struct I2C_SLV1_ADDR_
		{
			static const uint8_t dflt = 0b0000000; // 7'b0
			static const uint8_t mask = 0b01111111; // [0,1,2,3,4,5,6]
		};
	};
	
	/* Set register I2C_SLV1_ADDR */
	void setI2C_SLV1_ADDR(uint8_t value)
	{
		write(I2C_SLV1_ADDR::__address, value, 8);
	}
	
	/* Get register I2C_SLV1_ADDR */
	uint8_t getI2C_SLV1_ADDR()
	{
		return read8(I2C_SLV1_ADDR::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                         REG I2C_SLV1_REG                                          *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG I2C_SLV1_REG:
	 */
	struct I2C_SLV1_REG
	{
		static const uint16_t __address = 41;
		
		/* Bits I2C_SLV1_REG: */
		struct I2C_SLV1_REG_
		{
			/* Mode:rw */
			static const uint8_t dflt = 0b00000000; // 8'h0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register I2C_SLV1_REG */
	void setI2C_SLV1_REG(uint8_t value)
	{
		write(I2C_SLV1_REG::__address, value, 8);
	}
	
	/* Get register I2C_SLV1_REG */
	uint8_t getI2C_SLV1_REG()
	{
		return read8(I2C_SLV1_REG::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                        REG I2C_SLV1_CTRL                                         *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG I2C_SLV1_CTRL:
	 */
	struct I2C_SLV1_CTRL
	{
		static const uint16_t __address = 42;
		
		/* Bits I2C_SLV1_EN: */
		struct I2C_SLV1_EN
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits I2C_SLV1_BYTE_SW: */
		struct I2C_SLV1_BYTE_SW
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b01000000; // [6]
		};
		/* Bits I2C_SLV1_REG_DIS: */
		struct I2C_SLV1_REG_DIS
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00100000; // [5]
		};
		/* Bits I2C_SLV1_GRP: */
		struct I2C_SLV1_GRP
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00010000; // [4]
		};
		/* Bits I2C_SLV1_LEN: */
		struct I2C_SLV1_LEN
		{
			static const uint8_t dflt = 0b0000; // 4'b0
			static const uint8_t mask = 0b00001111; // [0,1,2,3]
		};
	};
	
	/* Set register I2C_SLV1_CTRL */
	void setI2C_SLV1_CTRL(uint8_t value)
	{
		write(I2C_SLV1_CTRL::__address, value, 8);
	}
	
	/* Get register I2C_SLV1_CTRL */
	uint8_t getI2C_SLV1_CTRL()
	{
		return read8(I2C_SLV1_CTRL::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                        REG I2C_SLV2_ADDR                                         *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG I2C_SLV2_ADDR:
	 */
	struct I2C_SLV2_ADDR
	{
		static const uint16_t __address = 43;
		
		/* Bits I2C_SLV2_RW: */
		struct I2C_SLV2_RW
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits I2C_SLV2_ADDR: */
		struct I2C_SLV2_ADDR_
		{
			static const uint8_t dflt = 0b0000000; // 7'b0
			static const uint8_t mask = 0b01111111; // [0,1,2,3,4,5,6]
		};
	};
	
	/* Set register I2C_SLV2_ADDR */
	void setI2C_SLV2_ADDR(uint8_t value)
	{
		write(I2C_SLV2_ADDR::__address, value, 8);
	}
	
	/* Get register I2C_SLV2_ADDR */
	uint8_t getI2C_SLV2_ADDR()
	{
		return read8(I2C_SLV2_ADDR::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                         REG I2C_SLV2_REG                                          *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG I2C_SLV2_REG:
	 */
	struct I2C_SLV2_REG
	{
		static const uint16_t __address = 44;
		
		/* Bits I2C_SLV2_REG: */
		struct I2C_SLV2_REG_
		{
			/* Mode:rw */
			static const uint8_t dflt = 0b00000000; // 8'h0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register I2C_SLV2_REG */
	void setI2C_SLV2_REG(uint8_t value)
	{
		write(I2C_SLV2_REG::__address, value, 8);
	}
	
	/* Get register I2C_SLV2_REG */
	uint8_t getI2C_SLV2_REG()
	{
		return read8(I2C_SLV2_REG::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                        REG I2C_SLV2_CTRL                                         *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG I2C_SLV2_CTRL:
	 */
	struct I2C_SLV2_CTRL
	{
		static const uint16_t __address = 45;
		
		/* Bits I2C_SLV2_EN: */
		struct I2C_SLV2_EN
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits I2C_SLV2_BYTE_SW: */
		struct I2C_SLV2_BYTE_SW
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b01000000; // [6]
		};
		/* Bits I2C_SLV2_REG_DIS: */
		struct I2C_SLV2_REG_DIS
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00100000; // [5]
		};
		/* Bits I2C_SLV2_GRP: */
		struct I2C_SLV2_GRP
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00010000; // [4]
		};
		/* Bits I2C_SLV2_LEN: */
		struct I2C_SLV2_LEN
		{
			static const uint8_t dflt = 0b0000; // 4'b0
			static const uint8_t mask = 0b00001111; // [0,1,2,3]
		};
	};
	
	/* Set register I2C_SLV2_CTRL */
	void setI2C_SLV2_CTRL(uint8_t value)
	{
		write(I2C_SLV2_CTRL::__address, value, 8);
	}
	
	/* Get register I2C_SLV2_CTRL */
	uint8_t getI2C_SLV2_CTRL()
	{
		return read8(I2C_SLV2_CTRL::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                        REG I2C_SLV3_ADDR                                         *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG I2C_SLV3_ADDR:
	 */
	struct I2C_SLV3_ADDR
	{
		static const uint16_t __address = 46;
		
		/* Bits I2C_SLV3_RW: */
		struct I2C_SLV3_RW
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits I2C_SLV3_ADDR: */
		struct I2C_SLV3_ADDR_
		{
			static const uint8_t dflt = 0b0000000; // 7'b0
			static const uint8_t mask = 0b01111111; // [0,1,2,3,4,5,6]
		};
	};
	
	/* Set register I2C_SLV3_ADDR */
	void setI2C_SLV3_ADDR(uint8_t value)
	{
		write(I2C_SLV3_ADDR::__address, value, 8);
	}
	
	/* Get register I2C_SLV3_ADDR */
	uint8_t getI2C_SLV3_ADDR()
	{
		return read8(I2C_SLV3_ADDR::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                         REG I2C_SLV3_REG                                          *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG I2C_SLV3_REG:
	 */
	struct I2C_SLV3_REG
	{
		static const uint16_t __address = 47;
		
		/* Bits I2C_SLV3_REG: */
		struct I2C_SLV3_REG_
		{
			/* Mode:rw */
			static const uint8_t dflt = 0b00000000; // 8'h0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register I2C_SLV3_REG */
	void setI2C_SLV3_REG(uint8_t value)
	{
		write(I2C_SLV3_REG::__address, value, 8);
	}
	
	/* Get register I2C_SLV3_REG */
	uint8_t getI2C_SLV3_REG()
	{
		return read8(I2C_SLV3_REG::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                        REG I2C_SLV3_CTRL                                         *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG I2C_SLV3_CTRL:
	 */
	struct I2C_SLV3_CTRL
	{
		static const uint16_t __address = 48;
		
		/* Bits I2C_SLV3_EN: */
		struct I2C_SLV3_EN
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits I2C_SLV3_BYTE_SW: */
		struct I2C_SLV3_BYTE_SW
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b01000000; // [6]
		};
		/* Bits I2C_SLV3_REG_DIS: */
		struct I2C_SLV3_REG_DIS
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00100000; // [5]
		};
		/* Bits I2C_SLV3_GRP: */
		struct I2C_SLV3_GRP
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00010000; // [4]
		};
		/* Bits I2C_SLV3_LEN: */
		struct I2C_SLV3_LEN
		{
			static const uint8_t dflt = 0b0000; // 4'b0
			static const uint8_t mask = 0b00001111; // [0,1,2,3]
		};
	};
	
	/* Set register I2C_SLV3_CTRL */
	void setI2C_SLV3_CTRL(uint8_t value)
	{
		write(I2C_SLV3_CTRL::__address, value, 8);
	}
	
	/* Get register I2C_SLV3_CTRL */
	uint8_t getI2C_SLV3_CTRL()
	{
		return read8(I2C_SLV3_CTRL::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                        REG I2C_SLV4_ADDR                                         *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG I2C_SLV4_ADDR:
	 */
	struct I2C_SLV4_ADDR
	{
		static const uint16_t __address = 49;
		
		/* Bits I2C_SLV4_RW: */
		struct I2C_SLV4_RW
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits I2C_SLV4_ADDR: */
		struct I2C_SLV4_ADDR_
		{
			static const uint8_t dflt = 0b0000000; // 7'b0
			static const uint8_t mask = 0b01111111; // [0,1,2,3,4,5,6]
		};
	};
	
	/* Set register I2C_SLV4_ADDR */
	void setI2C_SLV4_ADDR(uint8_t value)
	{
		write(I2C_SLV4_ADDR::__address, value, 8);
	}
	
	/* Get register I2C_SLV4_ADDR */
	uint8_t getI2C_SLV4_ADDR()
	{
		return read8(I2C_SLV4_ADDR::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                         REG I2C_SLV4_REG                                          *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG I2C_SLV4_REG:
	 */
	struct I2C_SLV4_REG
	{
		static const uint16_t __address = 50;
		
		/* Bits I2C_SLV4_REG: */
		struct I2C_SLV4_REG_
		{
			/* Mode:rw */
			static const uint8_t dflt = 0b00000000; // 8'h0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register I2C_SLV4_REG */
	void setI2C_SLV4_REG(uint8_t value)
	{
		write(I2C_SLV4_REG::__address, value, 8);
	}
	
	/* Get register I2C_SLV4_REG */
	uint8_t getI2C_SLV4_REG()
	{
		return read8(I2C_SLV4_REG::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                         REG I2C_SLV4_DO                                          *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG I2C_SLV4_DO:
	 */
	struct I2C_SLV4_DO
	{
		static const uint16_t __address = 51;
		
		/* Bits I2C_SLV4_DO: */
		struct I2C_SLV4_DO_
		{
			/* Mode:rw */
			static const uint8_t dflt = 0b00000000; // 8'h0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register I2C_SLV4_DO */
	void setI2C_SLV4_DO(uint8_t value)
	{
		write(I2C_SLV4_DO::__address, value, 8);
	}
	
	/* Get register I2C_SLV4_DO */
	uint8_t getI2C_SLV4_DO()
	{
		return read8(I2C_SLV4_DO::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                        REG I2C_SLV4_CTRL                                         *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG I2C_SLV4_CTRL:
	 */
	struct I2C_SLV4_CTRL
	{
		static const uint16_t __address = 52;
		
		/* Bits I2C_SLV4_EN: */
		struct I2C_SLV4_EN
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits I2C_SLV4_INT_EN: */
		struct I2C_SLV4_INT_EN
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b01000000; // [6]
		};
		/* Bits I2C_SLV4_REG_DIS: */
		struct I2C_SLV4_REG_DIS
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00100000; // [5]
		};
		/* Bits I2C_MST_DLY: */
		struct I2C_MST_DLY
		{
			static const uint8_t dflt = 0b00000; // 5'b0
			static const uint8_t mask = 0b00011111; // [0,1,2,3,4]
		};
	};
	
	/* Set register I2C_SLV4_CTRL */
	void setI2C_SLV4_CTRL(uint8_t value)
	{
		write(I2C_SLV4_CTRL::__address, value, 8);
	}
	
	/* Get register I2C_SLV4_CTRL */
	uint8_t getI2C_SLV4_CTRL()
	{
		return read8(I2C_SLV4_CTRL::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                          REG ACCEL_XOUT                                           *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG ACCEL_XOUT:
	 */
	struct ACCEL_XOUT
	{
		static const uint16_t __address = 59;
		
		/* Bits ACCEL_XOUT: */
		struct ACCEL_XOUT_
		{
			/* Mode:r */
			static const uint16_t dflt = 0b0000000000000000; // 16'h0
			static const uint16_t mask = 0b1111111111111111; // [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]
		};
	};
	
	/* Set register ACCEL_XOUT */
	void setACCEL_XOUT(uint16_t value)
	{
		write(ACCEL_XOUT::__address, value, 16);
	}
	
	/* Get register ACCEL_XOUT */
	uint16_t getACCEL_XOUT()
	{
		return read16(ACCEL_XOUT::__address, 16);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                          REG ACCEL_YOUT                                           *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG ACCEL_YOUT:
	 */
	struct ACCEL_YOUT
	{
		static const uint16_t __address = 61;
		
		/* Bits ACCEL_YOUT: */
		struct ACCEL_YOUT_
		{
			/* Mode:r */
			static const uint16_t dflt = 0b0000000000000000; // 16'h0
			static const uint16_t mask = 0b1111111111111111; // [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]
		};
	};
	
	/* Set register ACCEL_YOUT */
	void setACCEL_YOUT(uint16_t value)
	{
		write(ACCEL_YOUT::__address, value, 16);
	}
	
	/* Get register ACCEL_YOUT */
	uint16_t getACCEL_YOUT()
	{
		return read16(ACCEL_YOUT::__address, 16);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                          REG ACCEL_ZOUT                                           *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG ACCEL_ZOUT:
	 */
	struct ACCEL_ZOUT
	{
		static const uint16_t __address = 63;
		
		/* Bits ACCEL_ZOUT: */
		struct ACCEL_ZOUT_
		{
			/* Mode:r */
			static const uint16_t dflt = 0b0000000000000000; // 16'h0
			static const uint16_t mask = 0b1111111111111111; // [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]
		};
	};
	
	/* Set register ACCEL_ZOUT */
	void setACCEL_ZOUT(uint16_t value)
	{
		write(ACCEL_ZOUT::__address, value, 16);
	}
	
	/* Get register ACCEL_ZOUT */
	uint16_t getACCEL_ZOUT()
	{
		return read16(ACCEL_ZOUT::__address, 16);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                           REG TEMP_OUT                                            *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG TEMP_OUT:
	 */
	struct TEMP_OUT
	{
		static const uint16_t __address = 65;
		
		/* Bits TEMP_OUT: */
		struct TEMP_OUT_
		{
			/* Mode:r */
			static const uint16_t dflt = 0b0000000000000000; // 16'h0
			static const uint16_t mask = 0b1111111111111111; // [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]
		};
	};
	
	/* Set register TEMP_OUT */
	void setTEMP_OUT(uint16_t value)
	{
		write(TEMP_OUT::__address, value, 16);
	}
	
	/* Get register TEMP_OUT */
	uint16_t getTEMP_OUT()
	{
		return read16(TEMP_OUT::__address, 16);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG GYRO_XOUT                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG GYRO_XOUT:
	 */
	struct GYRO_XOUT
	{
		static const uint16_t __address = 67;
		
		/* Bits GYRO_XOUT: */
		struct GYRO_XOUT_
		{
			/* Mode:r */
			static const uint16_t dflt = 0b0000000000000000; // 16'h0
			static const uint16_t mask = 0b1111111111111111; // [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]
		};
	};
	
	/* Set register GYRO_XOUT */
	void setGYRO_XOUT(uint16_t value)
	{
		write(GYRO_XOUT::__address, value, 16);
	}
	
	/* Get register GYRO_XOUT */
	uint16_t getGYRO_XOUT()
	{
		return read16(GYRO_XOUT::__address, 16);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG GYRO_YOUT                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG GYRO_YOUT:
	 */
	struct GYRO_YOUT
	{
		static const uint16_t __address = 69;
		
		/* Bits GYRO_YOUT: */
		struct GYRO_YOUT_
		{
			/* Mode:r */
			static const uint16_t dflt = 0b0000000000000000; // 16'h0
			static const uint16_t mask = 0b1111111111111111; // [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]
		};
	};
	
	/* Set register GYRO_YOUT */
	void setGYRO_YOUT(uint16_t value)
	{
		write(GYRO_YOUT::__address, value, 16);
	}
	
	/* Get register GYRO_YOUT */
	uint16_t getGYRO_YOUT()
	{
		return read16(GYRO_YOUT::__address, 16);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG GYRO_ZOUT                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG GYRO_ZOUT:
	 */
	struct GYRO_ZOUT
	{
		static const uint16_t __address = 71;
		
		/* Bits GYRO_ZOUT: */
		struct GYRO_ZOUT_
		{
			/* Mode:r */
			static const uint16_t dflt = 0b0000000000000000; // 16'h0
			static const uint16_t mask = 0b1111111111111111; // [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]
		};
	};
	
	/* Set register GYRO_ZOUT */
	void setGYRO_ZOUT(uint16_t value)
	{
		write(GYRO_ZOUT::__address, value, 16);
	}
	
	/* Get register GYRO_ZOUT */
	uint16_t getGYRO_ZOUT()
	{
		return read16(GYRO_ZOUT::__address, 16);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                       REG EXT_SENS_DATA_00                                        *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG EXT_SENS_DATA_00:
	 */
	struct EXT_SENS_DATA_00
	{
		static const uint16_t __address = 73;
		
		/* Bits EXT_SENS_DATA_00: */
		struct EXT_SENS_DATA_00_
		{
			/* Mode:r */
			static const uint8_t dflt = 0b00000000; // 8'h0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register EXT_SENS_DATA_00 */
	void setEXT_SENS_DATA_00(uint8_t value)
	{
		write(EXT_SENS_DATA_00::__address, value, 8);
	}
	
	/* Get register EXT_SENS_DATA_00 */
	uint8_t getEXT_SENS_DATA_00()
	{
		return read8(EXT_SENS_DATA_00::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                       REG EXT_SENS_DATA_01                                        *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG EXT_SENS_DATA_01:
	 */
	struct EXT_SENS_DATA_01
	{
		static const uint16_t __address = 74;
		
		/* Bits EXT_SENS_DATA_01: */
		struct EXT_SENS_DATA_01_
		{
			/* Mode:r */
			static const uint8_t dflt = 0b00000000; // 8'h0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register EXT_SENS_DATA_01 */
	void setEXT_SENS_DATA_01(uint8_t value)
	{
		write(EXT_SENS_DATA_01::__address, value, 8);
	}
	
	/* Get register EXT_SENS_DATA_01 */
	uint8_t getEXT_SENS_DATA_01()
	{
		return read8(EXT_SENS_DATA_01::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                       REG EXT_SENS_DATA_02                                        *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG EXT_SENS_DATA_02:
	 */
	struct EXT_SENS_DATA_02
	{
		static const uint16_t __address = 75;
		
		/* Bits EXT_SENS_DATA_02: */
		struct EXT_SENS_DATA_02_
		{
			/* Mode:r */
			static const uint8_t dflt = 0b00000000; // 8'h0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register EXT_SENS_DATA_02 */
	void setEXT_SENS_DATA_02(uint8_t value)
	{
		write(EXT_SENS_DATA_02::__address, value, 8);
	}
	
	/* Get register EXT_SENS_DATA_02 */
	uint8_t getEXT_SENS_DATA_02()
	{
		return read8(EXT_SENS_DATA_02::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                       REG EXT_SENS_DATA_03                                        *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG EXT_SENS_DATA_03:
	 */
	struct EXT_SENS_DATA_03
	{
		static const uint16_t __address = 76;
		
		/* Bits EXT_SENS_DATA_03: */
		struct EXT_SENS_DATA_03_
		{
			/* Mode:r */
			static const uint8_t dflt = 0b00000000; // 8'h0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register EXT_SENS_DATA_03 */
	void setEXT_SENS_DATA_03(uint8_t value)
	{
		write(EXT_SENS_DATA_03::__address, value, 8);
	}
	
	/* Get register EXT_SENS_DATA_03 */
	uint8_t getEXT_SENS_DATA_03()
	{
		return read8(EXT_SENS_DATA_03::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                       REG EXT_SENS_DATA_04                                        *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG EXT_SENS_DATA_04:
	 */
	struct EXT_SENS_DATA_04
	{
		static const uint16_t __address = 77;
		
		/* Bits EXT_SENS_DATA_04: */
		struct EXT_SENS_DATA_04_
		{
			/* Mode:r */
			static const uint8_t dflt = 0b00000000; // 8'h0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register EXT_SENS_DATA_04 */
	void setEXT_SENS_DATA_04(uint8_t value)
	{
		write(EXT_SENS_DATA_04::__address, value, 8);
	}
	
	/* Get register EXT_SENS_DATA_04 */
	uint8_t getEXT_SENS_DATA_04()
	{
		return read8(EXT_SENS_DATA_04::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                       REG EXT_SENS_DATA_05                                        *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG EXT_SENS_DATA_05:
	 */
	struct EXT_SENS_DATA_05
	{
		static const uint16_t __address = 78;
		
		/* Bits EXT_SENS_DATA_05: */
		struct EXT_SENS_DATA_05_
		{
			/* Mode:r */
			static const uint8_t dflt = 0b00000000; // 8'h0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register EXT_SENS_DATA_05 */
	void setEXT_SENS_DATA_05(uint8_t value)
	{
		write(EXT_SENS_DATA_05::__address, value, 8);
	}
	
	/* Get register EXT_SENS_DATA_05 */
	uint8_t getEXT_SENS_DATA_05()
	{
		return read8(EXT_SENS_DATA_05::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                       REG EXT_SENS_DATA_06                                        *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG EXT_SENS_DATA_06:
	 */
	struct EXT_SENS_DATA_06
	{
		static const uint16_t __address = 79;
		
		/* Bits EXT_SENS_DATA_06: */
		struct EXT_SENS_DATA_06_
		{
			/* Mode:r */
			static const uint8_t dflt = 0b00000000; // 8'h0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register EXT_SENS_DATA_06 */
	void setEXT_SENS_DATA_06(uint8_t value)
	{
		write(EXT_SENS_DATA_06::__address, value, 8);
	}
	
	/* Get register EXT_SENS_DATA_06 */
	uint8_t getEXT_SENS_DATA_06()
	{
		return read8(EXT_SENS_DATA_06::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                       REG EXT_SENS_DATA_07                                        *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG EXT_SENS_DATA_07:
	 */
	struct EXT_SENS_DATA_07
	{
		static const uint16_t __address = 80;
		
		/* Bits EXT_SENS_DATA_07: */
		struct EXT_SENS_DATA_07_
		{
			/* Mode:r */
			static const uint8_t dflt = 0b00000000; // 8'h0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register EXT_SENS_DATA_07 */
	void setEXT_SENS_DATA_07(uint8_t value)
	{
		write(EXT_SENS_DATA_07::__address, value, 8);
	}
	
	/* Get register EXT_SENS_DATA_07 */
	uint8_t getEXT_SENS_DATA_07()
	{
		return read8(EXT_SENS_DATA_07::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                       REG EXT_SENS_DATA_08                                        *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG EXT_SENS_DATA_08:
	 */
	struct EXT_SENS_DATA_08
	{
		static const uint16_t __address = 81;
		
		/* Bits EXT_SENS_DATA_08: */
		struct EXT_SENS_DATA_08_
		{
			/* Mode:r */
			static const uint8_t dflt = 0b00000000; // 8'h0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register EXT_SENS_DATA_08 */
	void setEXT_SENS_DATA_08(uint8_t value)
	{
		write(EXT_SENS_DATA_08::__address, value, 8);
	}
	
	/* Get register EXT_SENS_DATA_08 */
	uint8_t getEXT_SENS_DATA_08()
	{
		return read8(EXT_SENS_DATA_08::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                       REG EXT_SENS_DATA_09                                        *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG EXT_SENS_DATA_09:
	 */
	struct EXT_SENS_DATA_09
	{
		static const uint16_t __address = 82;
		
		/* Bits EXT_SENS_DATA_09: */
		struct EXT_SENS_DATA_09_
		{
			/* Mode:r */
			static const uint8_t dflt = 0b00000000; // 8'h0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register EXT_SENS_DATA_09 */
	void setEXT_SENS_DATA_09(uint8_t value)
	{
		write(EXT_SENS_DATA_09::__address, value, 8);
	}
	
	/* Get register EXT_SENS_DATA_09 */
	uint8_t getEXT_SENS_DATA_09()
	{
		return read8(EXT_SENS_DATA_09::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                       REG EXT_SENS_DATA_10                                        *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG EXT_SENS_DATA_10:
	 */
	struct EXT_SENS_DATA_10
	{
		static const uint16_t __address = 83;
		
		/* Bits EXT_SENS_DATA_10: */
		struct EXT_SENS_DATA_10_
		{
			/* Mode:r */
			static const uint8_t dflt = 0b00000000; // 8'h0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register EXT_SENS_DATA_10 */
	void setEXT_SENS_DATA_10(uint8_t value)
	{
		write(EXT_SENS_DATA_10::__address, value, 8);
	}
	
	/* Get register EXT_SENS_DATA_10 */
	uint8_t getEXT_SENS_DATA_10()
	{
		return read8(EXT_SENS_DATA_10::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                       REG EXT_SENS_DATA_11                                        *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG EXT_SENS_DATA_11:
	 */
	struct EXT_SENS_DATA_11
	{
		static const uint16_t __address = 84;
		
		/* Bits EXT_SENS_DATA_11: */
		struct EXT_SENS_DATA_11_
		{
			/* Mode:r */
			static const uint8_t dflt = 0b00000000; // 8'h0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register EXT_SENS_DATA_11 */
	void setEXT_SENS_DATA_11(uint8_t value)
	{
		write(EXT_SENS_DATA_11::__address, value, 8);
	}
	
	/* Get register EXT_SENS_DATA_11 */
	uint8_t getEXT_SENS_DATA_11()
	{
		return read8(EXT_SENS_DATA_11::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                       REG EXT_SENS_DATA_12                                        *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG EXT_SENS_DATA_12:
	 */
	struct EXT_SENS_DATA_12
	{
		static const uint16_t __address = 85;
		
		/* Bits EXT_SENS_DATA_12: */
		struct EXT_SENS_DATA_12_
		{
			/* Mode:r */
			static const uint8_t dflt = 0b00000000; // 8'h0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register EXT_SENS_DATA_12 */
	void setEXT_SENS_DATA_12(uint8_t value)
	{
		write(EXT_SENS_DATA_12::__address, value, 8);
	}
	
	/* Get register EXT_SENS_DATA_12 */
	uint8_t getEXT_SENS_DATA_12()
	{
		return read8(EXT_SENS_DATA_12::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                       REG EXT_SENS_DATA_13                                        *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG EXT_SENS_DATA_13:
	 */
	struct EXT_SENS_DATA_13
	{
		static const uint16_t __address = 86;
		
		/* Bits EXT_SENS_DATA_13: */
		struct EXT_SENS_DATA_13_
		{
			/* Mode:r */
			static const uint8_t dflt = 0b00000000; // 8'h0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register EXT_SENS_DATA_13 */
	void setEXT_SENS_DATA_13(uint8_t value)
	{
		write(EXT_SENS_DATA_13::__address, value, 8);
	}
	
	/* Get register EXT_SENS_DATA_13 */
	uint8_t getEXT_SENS_DATA_13()
	{
		return read8(EXT_SENS_DATA_13::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                       REG EXT_SENS_DATA_14                                        *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG EXT_SENS_DATA_14:
	 */
	struct EXT_SENS_DATA_14
	{
		static const uint16_t __address = 87;
		
		/* Bits EXT_SENS_DATA_14: */
		struct EXT_SENS_DATA_14_
		{
			/* Mode:r */
			static const uint8_t dflt = 0b00000000; // 8'h0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register EXT_SENS_DATA_14 */
	void setEXT_SENS_DATA_14(uint8_t value)
	{
		write(EXT_SENS_DATA_14::__address, value, 8);
	}
	
	/* Get register EXT_SENS_DATA_14 */
	uint8_t getEXT_SENS_DATA_14()
	{
		return read8(EXT_SENS_DATA_14::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                       REG EXT_SENS_DATA_15                                        *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG EXT_SENS_DATA_15:
	 */
	struct EXT_SENS_DATA_15
	{
		static const uint16_t __address = 88;
		
		/* Bits EXT_SENS_DATA_15: */
		struct EXT_SENS_DATA_15_
		{
			/* Mode:r */
			static const uint8_t dflt = 0b00000000; // 8'h0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register EXT_SENS_DATA_15 */
	void setEXT_SENS_DATA_15(uint8_t value)
	{
		write(EXT_SENS_DATA_15::__address, value, 8);
	}
	
	/* Get register EXT_SENS_DATA_15 */
	uint8_t getEXT_SENS_DATA_15()
	{
		return read8(EXT_SENS_DATA_15::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                       REG EXT_SENS_DATA_16                                        *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG EXT_SENS_DATA_16:
	 */
	struct EXT_SENS_DATA_16
	{
		static const uint16_t __address = 89;
		
		/* Bits EXT_SENS_DATA_16: */
		struct EXT_SENS_DATA_16_
		{
			/* Mode:r */
			static const uint8_t dflt = 0b00000000; // 8'h0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register EXT_SENS_DATA_16 */
	void setEXT_SENS_DATA_16(uint8_t value)
	{
		write(EXT_SENS_DATA_16::__address, value, 8);
	}
	
	/* Get register EXT_SENS_DATA_16 */
	uint8_t getEXT_SENS_DATA_16()
	{
		return read8(EXT_SENS_DATA_16::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                       REG EXT_SENS_DATA_17                                        *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG EXT_SENS_DATA_17:
	 */
	struct EXT_SENS_DATA_17
	{
		static const uint16_t __address = 90;
		
		/* Bits EXT_SENS_DATA_17: */
		struct EXT_SENS_DATA_17_
		{
			/* Mode:r */
			static const uint8_t dflt = 0b00000000; // 8'h0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register EXT_SENS_DATA_17 */
	void setEXT_SENS_DATA_17(uint8_t value)
	{
		write(EXT_SENS_DATA_17::__address, value, 8);
	}
	
	/* Get register EXT_SENS_DATA_17 */
	uint8_t getEXT_SENS_DATA_17()
	{
		return read8(EXT_SENS_DATA_17::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                       REG EXT_SENS_DATA_18                                        *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG EXT_SENS_DATA_18:
	 */
	struct EXT_SENS_DATA_18
	{
		static const uint16_t __address = 91;
		
		/* Bits EXT_SENS_DATA_18: */
		struct EXT_SENS_DATA_18_
		{
			/* Mode:r */
			static const uint8_t dflt = 0b00000000; // 8'h0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register EXT_SENS_DATA_18 */
	void setEXT_SENS_DATA_18(uint8_t value)
	{
		write(EXT_SENS_DATA_18::__address, value, 8);
	}
	
	/* Get register EXT_SENS_DATA_18 */
	uint8_t getEXT_SENS_DATA_18()
	{
		return read8(EXT_SENS_DATA_18::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                       REG EXT_SENS_DATA_19                                        *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG EXT_SENS_DATA_19:
	 */
	struct EXT_SENS_DATA_19
	{
		static const uint16_t __address = 92;
		
		/* Bits EXT_SENS_DATA_19: */
		struct EXT_SENS_DATA_19_
		{
			/* Mode:r */
			static const uint8_t dflt = 0b00000000; // 8'h0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register EXT_SENS_DATA_19 */
	void setEXT_SENS_DATA_19(uint8_t value)
	{
		write(EXT_SENS_DATA_19::__address, value, 8);
	}
	
	/* Get register EXT_SENS_DATA_19 */
	uint8_t getEXT_SENS_DATA_19()
	{
		return read8(EXT_SENS_DATA_19::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                       REG EXT_SENS_DATA_20                                        *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG EXT_SENS_DATA_20:
	 */
	struct EXT_SENS_DATA_20
	{
		static const uint16_t __address = 93;
		
		/* Bits EXT_SENS_DATA_20: */
		struct EXT_SENS_DATA_20_
		{
			/* Mode:r */
			static const uint8_t dflt = 0b00000000; // 8'h0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register EXT_SENS_DATA_20 */
	void setEXT_SENS_DATA_20(uint8_t value)
	{
		write(EXT_SENS_DATA_20::__address, value, 8);
	}
	
	/* Get register EXT_SENS_DATA_20 */
	uint8_t getEXT_SENS_DATA_20()
	{
		return read8(EXT_SENS_DATA_20::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                       REG EXT_SENS_DATA_21                                        *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG EXT_SENS_DATA_21:
	 */
	struct EXT_SENS_DATA_21
	{
		static const uint16_t __address = 94;
		
		/* Bits EXT_SENS_DATA_21: */
		struct EXT_SENS_DATA_21_
		{
			/* Mode:r */
			static const uint8_t dflt = 0b00000000; // 8'h0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register EXT_SENS_DATA_21 */
	void setEXT_SENS_DATA_21(uint8_t value)
	{
		write(EXT_SENS_DATA_21::__address, value, 8);
	}
	
	/* Get register EXT_SENS_DATA_21 */
	uint8_t getEXT_SENS_DATA_21()
	{
		return read8(EXT_SENS_DATA_21::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                       REG EXT_SENS_DATA_22                                        *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG EXT_SENS_DATA_22:
	 */
	struct EXT_SENS_DATA_22
	{
		static const uint16_t __address = 95;
		
		/* Bits EXT_SENS_DATA_22: */
		struct EXT_SENS_DATA_22_
		{
			/* Mode:r */
			static const uint8_t dflt = 0b00000000; // 8'h0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register EXT_SENS_DATA_22 */
	void setEXT_SENS_DATA_22(uint8_t value)
	{
		write(EXT_SENS_DATA_22::__address, value, 8);
	}
	
	/* Get register EXT_SENS_DATA_22 */
	uint8_t getEXT_SENS_DATA_22()
	{
		return read8(EXT_SENS_DATA_22::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                       REG EXT_SENS_DATA_23                                        *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG EXT_SENS_DATA_23:
	 */
	struct EXT_SENS_DATA_23
	{
		static const uint16_t __address = 96;
		
		/* Bits EXT_SENS_DATA_23: */
		struct EXT_SENS_DATA_23_
		{
			/* Mode:r */
			static const uint8_t dflt = 0b00000000; // 8'h0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register EXT_SENS_DATA_23 */
	void setEXT_SENS_DATA_23(uint8_t value)
	{
		write(EXT_SENS_DATA_23::__address, value, 8);
	}
	
	/* Get register EXT_SENS_DATA_23 */
	uint8_t getEXT_SENS_DATA_23()
	{
		return read8(EXT_SENS_DATA_23::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                         REG I2C_SLV0_DO                                          *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG I2C_SLV0_DO:
	 */
	struct I2C_SLV0_DO
	{
		static const uint16_t __address = 99;
		
		/* Bits I2C_SLV0_DO: */
		struct I2C_SLV0_DO_
		{
			/* Mode:rw */
			static const uint8_t dflt = 0b00000000; // 8'h0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register I2C_SLV0_DO */
	void setI2C_SLV0_DO(uint8_t value)
	{
		write(I2C_SLV0_DO::__address, value, 8);
	}
	
	/* Get register I2C_SLV0_DO */
	uint8_t getI2C_SLV0_DO()
	{
		return read8(I2C_SLV0_DO::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                         REG I2C_SLV1_DO                                          *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG I2C_SLV1_DO:
	 */
	struct I2C_SLV1_DO
	{
		static const uint16_t __address = 100;
		
		/* Bits I2C_SLV1_DO: */
		struct I2C_SLV1_DO_
		{
			/* Mode:rw */
			static const uint8_t dflt = 0b00000000; // 8'h0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register I2C_SLV1_DO */
	void setI2C_SLV1_DO(uint8_t value)
	{
		write(I2C_SLV1_DO::__address, value, 8);
	}
	
	/* Get register I2C_SLV1_DO */
	uint8_t getI2C_SLV1_DO()
	{
		return read8(I2C_SLV1_DO::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                         REG I2C_SLV2_DO                                          *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG I2C_SLV2_DO:
	 */
	struct I2C_SLV2_DO
	{
		static const uint16_t __address = 101;
		
		/* Bits I2C_SLV2_DO: */
		struct I2C_SLV2_DO_
		{
			/* Mode:rw */
			static const uint8_t dflt = 0b00000000; // 8'h0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register I2C_SLV2_DO */
	void setI2C_SLV2_DO(uint8_t value)
	{
		write(I2C_SLV2_DO::__address, value, 8);
	}
	
	/* Get register I2C_SLV2_DO */
	uint8_t getI2C_SLV2_DO()
	{
		return read8(I2C_SLV2_DO::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                         REG I2C_SLV3_DO                                          *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG I2C_SLV3_DO:
	 */
	struct I2C_SLV3_DO
	{
		static const uint16_t __address = 102;
		
		/* Bits I2C_SLV3_DO: */
		struct I2C_SLV3_DO_
		{
			/* Mode:rw */
			static const uint8_t dflt = 0b00000000; // 8'h0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register I2C_SLV3_DO */
	void setI2C_SLV3_DO(uint8_t value)
	{
		write(I2C_SLV3_DO::__address, value, 8);
	}
	
	/* Get register I2C_SLV3_DO */
	uint8_t getI2C_SLV3_DO()
	{
		return read8(I2C_SLV3_DO::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                      REG I2C_MST_DELAY_CTRL                                       *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG I2C_MST_DELAY_CTRL:
	 */
	struct I2C_MST_DELAY_CTRL
	{
		static const uint16_t __address = 103;
		
		/* Bits DELAY_ES_SHADOW: */
		struct DELAY_ES_SHADOW
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits unused_0: */
		struct unused_0
		{
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b01100000; // [5,6]
		};
		/* Bits I2C_SLV4_DLY_EN: */
		struct I2C_SLV4_DLY_EN
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00010000; // [4]
		};
		/* Bits I2C_SLV3_DLY_EN: */
		struct I2C_SLV3_DLY_EN
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00001000; // [3]
		};
		/* Bits I2C_SLV2_DLY_EN: */
		struct I2C_SLV2_DLY_EN
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000100; // [2]
		};
		/* Bits I2C_SLV1_DLY_EN: */
		struct I2C_SLV1_DLY_EN
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000010; // [1]
		};
		/* Bits I2C_SLV0_DLY_EN: */
		struct I2C_SLV0_DLY_EN
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000001; // [0]
		};
	};
	
	/* Set register I2C_MST_DELAY_CTRL */
	void setI2C_MST_DELAY_CTRL(uint8_t value)
	{
		write(I2C_MST_DELAY_CTRL::__address, value, 8);
	}
	
	/* Get register I2C_MST_DELAY_CTRL */
	uint8_t getI2C_MST_DELAY_CTRL()
	{
		return read8(I2C_MST_DELAY_CTRL::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                      REG SIGNAL_PATH_RESET                                       *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG SIGNAL_PATH_RESET:
	 */
	struct SIGNAL_PATH_RESET
	{
		static const uint16_t __address = 104;
		
		/* Bits unused_0: */
		struct unused_0
		{
			static const uint8_t dflt = 0b00000; // 5'b0
			static const uint8_t mask = 0b11111000; // [3,4,5,6,7]
		};
		/* Bits GYRO_RESET: */
		struct GYRO_RESET
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000100; // [2]
		};
		/* Bits ACCEL_RESET: */
		struct ACCEL_RESET
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000010; // [1]
		};
		/* Bits TEMP_RESET: */
		struct TEMP_RESET
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000001; // [0]
		};
	};
	
	/* Set register SIGNAL_PATH_RESET */
	void setSIGNAL_PATH_RESET(uint8_t value)
	{
		write(SIGNAL_PATH_RESET::__address, value, 8);
	}
	
	/* Get register SIGNAL_PATH_RESET */
	uint8_t getSIGNAL_PATH_RESET()
	{
		return read8(SIGNAL_PATH_RESET::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                       REG MOT_DETECT_CTRL                                        *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG MOT_DETECT_CTRL:
	 */
	struct MOT_DETECT_CTRL
	{
		static const uint16_t __address = 105;
		
		/* Bits unused_0: */
		struct unused_0
		{
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b11000000; // [6,7]
		};
		/* Bits ACCEL_ON_DELAY: */
		struct ACCEL_ON_DELAY
		{
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b00110000; // [4,5]
		};
		/* Bits unused_1: */
		struct unused_1
		{
			static const uint8_t dflt = 0b0000; // 4'b0
			static const uint8_t mask = 0b00001111; // [0,1,2,3]
		};
	};
	
	/* Set register MOT_DETECT_CTRL */
	void setMOT_DETECT_CTRL(uint8_t value)
	{
		write(MOT_DETECT_CTRL::__address, value, 8);
	}
	
	/* Get register MOT_DETECT_CTRL */
	uint8_t getMOT_DETECT_CTRL()
	{
		return read8(MOT_DETECT_CTRL::__address, 8);
	}
	
	
	/****************************************************************************************************\
	 *                                                                                                  *
	 *                                          REG USER_CTRL                                           *
	 *                                                                                                  *
	\****************************************************************************************************/
	
	/* REG USER_CTRL:
	 */
	struct USER_CTRL
	{
		static const uint16_t __address = 106;
		
		/* Bits unused_0: */
		struct unused_0
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits FIFO_EN: */
		struct FIFO_EN
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b01000000; // [6]
		};
		/* Bits I2C_MST_EN: */
		struct I2C_MST_EN
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00100000; // [5]
		};
		/* Bits I2C_IF_DIS: */
		struct I2C_IF_DIS
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00010000; // [4]
		};
		/* Bits unused_1: */
		struct unused_1
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00001000; // [3]
		};
		/* Bits FIFO_RESET: */
		struct FIFO_RESET
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000100; // [2]
		};
		/* Bits I2C_MST_RESET: */
		struct I2C_MST_RESET
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000010; // [1]
		};
		/* Bits SIG_COND_RESET: */
		struct SIG_COND_RESET
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000001; // [0]
		};
	};
	
	/* Set register USER_CTRL */
	void setUSER_CTRL(uint8_t value)
	{
		write(USER_CTRL::__address, value, 8);
	}
	
	/* Get register USER_CTRL */
	uint8_t getUSER_CTRL()
	{
		return read8(USER_CTRL::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                          REG PWR_MGMT_1                                           *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG PWR_MGMT_1:
	 */
	struct PWR_MGMT_1
	{
		static const uint16_t __address = 107;
		
		/* Bits DEVICE_RESET: */
		struct DEVICE_RESET
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits SLEEP: */
		struct SLEEP
		{
			static const uint8_t dflt = 0b1; // 1'b1
			static const uint8_t mask = 0b01000000; // [6]
		};
		/* Bits CYCLE: */
		struct CYCLE
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00100000; // [5]
		};
		/* Bits unused_0: */
		struct unused_0
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00010000; // [4]
		};
		/* Bits TEMP_DIS: */
		struct TEMP_DIS
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00001000; // [3]
		};
		/* Bits CLKSEL: */
		struct CLKSEL
		{
			static const uint8_t dflt = 0b000; // 3'b0
			static const uint8_t mask = 0b00000111; // [0,1,2]
		};
	};
	
	/* Set register PWR_MGMT_1 */
	void setPWR_MGMT_1(uint8_t value)
	{
		write(PWR_MGMT_1::__address, value, 8);
	}
	
	/* Get register PWR_MGMT_1 */
	uint8_t getPWR_MGMT_1()
	{
		return read8(PWR_MGMT_1::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                          REG PWR_MGMT_2                                           *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG PWR_MGMT_2:
	 */
	struct PWR_MGMT_2
	{
		static const uint16_t __address = 108;
		
		/* Bits LP_WAKE_CTRL: */
		struct LP_WAKE_CTRL
		{
			static const uint8_t dflt = 0b00; // 2'b0
			static const uint8_t mask = 0b11000000; // [6,7]
		};
		/* Bits STBY_XA: */
		struct STBY_XA
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00100000; // [5]
		};
		/* Bits STBY_YA: */
		struct STBY_YA
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00010000; // [4]
		};
		/* Bits STBY_ZA: */
		struct STBY_ZA
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00001000; // [3]
		};
		/* Bits STBY_XG: */
		struct STBY_XG
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000100; // [2]
		};
		/* Bits STBY_YG: */
		struct STBY_YG
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000010; // [1]
		};
		/* Bits STBY_ZG: */
		struct STBY_ZG
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b00000001; // [0]
		};
	};
	
	/* Set register PWR_MGMT_2 */
	void setPWR_MGMT_2(uint8_t value)
	{
		write(PWR_MGMT_2::__address, value, 8);
	}
	
	/* Get register PWR_MGMT_2 */
	uint8_t getPWR_MGMT_2()
	{
		return read8(PWR_MGMT_2::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                          REG FIFO_COUNT                                           *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG FIFO_COUNT:
	 */
	struct FIFO_COUNT
	{
		static const uint16_t __address = 114;
		
		/* Bits FIFO_COUNT: */
		struct FIFO_COUNT_
		{
			/* Mode:rw */
			static const uint16_t dflt = 0b0000000000000000; // 16'h0
			static const uint16_t mask = 0b1111111111111111; // [0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15]
		};
	};
	
	/* Set register FIFO_COUNT */
	void setFIFO_COUNT(uint16_t value)
	{
		write(FIFO_COUNT::__address, value, 16);
	}
	
	/* Get register FIFO_COUNT */
	uint16_t getFIFO_COUNT()
	{
		return read16(FIFO_COUNT::__address, 16);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                           REG FIFO_R_W                                            *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG FIFO_R_W:
	 */
	struct FIFO_R_W
	{
		static const uint16_t __address = 116;
		
		/* Bits FIFO_R_W: */
		struct FIFO_R_W_
		{
			/* Mode:rw */
			static const uint8_t dflt = 0b00000000; // 8'h0
			static const uint8_t mask = 0b11111111; // [0,1,2,3,4,5,6,7]
		};
	};
	
	/* Set register FIFO_R_W */
	void setFIFO_R_W(uint8_t value)
	{
		write(FIFO_R_W::__address, value, 8);
	}
	
	/* Get register FIFO_R_W */
	uint8_t getFIFO_R_W()
	{
		return read8(FIFO_R_W::__address, 8);
	}
	
	
	/*****************************************************************************************************\
	 *                                                                                                   *
	 *                                           REG WHO_AM_I                                            *
	 *                                                                                                   *
	\*****************************************************************************************************/
	
	/* REG WHO_AM_I:
	 */
	struct WHO_AM_I
	{
		static const uint16_t __address = 117;
		
		/* Bits unused_0: */
		struct unused_0
		{
			static const uint8_t dflt = 0b0; // 1'b0
			static const uint8_t mask = 0b10000000; // [7]
		};
		/* Bits WhoAmI: */
		struct WhoAmI
		{
			static const uint8_t dflt = 0b1101000; // 7'b1101000
			static const uint8_t mask = 0b01111111; // [0,1,2,3,4,5,6]
		};
	};
	
	/* Set register WHO_AM_I */
	void setWHO_AM_I(uint8_t value)
	{
		write(WHO_AM_I::__address, value, 8);
	}
	
	/* Get register WHO_AM_I */
	uint8_t getWHO_AM_I()
	{
		return read8(WHO_AM_I::__address, 8);
	}
	
};
