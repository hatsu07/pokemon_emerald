	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_2521A5
gText_Rom_2521A5: @ 0x082521A5
	.string "すべりだいの　はしごを　のぼりました！\p……そして\pもどったー！\pハシゴを　おりて　ひきかえしました！\pこわくなった　のでしょうか？$"
	.if (. - gText_Rom_2521A5) > 0x43
	.error "gText_Rom_2521A5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2521A5) < 0x43
	.space 0x43 - (. - gText_Rom_2521A5)
	.endif
