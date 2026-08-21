	@ src/strings.c:562 gText_AndMakeATrendySaying
	.globl gText_Rom_5CB995
gText_Rom_5CB995: @ 0x085CB995
	.string "はやらせたい ことばを つくろう!{EOS}"
	.if (. - gText_Rom_5CB995) > 0x12
	.error "gText_Rom_5CB995 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB995) < 0x12
	.space 0x12 - (. - gText_Rom_5CB995)
	.endif
