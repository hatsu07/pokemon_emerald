	@ field-script:0x229E05 FieldScriptText_22A6FB
	.globl gText_Rom_22A6FB
gText_Rom_22A6FB: @ 0x0822A6FB
	.string "7にんぬき　たっせい　とは……\pおぬしと　ポケモンの　こころの　きずなは\nまことの　ようじゃな……{EOS}"
	.if (. - gText_Rom_22A6FB) > 0x32
	.error "gText_Rom_22A6FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_22A6FB) < 0x32
	.space 0x32 - (. - gText_Rom_22A6FB)
	.endif
