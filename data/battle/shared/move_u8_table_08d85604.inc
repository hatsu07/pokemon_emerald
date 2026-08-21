	.globl gMoveU8Table_Rom_D85604
gMoveU8Table_Rom_D85604: @ 0x08D85604
	@ analyzed canonical ROM range 0x08D85604-0x08D85605
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x2 bytes=2
	.byte 0x1A, 0x03
	@ pret/pokeemerald-jp direct xref for 0x08D85606: battle_message.s: SetPpNumbersPaletteInMoveSelection
