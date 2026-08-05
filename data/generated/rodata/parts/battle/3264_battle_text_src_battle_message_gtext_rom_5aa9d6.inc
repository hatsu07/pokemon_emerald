	@ src/battle_message.c:81 sText_TwoLinkTrainersDefeated
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AA9D6
gText_Rom_5AA9D6: @ 0x085AA9D6
	.string "{B_LINK_OPPONENT1_NAME}と {B_LINK_OPPONENT2_NAME}との\nしょうぶに かった！$"
	.if (. - gText_Rom_5AA9D6) != 0x14
	.error "gText_Rom_5AA9D6 must retain its original byte length"
	.endif
