	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+9 aliases)
	.globl gText_Rom_24CF5D
gText_Rom_24CF5D: @ 0x0824CF5D
	.string "ブラボー！　{0xFD}{0x02}\nブラボー！！　{0xFD}{0x03}\pこんごの　{0xFD}{0x02}さんの　かつやくに\nきたい　したいねぇ！\pそれじゃあ　また　じかいの\nほうそうで　あいましょー！$"
	.if (. - gText_Rom_24CF5D) > 0x4b
	.error "gText_Rom_24CF5D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24CF5D) < 0x4b
	.space 0x4b - (. - gText_Rom_24CF5D)
	.endif
