	@ field-script:0x2070BE FieldScriptText_24A769
	.globl gText_Rom_24A769
gText_Rom_24A769: @ 0x0824A769
	.string "そちらの　ポケモンは　げんきがない\nようなので　しゅつじょう　できないです…$"
	.if (. - gText_Rom_24A769) > 0x27
	.error "gText_Rom_24A769 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A769) < 0x27
	.space 0x27 - (. - gText_Rom_24A769)
	.endif
