	@ field-script:0x25789F FieldScriptText_257CEB
	.globl gText_Rom_257CEB
gText_Rom_257CEB: @ 0x08257CEB
	.string "2ひき　までなら　あずかれるけど\nもう　1ぴき　そだててみるかい？"
	.byte EOS
	.if (. - gText_Rom_257CEB) > 0x22
	.error "gText_Rom_257CEB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_257CEB) < 0x22
	.space 0x22 - (. - gText_Rom_257CEB)
	.endif
