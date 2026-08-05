	@ asm/mauville_old_man.s:466 ScrSpecial_GenerateGiddyLine
	.globl gText_Rom_259412
gText_Rom_259412: @ 0x08259412
	.string "　ふしぎ　だよねー"
	.byte EOS
	.if (. - gText_Rom_259412) > 0xa
	.error "gText_Rom_259412 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259412) < 0xa
	.space 0xa - (. - gText_Rom_259412)
	.endif
