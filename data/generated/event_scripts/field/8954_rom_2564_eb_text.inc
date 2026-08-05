	@ field-script:0x254E31 FieldScriptText_2564EB
	.globl gText_Rom_2564EB
gText_Rom_2564EB: @ 0x082564EB
	.string "ありがとう！\nじゃあ　うたって　みるぞ！"
	.byte EOS
	.if (. - gText_Rom_2564EB) > 0x15
	.error "gText_Rom_2564EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2564EB) < 0x15
	.space 0x15 - (. - gText_Rom_2564EB)
	.endif
