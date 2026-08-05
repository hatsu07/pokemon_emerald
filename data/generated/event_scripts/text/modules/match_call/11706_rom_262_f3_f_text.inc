	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_262F3F
gText_Rom_262F3F: @ 0x08262F3F
	.string "ポケモンを　つかまえる　だけでなく\nしんか　させるのは　どうだい？$"
	.if (. - gText_Rom_262F3F) > 0x22
	.error "gText_Rom_262F3F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262F3F) < 0x22
	.space 0x22 - (. - gText_Rom_262F3F)
	.endif
