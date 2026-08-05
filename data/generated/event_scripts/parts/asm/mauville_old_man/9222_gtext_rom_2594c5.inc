	@ asm/mauville_old_man.s:466 ScrSpecial_GenerateGiddyLine (+1 aliases)
	.globl gText_Rom_2594C5
gText_Rom_2594C5: @ 0x082594C5
	.string "ゆうやけを　みると\nウチに　かえりたく　ならない？"
	.byte EOS
	.if (. - gText_Rom_2594C5) > 0x1a
	.error "gText_Rom_2594C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2594C5) < 0x1a
	.space 0x1a - (. - gText_Rom_2594C5)
	.endif
