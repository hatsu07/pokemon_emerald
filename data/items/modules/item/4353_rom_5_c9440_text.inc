	@ asm/item.s:165 CopyItemName
	.globl gText_Rom_5C9440
gText_Rom_5C9440: @ 0x085C9440
	.string "のみ{EOS}"
	.if (. - gText_Rom_5C9440) > 0x3
	.error "gText_Rom_5C9440 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9440) < 0x3
	.space 0x3 - (. - gText_Rom_5C9440)
	.endif
