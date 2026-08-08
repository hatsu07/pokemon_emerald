	@ field-script:0x25630F FieldScriptText_2551E6
	.globl gText_Rom_2551E6
gText_Rom_2551E6: @ 0x082551E6
	.string "でも　わし……\nでんせつの　トレーナーの　はなし\lなにも　しらない\pどこかに　でんせつに　のこる\nトレーナーは　いないかなあ"
	.byte EOS
	.if (. - gText_Rom_2551E6) > 0x3f
	.error "gText_Rom_2551E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2551E6) < 0x3f
	.space 0x3f - (. - gText_Rom_2551E6)
	.endif
