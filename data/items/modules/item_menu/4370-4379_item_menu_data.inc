	@ src/item_menu.c:219 sText_Var1CantBeHeldHere
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C94A1
gText_Rom_5C94A1: @ 0x085C94A1
	.string "ここでは {STR_VAR_1}を\nもたせることは できません!{EOS}"
	.if (. - gText_Rom_5C94A1) != 0x18
	.error "gText_Rom_5C94A1 must retain its original byte length"
	.endif
	.globl gText_Rom_5C94A6
	.set gText_Rom_5C94A6, gText_Rom_5C94A1 + 0x5

	@ src/item_menu.c:220 sText_DepositHowManyVar1
	.globl gText_Rom_5C94B9
gText_Rom_5C94B9: @ 0x085C94B9
	.string "{STR_VAR_1} を\nいくつ あずけますか?{EOS}"
	.if (. - gText_Rom_5C94B9) > 0x11
	.error "gText_Rom_5C94B9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C94B9) < 0x11
	.space 0x11 - (. - gText_Rom_5C94B9)
	.endif

	@ src/item_menu.c:221 sText_DepositedVar2Var1s
	.globl gText_Rom_5C94CA
gText_Rom_5C94CA: @ 0x085C94CA
	.string "{STR_VAR_1} を\n{STR_VAR_2}コ　あずけました{EOS}"
	.if (. - gText_Rom_5C94CA) > 0x10
	.error "gText_Rom_5C94CA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C94CA) < 0x10
	.space 0x10 - (. - gText_Rom_5C94CA)
	.endif

	@ src/item_menu.c:222 sText_NoRoomForItems
	.globl gText_Rom_5C94DA
gText_Rom_5C94DA: @ 0x085C94DA
	.string "これいじょう\nあずけられません!{EOS}"
	.if (. - gText_Rom_5C94DA) > 0x11
	.error "gText_Rom_5C94DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C94DA) < 0x11
	.space 0x11 - (. - gText_Rom_5C94DA)
	.endif

	@ src/item_menu.c:223 sText_CantStoreImportantItems
	.globl gText_Rom_5C94EB
gText_Rom_5C94EB: @ 0x085C94EB
	.string "たいせつな どうぐは\nパソコンに　\nいれられません!{EOS}"
	.if (. - gText_Rom_5C94EB) > 0x1b
	.error "gText_Rom_5C94EB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C94EB) < 0x1b
	.space 0x1b - (. - gText_Rom_5C94EB)
	.endif
