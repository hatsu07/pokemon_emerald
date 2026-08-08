	@ data/text/trainers.inc:1460 Route115_Text_KoichiPostBattle
	.globl gText_Rom_25D1E8
gText_Rom_25D1E8: @ 0x0825D1E8
	.string "おれの ワンリキー たちがッ!\pつよさを のぞむかぎり\pおれたちは どこまでも つよくなるぜッ!$"
	.if (. - gText_Rom_25D1E8) > 0x31
	.error "gText_Rom_25D1E8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D1E8) < 0x31
	.space 0x31 - (. - gText_Rom_25D1E8)
	.endif
