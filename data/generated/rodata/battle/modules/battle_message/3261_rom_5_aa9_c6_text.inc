	@ src/battle_message.c:80 sText_PlayerDefeatedLinkTrainer
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AA9C6
gText_Rom_5AA9C6: @ 0x085AA9C6
	.string "{B_LINK_OPPONENT1_NAME}との\nしょうぶに かった！$"
	.if (. - gText_Rom_5AA9C6) != 0x10
	.error "gText_Rom_5AA9C6 must retain its original byte length"
	.endif
