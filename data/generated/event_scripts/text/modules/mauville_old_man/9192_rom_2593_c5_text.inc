	@ asm/mauville_old_man.s:466 ScrSpecial_GenerateGiddyLine
	.globl gText_Rom_2593C5
gText_Rom_2593C5: @ 0x082593C5
	.string "　きれい　だよねー"
	.byte EOS
	.if (. - gText_Rom_2593C5) > 0xa
	.error "gText_Rom_2593C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2593C5) < 0xa
	.space 0xa - (. - gText_Rom_2593C5)
	.endif
