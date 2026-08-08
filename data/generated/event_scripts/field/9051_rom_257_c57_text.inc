	@ field-script:0x25772B FieldScriptText_257C57
	.globl gText_Rom_257C57
gText_Rom_257C57: @ 0x08257C57
	.string "わしが　もらってしまうぞ\nほんとうは　ほしいんじゃろ？"
	.byte EOS
	.if (. - gText_Rom_257C57) > 0x1c
	.error "gText_Rom_257C57 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257C57) < 0x1c
	.space 0x1c - (. - gText_Rom_257C57)
	.endif
