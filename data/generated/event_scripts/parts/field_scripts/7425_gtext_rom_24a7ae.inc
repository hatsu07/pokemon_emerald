	@ field-script:0x20704E FieldScriptText_24A7AE
	.globl gText_Rom_24A7AE
gText_Rom_24A7AE: @ 0x0824A7AE
	.string "どの　ポケモンを　さんか　させますか？$"
	.if (. - gText_Rom_24A7AE) > 0x14
	.error "gText_Rom_24A7AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A7AE) < 0x14
	.space 0x14 - (. - gText_Rom_24A7AE)
	.endif
