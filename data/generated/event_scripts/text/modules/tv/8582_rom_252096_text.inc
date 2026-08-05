	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_252096
gText_Rom_252096: @ 0x08252096
	.string "きらきらマットに　のったー！\pいろんな　ポーズを　きめています！\pきぶんは　アイドル　でしょうか？$"
	.if (. - gText_Rom_252096) > 0x32
	.error "gText_Rom_252096 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_252096) < 0x32
	.space 0x32 - (. - gText_Rom_252096)
	.endif
