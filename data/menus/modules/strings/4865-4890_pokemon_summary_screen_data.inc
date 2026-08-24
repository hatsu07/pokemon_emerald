
	@ asm/pokemon_summary_screen.s:7441 PrintRibbonCount
	.globl gText_Rom_5CA3CF
gText_Rom_5CA3CF: @ 0x085CA3CF
	.string "げんざい　{0xFD}{0x02}こ{EOS}"
	.if (. - gText_Rom_5CA3CF) > 0x9
	.error "gText_Rom_5CA3CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA3CF) < 0x9
	.space 0x9 - (. - gText_Rom_5CA3CF)
	.endif
	.globl gPokemonRecord_Rom_5CA3D8
gPokemonRecord_Rom_5CA3D8: @ 0x085CA3D8
	.space 0x1, 0x15
	.space 0x1, 0xFF

