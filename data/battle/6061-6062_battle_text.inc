	.globl gText_Rom_5CC335
	.set gText_Rom_5CC335, gText_Rom_5CC331 + 0x4
	.globl gText_Rom_5CC339
gText_Rom_5CC339: @ 0x085CC339
	@ Decoded text from ROM range: offset=0x5CC339, size=0x3
	.string "ひき{EOS}"
	@ pret/pokeemerald-jp direct xref for 0x085CC33C: trainer_card.s: PrintMoneyOnCard
	.globl gTrainerCardData_085CC33C
gTrainerCardData_085CC33C: @ 0x085CC33C
	@ analyzed canonical ROM range 0x085CC33C-0x085CC340
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x5 bytes=5
	.byte 0xF0, 0xFF, 0x13, 0x2E, 0xFF
	.globl gText_Rom_5CC341
