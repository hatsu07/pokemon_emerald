	@ src/strings.c:578 gText_QuitEditing (+1 aliases)
	.globl gText_Rom_5CBAC6
gText_Rom_5CBAC6: @ 0x085CBAC6
	.string "へんしゅうを やめますか？{EOS}"
	.if (. - gText_Rom_5CBAC6) > 0xe
	.error "gText_Rom_5CBAC6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBAC6) < 0xe
	.space 0xe - (. - gText_Rom_5CBAC6)
	.endif
