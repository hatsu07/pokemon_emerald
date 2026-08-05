	@ src/berry_tag_screen.c:181 sText_BerryTag
	.globl gText_Rom_5C97BD
gText_Rom_5C97BD: @ 0x085C97BD
	.string "きのみのタグ$"
	.if (. - gText_Rom_5C97BD) > 0x7
	.error "gText_Rom_5C97BD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C97BD) < 0x7
	.space 0x7 - (. - gText_Rom_5C97BD)
	.endif

