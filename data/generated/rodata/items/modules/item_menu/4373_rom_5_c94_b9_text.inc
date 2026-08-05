	@ src/item_menu.c:220 sText_DepositHowManyVar1
	.globl gText_Rom_5C94B9
gText_Rom_5C94B9: @ 0x085C94B9
	.string "{STR_VAR_1} を\nいくつ あずけますか?$"
	.if (. - gText_Rom_5C94B9) > 0x11
	.error "gText_Rom_5C94B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C94B9) < 0x11
	.space 0x11 - (. - gText_Rom_5C94B9)
	.endif
