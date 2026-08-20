	@ data/maps/JaggedPass/scripts.inc:211 JaggedPass_Text_EthanRematchIntro (+1 aliases)
	.globl gText_Rom_215F2E
gText_Rom_215F2E: @ 0x08215F2E
	.string "デコボコに なれちゃったから\nちかごろだと うたいながら のぼるのさ!{EOS}"
	.if (. - gText_Rom_215F2E) > 0x24
	.error "gText_Rom_215F2E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215F2E) < 0x24
	.space 0x24 - (. - gText_Rom_215F2E)
	.endif
