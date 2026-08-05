	@ asm/mauville_old_man.s:466 ScrSpecial_GenerateGiddyLine
	.globl gText_Rom_2593FB
gText_Rom_2593FB: @ 0x082593FB
	.string "　ドキドキ　するよねー"
	.byte EOS
	.if (. - gText_Rom_2593FB) > 0xc
	.error "gText_Rom_2593FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2593FB) < 0xc
	.space 0xc - (. - gText_Rom_2593FB)
	.endif
