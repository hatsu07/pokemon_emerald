	@ data/text/trainers.inc:2747 Route125_Text_ErnestDefeat (+1 aliases)
	.globl gText_Rom_260866
gText_Rom_260866: @ 0x08260866
	.string "ぐおおおーっ!\nかてねえ……!{EOS}"
	.if (. - gText_Rom_260866) > 0x10
	.error "gText_Rom_260866 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_260866) < 0x10
	.space 0x10 - (. - gText_Rom_260866)
	.endif
