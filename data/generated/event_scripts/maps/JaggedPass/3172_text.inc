	@ data/maps/JaggedPass/scripts.inc:186 JaggedPass_Text_DianaRematchDefeat (+1 aliases)
	.globl gText_Rom_215E56
gText_Rom_215E56: @ 0x08215E56
	.string "まけたのは\nしたが デコボコだからよ!{EOS}"
	.if (. - gText_Rom_215E56) > 0x14
	.error "gText_Rom_215E56 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215E56) < 0x14
	.space 0x14 - (. - gText_Rom_215E56)
	.endif
