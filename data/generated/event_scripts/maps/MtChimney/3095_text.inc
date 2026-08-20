	@ data/maps/MtChimney/scripts.inc:726 MtChimney_Text_OhFineThen
	.globl gText_Rom_215741
gText_Rom_215741: @ 0x08215741
	.string "あら そうかい{EOS}"
	.if (. - gText_Rom_215741) > 0x8
	.error "gText_Rom_215741 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215741) < 0x8
	.space 0x8 - (. - gText_Rom_215741)
	.endif
