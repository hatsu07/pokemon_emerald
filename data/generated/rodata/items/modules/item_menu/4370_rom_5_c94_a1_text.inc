	@ src/item_menu.c:219 sText_Var1CantBeHeldHere
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C94A1
gText_Rom_5C94A1: @ 0x085C94A1
	.string "ここでは {STR_VAR_1}を\nもたせることは できません!$"
	.if (. - gText_Rom_5C94A1) != 0x18
	.error "gText_Rom_5C94A1 must retain its original byte length"
	.endif
