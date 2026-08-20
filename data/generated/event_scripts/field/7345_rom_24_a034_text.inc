	@ field-script:0x248DA9 FieldScriptText_24A034
	.globl gText_Rom_24A034
gText_Rom_24A034: @ 0x0824A034
	.string "そちらの　ポケモンは　げんきがない\nようなので　しゅつじょう　できないです……{EOS}"
	.if (. - gText_Rom_24A034) > 0x28
	.error "gText_Rom_24A034 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A034) < 0x28
	.space 0x28 - (. - gText_Rom_24A034)
	.endif
