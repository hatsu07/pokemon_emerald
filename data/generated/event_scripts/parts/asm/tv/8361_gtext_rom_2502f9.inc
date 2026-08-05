	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+23 aliases)
	.globl gText_Rom_2502F9
gText_Rom_2502F9: @ 0x082502F9
	.string "ああー！　なるほど！\pここに　「{0xFD}{0x03}」　ですか！\nこれは　こうかてき　ですねー$"
	.if (. - gText_Rom_2502F9) > 0x28
	.error "gText_Rom_2502F9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2502F9) < 0x28
	.space 0x28 - (. - gText_Rom_2502F9)
	.endif
