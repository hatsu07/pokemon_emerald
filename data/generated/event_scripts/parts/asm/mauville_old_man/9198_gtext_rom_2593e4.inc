	@ asm/mauville_old_man.s:466 ScrSpecial_GenerateGiddyLine
	.globl gText_Rom_2593E4
gText_Rom_2593E4: @ 0x082593E4
	.string "　ぽっかぽか　だよねー"
	.byte EOS
	.if (. - gText_Rom_2593E4) > 0xc
	.error "gText_Rom_2593E4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2593E4) < 0xc
	.space 0xc - (. - gText_Rom_2593E4)
	.endif
