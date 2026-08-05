	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+7 aliases)
	.globl gText_Rom_24C980
gText_Rom_24C980: @ 0x0824C980
	.string "ブラボー！　{0xFD}{0x02}\nブラボー！！　{0xFD}{0x03}\pこんごの　{0xFD}{0x02}さんの　かつやくに\nきたい　したいねー！\pそれじゃあ　また　じかいの\nほうそうで　あいましょー！$"
	.if (. - gText_Rom_24C980) > 0x4b
	.error "gText_Rom_24C980 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24C980) < 0x4b
	.space 0x4b - (. - gText_Rom_24C980)
	.endif
