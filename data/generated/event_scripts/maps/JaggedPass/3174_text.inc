	@ data/maps/JaggedPass/scripts.inc:190 JaggedPass_Text_DianaPostRematch
	.globl gText_Rom_215E6A
gText_Rom_215E6A: @ 0x08215E6A
	.string "まけたことは さっさと わすれて\nこの デコボコみちを たのしんじゃお!{EOS}"
	.if (. - gText_Rom_215E6A) > 0x25
	.error "gText_Rom_215E6A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215E6A) < 0x25
	.space 0x25 - (. - gText_Rom_215E6A)
	.endif
