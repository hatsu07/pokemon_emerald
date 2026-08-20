	@ src/strings.c:578 gText_QuitEditing (+1 aliases)
	.globl gText_Rom_5CBA63
gText_Rom_5CBA63: @ 0x085CBA63
	.string "へんしゅうを やめますか？{EOS}"
	.if (. - gText_Rom_5CBA63) > 0xe
	.error "gText_Rom_5CBA63 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBA63) < 0xe
	.space 0xe - (. - gText_Rom_5CBA63)
	.endif
