	@ src/strings.c:591 gText_ThatsTrendyAlready
	.globl gText_Rom_5CBB3E
gText_Rom_5CBB3E: @ 0x085CBB3E
	.string "それは もう はやっています！$"
	.if (. - gText_Rom_5CBB3E) > 0x10
	.error "gText_Rom_5CBB3E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBB3E) < 0x10
	.space 0x10 - (. - gText_Rom_5CBB3E)
	.endif
