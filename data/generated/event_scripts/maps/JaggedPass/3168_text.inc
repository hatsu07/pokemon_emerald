	@ data/maps/JaggedPass/scripts.inc:178 JaggedPass_Text_DianaRegister
	.globl gText_Rom_215E0A
gText_Rom_215E0A: @ 0x08215E0A
	.string "また ここに くることって あるかな?\nそしたら わたしと しょうぶしてね!{EOS}"
	.if (. - gText_Rom_215E0A) > 0x27
	.error "gText_Rom_215E0A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215E0A) < 0x27
	.space 0x27 - (. - gText_Rom_215E0A)
	.endif
