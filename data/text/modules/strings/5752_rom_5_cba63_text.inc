	@ src/strings.c:578 gText_QuitEditing (+1 aliases)
	.globl gText_QuitEditing
gText_QuitEditing: @ 0x085CBA63
	.string "へんしゅうを やめますか？{EOS}"
	.if (. - gText_QuitEditing) > 0xe
	.error "gText_QuitEditing may not grow beyond its original slot"
	.endif
	.if (. - gText_QuitEditing) < 0xe
	.space 0xe - (. - gText_QuitEditing)
	.endif
