	@ data/maps/MtChimney/scripts.inc:618 MtChimney_Text_Grunt2Defeat (+1 aliases)
	.globl gText_Rom_215374
gText_Rom_215374: @ 0x08215374
	.string "あれー?\nオレ まけたのー!?{EOS}"
	.if (. - gText_Rom_215374) > 0x10
	.error "gText_Rom_215374 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215374) < 0x10
	.space 0x10 - (. - gText_Rom_215374)
	.endif
