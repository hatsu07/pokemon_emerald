@ Trade data decoded from the former raw blocks at 0x082FD0CC/0x082FD14C.
@ No source .bin is used: palettes are readable RGB555 values and tiles are PNG.
@ The exact runtime role of each of the four palette banks is not yet proven,
@ so compatibility labels are retained and only the binary structure is named.

.macro trade_rgb5 r, g, b
	.2byte ((\r) & 31) | (((\g) & 31) << 5) | (((\b) & 31) << 10)
.endm

	.globl sTradeEarlyPalette0
sTradeEarlyPalette0: @ palette bank 0, 16 colors
	trade_rgb5  0,  0,  0 @ [00] #000000 (0x0000)
	trade_rgb5  7,  7, 21 @ [01] #3939AD (0x54E7)
	trade_rgb5 12, 12, 22 @ [02] #6363B5 (0x598C)
	trade_rgb5 15, 13, 27 @ [03] #7B6BDE (0x6DAF)
	trade_rgb5 10, 11, 26 @ [04] #525AD6 (0x696A)
	trade_rgb5 10, 18, 25 @ [05] #5294CE (0x664A)
	trade_rgb5 16, 14, 28 @ [06] #8473E7 (0x71D0)
	trade_rgb5 18, 19, 23 @ [07] #949CBD (0x5E72)
	trade_rgb5 25, 13,  0 @ [08] #CE6B00 (0x01B9)
	trade_rgb5 30, 18,  0 @ [09] #F79400 (0x025E)
	trade_rgb5  6,  6, 11 @ [10] #31315A (0x2CC6)
	trade_rgb5 31, 26, 14 @ [11] #FFD673 (0x3B5F)
	trade_rgb5 25,  9, 11 @ [12] #CE4A5A (0x2D39)
	trade_rgb5 31, 12,  4 @ [13] #FF6321 (0x119F)
	trade_rgb5 25, 25, 27 @ [14] #CECEDE (0x6F39)
	trade_rgb5 31, 31, 26 @ [15] #FFFFD6 (0x6BFF)

sTradeEarlyPalette1: @ palette bank 1, 16 colors
	trade_rgb5  0,  0,  0 @ [00] #000000 (0x0000)
	trade_rgb5  0,  1,  2 @ [01] #000810 (0x0820)
	trade_rgb5  0,  2,  4 @ [02] #001021 (0x1040)
	trade_rgb5  0,  3,  6 @ [03] #001831 (0x1860)
	trade_rgb5  0,  5,  8 @ [04] #002942 (0x20A0)
	trade_rgb5  0,  6, 10 @ [05] #003152 (0x28C0)
	trade_rgb5  0,  7, 12 @ [06] #003963 (0x30E0)
	trade_rgb5  0,  8, 14 @ [07] #004273 (0x3900)
	trade_rgb5  0, 10, 16 @ [08] #005284 (0x4140)
	trade_rgb5  0, 11, 18 @ [09] #005A94 (0x4960)
	trade_rgb5  0, 12, 20 @ [10] #0063A5 (0x5180)
	trade_rgb5  0, 13, 22 @ [11] #006BB5 (0x59A0)
	trade_rgb5  0, 15, 24 @ [12] #007BC6 (0x61E0)
	trade_rgb5  0, 16, 26 @ [13] #0084D6 (0x6A00)
	trade_rgb5  0, 17, 28 @ [14] #008CE7 (0x7220)
	trade_rgb5  0, 19, 31 @ [15] #009CFF (0x7E60)

sTradeEarlyPalette2: @ palette bank 2, 16 colors
	trade_rgb5  0,  0,  0 @ [00] #000000 (0x0000)
	trade_rgb5  0,  1,  2 @ [01] #000810 (0x0820)
	trade_rgb5  0,  2,  4 @ [02] #001021 (0x1040)
	trade_rgb5  0,  3,  6 @ [03] #001831 (0x1860)
	trade_rgb5  0,  5,  8 @ [04] #002942 (0x20A0)
	trade_rgb5  0,  6, 10 @ [05] #003152 (0x28C0)
	trade_rgb5  0,  7, 12 @ [06] #003963 (0x30E0)
	trade_rgb5  0,  8, 14 @ [07] #004273 (0x3900)
	trade_rgb5  0, 10, 16 @ [08] #005284 (0x4140)
	trade_rgb5  0, 11, 18 @ [09] #005A94 (0x4960)
	trade_rgb5  0, 12, 20 @ [10] #0063A5 (0x5180)
	trade_rgb5  0, 13, 22 @ [11] #006BB5 (0x59A0)
	trade_rgb5  0, 15, 24 @ [12] #007BC6 (0x61E0)
	trade_rgb5  0, 16, 26 @ [13] #0084D6 (0x6A00)
	trade_rgb5  0, 17, 28 @ [14] #008CE7 (0x7220)
	trade_rgb5  0, 19, 31 @ [15] #009CFF (0x7E60)

sTradeEarlyPalette3: @ palette bank 3, 16 colors
	trade_rgb5  0,  0,  0 @ [00] #000000 (0x0000)
	trade_rgb5 15, 16, 27 @ [01] #7B84DE (0x6E0F)
	trade_rgb5 12, 12, 22 @ [02] #6363B5 (0x598C)
	trade_rgb5 15, 13, 27 @ [03] #7B6BDE (0x6DAF)
	trade_rgb5 13, 21, 29 @ [04] #6BADEF (0x76AD)
	trade_rgb5 10, 18, 25 @ [05] #5294CE (0x664A)
	trade_rgb5 22, 23, 28 @ [06] #B5BDE7 (0x72F6)
	trade_rgb5 18, 19, 23 @ [07] #949CBD (0x5E72)
	trade_rgb5 25, 13,  0 @ [08] #CE6B00 (0x01B9)
	trade_rgb5 31, 23,  6 @ [09] #FFBD31 (0x1AFF)
	trade_rgb5 30, 18,  0 @ [10] #F79400 (0x025E)
	trade_rgb5 31, 26, 14 @ [11] #FFD673 (0x3B5F)
	trade_rgb5 25,  9, 11 @ [12] #CE4A5A (0x2D39)
	trade_rgb5 31, 12,  4 @ [13] #FF6321 (0x119F)
	trade_rgb5 25, 25, 27 @ [14] #CECEDE (0x6F39)
	trade_rgb5 31, 12,  4 @ [15] #FF6321 (0x119F)

.if (. - sTradeEarlyPalette0) != 0x80
	.error "trade early palette block must be 0x80 bytes"
.endif

	.globl sTradeEarlyTiles
sTradeEarlyTiles:
	@ 148 GBA 8x8 4bpp tiles, arranged in the source PNG as 4 tiles per row.
	.incbin "build/graphics/trade/early_tiles.4bpp"
.if (. - sTradeEarlyTiles) != 0x1280
	.error "trade early tile block must be 0x1280 bytes"
.endif
