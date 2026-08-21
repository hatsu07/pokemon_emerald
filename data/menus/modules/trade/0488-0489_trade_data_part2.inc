gText_Rom_300A9B: @ 0x08300A9B
	@ Decoded text from ROM range: offset=0x300A9B, size=0x3
	.string "わざ{EOS}"
	@ pret/pokeemerald-jp direct xref for 0x08300A9E: trade.s: sub_08079564
	.globl gTradeData_08300A9E
gTradeData_08300A9E: @ 0x08300A9E
	@ analyzed canonical ROM range 0x08300A9E-0x08300A9F
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x2 bytes=2
	.byte 0xFE, 0xFF
	.globl gText_Rom_300AA0
