	@ data/text/trainers.inc:281 Route104_Text_CindyRegister2
	.globl gText_Rom_25A1E5
gText_Rom_25A1E5: @ 0x0825A1E5
	.string "この ごえんを きねんして\nポケナビに とうろく して くださいませ{EOS}"
	.if (. - gText_Rom_25A1E5) > 0x23
	.error "gText_Rom_25A1E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25A1E5) < 0x23
	.space 0x23 - (. - gText_Rom_25A1E5)
	.endif
