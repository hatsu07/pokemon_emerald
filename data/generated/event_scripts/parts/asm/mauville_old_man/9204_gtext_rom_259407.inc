	@ asm/mauville_old_man.s:466 ScrSpecial_GenerateGiddyLine
	.globl gText_Rom_259407
gText_Rom_259407: @ 0x08259407
	.string "　おもしろい　よねー"
	.byte EOS
	.if (. - gText_Rom_259407) > 0xb
	.error "gText_Rom_259407 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_259407) < 0xb
	.space 0xb - (. - gText_Rom_259407)
	.endif
