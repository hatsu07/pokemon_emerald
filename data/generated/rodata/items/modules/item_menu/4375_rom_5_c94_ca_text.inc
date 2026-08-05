	@ src/item_menu.c:221 sText_DepositedVar2Var1s
	.globl gText_Rom_5C94CA
gText_Rom_5C94CA: @ 0x085C94CA
	.string "{STR_VAR_1} を\n{STR_VAR_2}コ　あずけました$"
	.if (. - gText_Rom_5C94CA) > 0x10
	.error "gText_Rom_5C94CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C94CA) < 0x10
	.space 0x10 - (. - gText_Rom_5C94CA)
	.endif
