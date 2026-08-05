	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_2521E8
gText_Rom_2521E8: @ 0x082521E8
	.string "ジャンプマットに　のったー！\pジャンプを　1かい！\pジャンプを　2かい！\pちゃくち　せいこう！\p……ひとりで　じぶんに\nはくしゅを　おくっています$"
	.if (. - gText_Rom_2521E8) > 0x4a
	.error "gText_Rom_2521E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2521E8) < 0x4a
	.space 0x4a - (. - gText_Rom_2521E8)
	.endif
