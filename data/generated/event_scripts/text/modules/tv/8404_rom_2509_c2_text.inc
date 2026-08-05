	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+26 aliases)
	.globl gText_Rom_2509C2
gText_Rom_2509C2: @ 0x082509C2
	.string "ファン『はしる　すがたが\nかわいい　ところ！！$"
	.if (. - gText_Rom_2509C2) > 0x18
	.error "gText_Rom_2509C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2509C2) < 0x18
	.space 0x18 - (. - gText_Rom_2509C2)
	.endif
