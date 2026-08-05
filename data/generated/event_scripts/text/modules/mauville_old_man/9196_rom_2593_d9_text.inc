	@ asm/mauville_old_man.s:466 ScrSpecial_GenerateGiddyLine
	.globl gText_Rom_2593D9
gText_Rom_2593D9: @ 0x082593D9
	.string "　のんびり　だよねー"
	.byte EOS
	.if (. - gText_Rom_2593D9) > 0xb
	.error "gText_Rom_2593D9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2593D9) < 0xb
	.space 0xb - (. - gText_Rom_2593D9)
	.endif
