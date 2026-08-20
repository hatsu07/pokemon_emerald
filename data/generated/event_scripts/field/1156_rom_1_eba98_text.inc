	@ field-script:0x1EB86B FieldScriptText_1EBA98
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_1EBA98
gText_Rom_1EBA98: @ 0x081EBA98
	.string "ここは　りゅうせいのたき\nとおりぬけると　ハジツゲタウン{EOS}"
	.if (. - gText_Rom_1EBA98) != 0x1d
	.error "gText_Rom_1EBA98 must retain its original byte length"
	.endif
