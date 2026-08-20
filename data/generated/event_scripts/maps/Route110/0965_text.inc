	@ data/maps/Route110/scripts.inc:764 Route110_Text_MayDefeated (+1 aliases)
	.globl gText_Rom_1E9809
gText_Rom_1E9809: @ 0x081E9809
	.string "あっちゃー!\nおもってたより つよいよ!{EOS}"
	.if (. - gText_Rom_1E9809) > 0x15
	.error "gText_Rom_1E9809 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E9809) < 0x15
	.space 0x15 - (. - gText_Rom_1E9809)
	.endif
