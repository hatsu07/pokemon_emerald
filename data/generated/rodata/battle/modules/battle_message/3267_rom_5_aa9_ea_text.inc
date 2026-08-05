	@ src/battle_message.c:82 sText_PlayerLostAgainstLinkTrainer
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5AA9EA
gText_Rom_5AA9EA: @ 0x085AA9EA
	.string "{B_LINK_OPPONENT1_NAME}との\nしょうぶに まけた！$"
	.if (. - gText_Rom_5AA9EA) != 0x10
	.error "gText_Rom_5AA9EA must retain its original byte length"
	.endif
