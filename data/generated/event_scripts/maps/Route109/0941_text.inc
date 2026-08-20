	@ data/maps/Route109/scripts.inc:506 Route109_Text_SandCastleTakingLongTime
	.globl gText_Rom_1E8CC7
gText_Rom_1E8CC7: @ 0x081E8CC7
	.string "なかなか すなの おしろ できないね{EOS}"
	.if (. - gText_Rom_1E8CC7) > 0x13
	.error "gText_Rom_1E8CC7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E8CC7) < 0x13
	.space 0x13 - (. - gText_Rom_1E8CC7)
	.endif
