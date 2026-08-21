	.globl gBattleWindowTextPalette
gBattleWindowTextPalette: @ 0x08D855E4
	.incbin "build/graphics/battle_interface/text.gbapal.lz"
	.if (. - gBattleWindowTextPalette) != 0x20
	.error "gBattleWindowTextPalette exact slot size mismatch"
	.endif
@ pret/pokeemerald-jp direct xref for 0x08D85604: battle_message.s: SetPpNumbersPaletteInMoveSelection; pokemon_summary_screen.s: SummaryScreen_DecompressGraphics
