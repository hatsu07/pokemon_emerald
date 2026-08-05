	@ src/battle_message.c:83 sText_PlayerLostToTwo
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AA9FA
gText_Rom_5AA9FA: @ 0x085AA9FA
	.string "{B_LINK_OPPONENT1_NAME}と {B_LINK_OPPONENT2_NAME}との\nしょうぶに まけた！$"
	.if (. - gText_Rom_5AA9FA) != 0x14
	.error "gText_Rom_5AA9FA must retain its original byte length"
	.endif
