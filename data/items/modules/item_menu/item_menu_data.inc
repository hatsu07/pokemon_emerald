.if .L__inc_fragment_select_b2b203830043 == 1

	@ src/item_menu.c:219 sText_Var1CantBeHeldHere
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sText_Var1CantBeHeldHere
sText_Var1CantBeHeldHere: @ 0x085C94A1
	.string "ここでは {STR_VAR_1}を\nもたせることは できません!{EOS}"
	.if (. - sText_Var1CantBeHeldHere) != 0x18
	.error "sText_Var1CantBeHeldHere must retain its original byte length"
	.endif

	@ src/item_menu.c:220 sText_DepositHowManyVar1
	.globl sText_DepositHowManyVar1
sText_DepositHowManyVar1: @ 0x085C94B9
	.string "{STR_VAR_1} を\nいくつ あずけますか?{EOS}"
	.if (. - sText_DepositHowManyVar1) > 0x11
	.error "sText_DepositHowManyVar1 may not grow beyond its original slot"
	.endif
	.if (. - sText_DepositHowManyVar1) < 0x11
	.space 0x11 - (. - sText_DepositHowManyVar1)
	.endif

	@ src/item_menu.c:221 sText_DepositedVar2Var1s
	.globl sText_DepositedVar2Var1s
sText_DepositedVar2Var1s: @ 0x085C94CA
	.string "{STR_VAR_1} を\n{STR_VAR_2}コ　あずけました{EOS}"
	.if (. - sText_DepositedVar2Var1s) > 0x10
	.error "sText_DepositedVar2Var1s may not grow beyond its original slot"
	.endif
	.if (. - sText_DepositedVar2Var1s) < 0x10
	.space 0x10 - (. - sText_DepositedVar2Var1s)
	.endif

	@ src/item_menu.c:222 sText_NoRoomForItems
	.globl sText_NoRoomForItems
sText_NoRoomForItems: @ 0x085C94DA
	.string "これいじょう\nあずけられません!{EOS}"
	.if (. - sText_NoRoomForItems) > 0x11
	.error "sText_NoRoomForItems may not grow beyond its original slot"
	.endif
	.if (. - sText_NoRoomForItems) < 0x11
	.space 0x11 - (. - sText_NoRoomForItems)
	.endif

	@ src/item_menu.c:223 sText_CantStoreImportantItems
	.globl sText_CantStoreImportantItems
sText_CantStoreImportantItems: @ 0x085C94EB
	.string "たいせつな どうぐは\nパソコンに　\nいれられません!{EOS}"
	.if (. - sText_CantStoreImportantItems) > 0x1b
	.error "sText_CantStoreImportantItems may not grow beyond its original slot"
	.endif
	.if (. - sText_CantStoreImportantItems) < 0x1b
	.space 0x1b - (. - sText_CantStoreImportantItems)
	.endif
.elseif .L__inc_fragment_select_b2b203830043 == 2
	@ asm/item_menu.s:1407 BagMenu_PrintDescription (+2 aliases)
	.globl gText_Rom_5C96DB
gText_Rom_5C96DB: @ 0x085C96DB
	.string "フィールド{EOS}"
	.if (. - gText_Rom_5C96DB) > 0x6
	.error "gText_Rom_5C96DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C96DB) < 0x6
	.space 0x6 - (. - gText_Rom_5C96DB)
	.endif

	@ asm/item_menu.s:1407 BagMenu_PrintDescription (+2 aliases)
	.globl gText_Rom_5C96E1
gText_Rom_5C96E1: @ 0x085C96E1
	.string "せんとう{EOS}"
	.if (. - gText_Rom_5C96E1) > 0x5
	.error "gText_Rom_5C96E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C96E1) < 0x5
	.space 0x5 - (. - gText_Rom_5C96E1)
	.endif

	@ asm/item_menu.s:1407 BagMenu_PrintDescription (+2 aliases)
	.globl gText_Rom_5C96E6
gText_Rom_5C96E6: @ 0x085C96E6
	.string "ポケモンリスト{EOS}"
	.if (. - gText_Rom_5C96E6) > 0x8
	.error "gText_Rom_5C96E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C96E6) < 0x8
	.space 0x8 - (. - gText_Rom_5C96E6)
	.endif

	@ asm/item_menu.s:1407 BagMenu_PrintDescription (+1 aliases)
	.globl gText_Rom_5C96EE
gText_Rom_5C96EE: @ 0x085C96EE
	.string "ショップ{EOS}"
	.if (. - gText_Rom_5C96EE) > 0x5
	.error "gText_Rom_5C96EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C96EE) < 0x5
	.space 0x5 - (. - gText_Rom_5C96EE)
	.endif

	@ asm/item_menu.s:1407 BagMenu_PrintDescription (+2 aliases)
	.globl gText_Rom_5C96F3
gText_Rom_5C96F3: @ 0x085C96F3
	.string "パソコン{EOS}"
	.if (. - gText_Rom_5C96F3) > 0x5
	.error "gText_Rom_5C96F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C96F3) < 0x5
	.space 0x5 - (. - gText_Rom_5C96F3)
	.endif
.endif
