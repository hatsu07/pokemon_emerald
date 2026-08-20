	@ field-script:0x2229EB FieldScriptText_222BCC
	.globl gText_Rom_222BCC
gText_Rom_222BCC: @ 0x08222BCC
	.string "ここは　バトルパレス！\nみまもれ！　ポケモンバトル！{EOS}"
	.if (. - gText_Rom_222BCC) > 0x1b
	.error "gText_Rom_222BCC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_222BCC) < 0x1b
	.space 0x1b - (. - gText_Rom_222BCC)
	.endif
