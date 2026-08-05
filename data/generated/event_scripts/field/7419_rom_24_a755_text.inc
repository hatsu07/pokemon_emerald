	@ field-script:0x206F9D FieldScriptText_24A755
	.globl gText_Rom_24A755
gText_Rom_24A755: @ 0x0824A755
	.string "どの　コンテストに　さんか　しますか？$"
	.if (. - gText_Rom_24A755) > 0x14
	.error "gText_Rom_24A755 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_24A755) < 0x14
	.space 0x14 - (. - gText_Rom_24A755)
	.endif
