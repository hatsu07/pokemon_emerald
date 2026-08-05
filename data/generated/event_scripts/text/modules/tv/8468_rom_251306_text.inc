	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+28 aliases)
	.globl gText_Rom_251306
gText_Rom_251306: @ 0x08251306
	.string "バトルドーム\nダブル　バトルトーナメントに\lちょうせんした　{0xFD}{0x02}さんが\l{0xFD}{0x03}　れんぱで\lきろくを　こうしん　しました！\p……{0xFD}{0x02}さん！$"
	.if (. - gText_Rom_251306) > 0x44
	.error "gText_Rom_251306 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251306) < 0x44
	.space 0x44 - (. - gText_Rom_251306)
	.endif
