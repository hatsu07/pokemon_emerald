	@ asm/mauville_old_man.s:466 ScrSpecial_GenerateGiddyLine (+1 aliases)
	.globl gText_Rom_2594DF
gText_Rom_2594DF: @ 0x082594DF
	.string "みどりの　しばで　ねころがると\nきもちいいよねー"
	.byte EOS
	.if (. - gText_Rom_2594DF) > 0x19
	.error "gText_Rom_2594DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2594DF) < 0x19
	.space 0x19 - (. - gText_Rom_2594DF)
	.endif
