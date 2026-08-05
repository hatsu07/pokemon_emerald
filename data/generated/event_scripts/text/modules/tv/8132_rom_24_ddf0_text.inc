	@ asm/tv.s:12494 DoTVShowPokemonFanClubLetter (+8 aliases)
	.globl gText_Rom_24DDF0
gText_Rom_24DDF0: @ 0x0824DDF0
	.string "では　また　おあいしましょう！\nあいことばは　『ポロック　バンザイ！』$"
	.if (. - gText_Rom_24DDF0) > 0x24
	.error "gText_Rom_24DDF0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24DDF0) < 0x24
	.space 0x24 - (. - gText_Rom_24DDF0)
	.endif
