sDummyPaletteStructTemplate: @ 0x084FCF98
	.2byte TAG_NONE @ id
	.2byte 0        @ alignment padding before src
	.4byte 0        @ src
	.2byte 0        @ pst_field_8_0 / unused / size
	.byte 0          @ time1
	.byte 0x20       @ srcCount = 0, state = 1
	.byte 0          @ time2
	.space 3         @ struct tail padding

	@ Rounded-down grayscale values indexed by 5-bit luminance.
	.globl sRoundedDownGrayscaleMap
sRoundedDownGrayscaleMap: @ 0x084FCFA8
	.byte 0, 0, 0, 0, 0
	.byte 5, 5, 5, 5, 5
	.byte 11, 11, 11, 11, 11
	.byte 16, 16, 16, 16, 16
	.byte 21, 21, 21, 21, 21
	.byte 27, 27, 27, 27, 27
	.byte 31, 31

	@ struct Fanfare { u16 songNum; u16 duration; }
	@ Song constants are intentionally comments here: this data assembler
	@ context does not import the MUS_* definitions.
	.globl sFanfares
