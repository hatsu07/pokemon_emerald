	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+5 aliases)
	.globl gText_Rom_24EF0C
gText_Rom_24EF0C: @ 0x0824EF0C
	.string "おねえさん『あ！　もう　こんなじかん！\pそれでは　また　じかいの\nほうそうで　おあいしましょう\pおにいさん『つぎは　あなたの　ポケモンを\nしょうかい　するかもよ！$"
	.if (. - gText_Rom_24EF0C) > 0x52
	.error "gText_Rom_24EF0C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24EF0C) < 0x52
	.space 0x52 - (. - gText_Rom_24EF0C)
	.endif
