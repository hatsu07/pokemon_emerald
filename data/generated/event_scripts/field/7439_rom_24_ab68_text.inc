	@ field-script:0x206F3A FieldScriptText_24AB68
	.globl gText_Rom_24AB68
gText_Rom_24AB68: @ 0x0824AB68
	.string "どの　モードで\nコンテストに　さんかしますか？$"
	.if (. - gText_Rom_24AB68) > 0x18
	.error "gText_Rom_24AB68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24AB68) < 0x18
	.space 0x18 - (. - gText_Rom_24AB68)
	.endif
