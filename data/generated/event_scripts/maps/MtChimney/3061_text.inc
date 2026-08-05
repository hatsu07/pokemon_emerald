	@ data/maps/MtChimney/scripts.inc:640 MtChimney_Text_TeamAquaAlwaysMessingWithPlans
	.globl gText_Rom_215428
gText_Rom_215428: @ 0x08215428
	.string "アクアだんの やつらめ……\nいちいち オレたちの じゃまを しやがって!$"
	.if (. - gText_Rom_215428) > 0x25
	.error "gText_Rom_215428 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215428) < 0x25
	.space 0x25 - (. - gText_Rom_215428)
	.endif
