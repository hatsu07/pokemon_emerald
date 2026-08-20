	@ data/text/trainers.inc:2006 Route119_Text_JacksonRematchDefeat (+1 aliases)
	.globl gText_Rom_25E95D
gText_Rom_25E95D: @ 0x0825E95D
	.string "あいかわらず つよいな!{EOS}"
	.if (. - gText_Rom_25E95D) > 0xd
	.error "gText_Rom_25E95D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25E95D) < 0xd
	.space 0xd - (. - gText_Rom_25E95D)
	.endif
