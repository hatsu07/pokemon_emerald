	@ src/player_pc.c:179 sText_TooImportantToToss
	.globl gText_Rom_5C9506
gText_Rom_5C9506: @ 0x085C9506
	.string "これは とても\nたいせつなモノ なので\nすてられません!{EOS}"
	.if (. - gText_Rom_5C9506) > 0x1d
	.error "gText_Rom_5C9506 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9506) < 0x1d
	.space 0x1d - (. - gText_Rom_5C9506)
	.endif
