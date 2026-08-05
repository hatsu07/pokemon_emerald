	@ asm/mauville_old_man.s:466 ScrSpecial_GenerateGiddyLine
	.globl gText_Rom_2593CF
gText_Rom_2593CF: @ 0x082593CF
	.string "　かわいい　よねー"
	.byte EOS
	.if (. - gText_Rom_2593CF) > 0xa
	.error "gText_Rom_2593CF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2593CF) < 0xa
	.space 0xa - (. - gText_Rom_2593CF)
	.endif
