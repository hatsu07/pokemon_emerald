	.globl gMoveSelectionPpPalette
gMoveSelectionPpPalette: @ 0x08D85604
	@ Move-selection / summary-screen PP text palette.
	@ Battle PP state uses 4-byte stride; the second color column starts at +2.
	@ analyzed canonical ROM range 0x08D85604-0x08D85605
	@ structured u8 payload; no safe higher-level semantic type was provable
	@ ANALYSIS: U8_DATA size=0x2 bytes=2
	.byte 0x1A, 0x03
	@ pret/pokeemerald-jp direct xref for 0x08D85606: battle_message.s: SetPpNumbersPaletteInMoveSelection
