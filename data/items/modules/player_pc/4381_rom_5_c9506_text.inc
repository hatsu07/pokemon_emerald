	@ src/player_pc.c:179 sText_TooImportantToToss
	.globl sText_TooImportantToToss
sText_TooImportantToToss: @ 0x085C9506
	.string "これは とても\nたいせつなモノ なので\nすてられません!{EOS}"
	.if (. - sText_TooImportantToToss) > 0x1d
	.error "sText_TooImportantToToss may not grow beyond its original slot"
	.endif
	.if (. - sText_TooImportantToToss) < 0x1d
	.space 0x1d - (. - sText_TooImportantToToss)
	.endif
