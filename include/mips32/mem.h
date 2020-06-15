/*
 * MIT License
 *
 * Copyright(c) 2020 Pedro Henrique Penna <pedrohenriquepenna@gmail.com>
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef MIPS32_MEM_H_
#define MIPS32_MEM_H_

#define MEM_NUM 32
	/**
	 * @name Name of memory
	 */
	/**@{*/
	#define MEM_1  "0x000"
  #define MEM_2  "0x010"
  #define MEM_3  "0x020"
  #define MEM_4  "0x030"
  #define MEM_5  "0x040"
  #define MEM_6  "0x050"
  #define MEM_7  "0x060"
  #define MEM_8  "0x070"
  #define MEM_9  "0x080"
  #define MEM_10  "0x090"
  #define MEM_11  "0x0a0"
  #define MEM_12  "0x0b0"
  #define MEM_13  "0x0c0"
  #define MEM_14  "0x0d0"
  #define MEM_15  "0x0e0"
  #define MEM_16  "0x0f0"
  #define MEM_17  "0x100"
  #define MEM_18  "0x110"
  #define MEM_19  "0x120"
  #define MEM_20  "0x130"
  #define MEM_21  "0x140"
  #define MEM_22  "0x150"
  #define MEM_23  "0x160"
  #define MEM_24  "0x170"
  #define MEM_25  "0x180"
  #define MEM_26  "0x190"
  #define MEM_27  "0x1a0"
  #define MEM_28  "0x1b0"
  #define MEM_29  "0x1c0"
  #define MEM_30  "0x1d0"
  #define MEM_31  "0x1e0"
  #define MEM_32  "0x1f0"
	/**@}**/

  /**
	 * @name Value of memory
	 */
	/**@{*/
	#define MEM_1_VALUE "0x00000000"
  #define MEM_2_VALUE "0x00000000"
  #define MEM_3_VALUE "0x00000000"
  #define MEM_4_VALUE "0x00000000"
  #define MEM_5_VALUE "0x00000000"
  #define MEM_6_VALUE "0x00000000"
  #define MEM_7_VALUE "0x00000000"
  #define MEM_8_VALUE "0x00000000"
  #define MEM_9_VALUE "0x00000000"
  #define MEM_10_VALUE "0x00000000"
  #define MEM_11_VALUE "0x00000000"
  #define MEM_12_VALUE "0x00000000"
  #define MEM_13_VALUE "0x00000000"
  #define MEM_14_VALUE "0x00000000"
  #define MEM_15_VALUE "0x00000000"
  #define MEM_16_VALUE "0x00000000"
  #define MEM_17_VALUE "0x00000000"
  #define MEM_18_VALUE "0x00000000"
  #define MEM_19_VALUE "0x00000000"
  #define MEM_20_VALUE "0x00000000"
  #define MEM_21_VALUE "0x00000000"
  #define MEM_22_VALUE "0x00000000"
  #define MEM_23_VALUE "0x00000000"
  #define MEM_24_VALUE "0x00000000"
  #define MEM_25_VALUE "0x00000000"
  #define MEM_26_VALUE "0x00000000"
  #define MEM_27_VALUE "0x00000000"
  #define MEM_28_VALUE "0x00000000"
  #define MEM_29_VALUE "0x00000000"
  #define MEM_30_VALUE "0x00000000"
  #define MEM_31_VALUE "0x00000000"
  #define MEM_32_VALUE "0x00000000"
	/**@}**/
	
	struct mem
	{
		
		const char *name;                     /**< Instruction Name          */
    const char *value;                     /**< Instruction Name          */
		
	
	};

#endif /* MIPS32_REGS_H_ */
