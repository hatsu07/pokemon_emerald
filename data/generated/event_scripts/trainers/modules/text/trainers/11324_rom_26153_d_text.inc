	@ data/text/trainers.inc:3065 Route129_Text_ChaseDefeat (+1 aliases)
	.globl gText_Rom_26153D
gText_Rom_26153D: @ 0x0826153D
	.string "うおー!\nまけてしまったーっ!{EOS}"
	.if (. - gText_Rom_26153D) > 0x10
	.error "gText_Rom_26153D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_26153D) < 0x10
	.space 0x10 - (. - gText_Rom_26153D)
	.endif
