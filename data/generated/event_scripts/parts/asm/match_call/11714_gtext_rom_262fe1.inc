	@ asm/match_call.s:2551 sub_08196C74 (+1 aliases)
	.globl gText_Rom_262FE1
gText_Rom_262FE1: @ 0x08262FE1
	.string "とうとう　100しゅるい　こえたのか！\nポケモンずかん　として　みごとな　もんだね！$"
	.if (. - gText_Rom_262FE1) > 0x2b
	.error "gText_Rom_262FE1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_262FE1) < 0x2b
	.space 0x2b - (. - gText_Rom_262FE1)
	.endif
