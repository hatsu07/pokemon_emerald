	@ data/maps/JaggedPass/scripts.inc:169 JaggedPass_Text_DianaDefeat (+1 aliases)
	.globl gText_Rom_215DC8
gText_Rom_215DC8: @ 0x08215DC8
	.string "あーん もう!\nしたが デコボコだから……{EOS}"
	.if (. - gText_Rom_215DC8) > 0x16
	.error "gText_Rom_215DC8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215DC8) < 0x16
	.space 0x16 - (. - gText_Rom_215DC8)
	.endif
