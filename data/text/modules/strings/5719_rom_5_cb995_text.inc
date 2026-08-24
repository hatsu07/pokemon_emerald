	@ src/strings.c:562 gText_AndMakeATrendySaying
	.globl gText_AndMakeATrendySaying
gText_AndMakeATrendySaying: @ 0x085CB995
	.string "はやらせたい ことばを つくろう!{EOS}"
	.if (. - gText_AndMakeATrendySaying) > 0x12
	.error "gText_AndMakeATrendySaying may not grow beyond its original slot"
	.endif
	.if (. - gText_AndMakeATrendySaying) < 0x12
	.space 0x12 - (. - gText_AndMakeATrendySaying)
	.endif
