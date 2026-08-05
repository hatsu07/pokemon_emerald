	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+30 aliases)
	.globl gText_Rom_251D12
gText_Rom_251D12: @ 0x08251D12
	.string "どろだんごを　ふみつけましたー！\pとっても　うれしそうです$"
	.if (. - gText_Rom_251D12) > 0x1e
	.error "gText_Rom_251D12 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_251D12) < 0x1e
	.space 0x1e - (. - gText_Rom_251D12)
	.endif
