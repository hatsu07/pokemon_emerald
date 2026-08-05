	@ src/strings.c:99 gText_DexSearchColorGray
	.globl gText_Rom_5C919B
gText_Rom_5C919B: @ 0x085C919B
	.string "はいいろ$"
	.if (. - gText_Rom_5C919B) > 0x5
	.error "gText_Rom_5C919B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C919B) < 0x5
	.space 0x5 - (. - gText_Rom_5C919B)
	.endif
	@ Decoded text from ROM range: offset=0x5C91A0, size=0x3
	.string "しろ$"
