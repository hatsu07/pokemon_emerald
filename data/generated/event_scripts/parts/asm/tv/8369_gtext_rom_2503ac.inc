	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+23 aliases)
	.globl gText_Rom_2503AC
gText_Rom_2503AC: @ 0x082503AC
	.string "ふぇー！\pここには　なにも　おいていません\pいやー　この　なにもない　スペースが\nひみつきち　ぜんたいに　きいてますねー$"
	.if (. - gText_Rom_2503AC) > 0x3d
	.error "gText_Rom_2503AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2503AC) < 0x3d
	.space 0x3d - (. - gText_Rom_2503AC)
	.endif
