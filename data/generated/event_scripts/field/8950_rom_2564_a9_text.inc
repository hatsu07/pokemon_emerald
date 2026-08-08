	@ field-script:0x254DFB FieldScriptText_2564A9
	.globl gText_Rom_2564A9
gText_Rom_2564A9: @ 0x082564A9
	.string "どう？　わしの　うた？\pでも　ちょっと　かしが　きにいらない\pだから　きみ　ちょっと　かえてくれる？"
	.byte EOS
	.if (. - gText_Rom_2564A9) > 0x33
	.error "gText_Rom_2564A9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2564A9) < 0x33
	.space 0x33 - (. - gText_Rom_2564A9)
	.endif
