	@ src/item_menu.c:223 sText_CantStoreImportantItems
	.globl gText_Rom_5C94EB
gText_Rom_5C94EB: @ 0x085C94EB
	.string "たいせつな どうぐは\nパソコンに　\nいれられません!$"
	.if (. - gText_Rom_5C94EB) > 0x1b
	.error "gText_Rom_5C94EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C94EB) < 0x1b
	.space 0x1b - (. - gText_Rom_5C94EB)
	.endif
