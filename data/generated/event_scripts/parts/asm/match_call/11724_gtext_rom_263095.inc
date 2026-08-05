	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_263095
gText_Rom_263095: @ 0x08263095
	.string "ときどき　たいりょうはっせい　する\nポケモンが　いるらしい\lその　チャンスを　のがさないようにな！$"
	.if (. - gText_Rom_263095) > 0x32
	.error "gText_Rom_263095 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_263095) < 0x32
	.space 0x32 - (. - gText_Rom_263095)
	.endif
