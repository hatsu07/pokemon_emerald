	@ asm/mauville_old_man.s:466 ScrSpecial_GenerateGiddyLine
	.globl gText_Rom_2593F0
gText_Rom_2593F0: @ 0x082593F0
	.string "　あこがれる　よねー"
	.byte EOS
	.if (. - gText_Rom_2593F0) > 0xb
	.error "gText_Rom_2593F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2593F0) < 0xb
	.space 0xb - (. - gText_Rom_2593F0)
	.endif
