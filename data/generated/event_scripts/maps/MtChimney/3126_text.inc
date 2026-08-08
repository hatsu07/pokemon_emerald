	@ data/maps/MtChimney/scripts.inc:792 MtChimney_Text_MelissaDefeat (+1 aliases)
	.globl gText_Rom_215900
gText_Rom_215900: @ 0x08215900
	.string "あつい たたかい だったわ$"
	.if (. - gText_Rom_215900) > 0xe
	.error "gText_Rom_215900 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215900) < 0xe
	.space 0xe - (. - gText_Rom_215900)
	.endif
