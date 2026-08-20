	@ src/data/easy_chat/easy_chat_group_battle.h:136 easy_chat_group_battle_line_136 (+1 aliases)
	.globl gText_Rom_5CB6EC
gText_Rom_5CB6EC: @ 0x085CB6EC
	.string "さくせん{EOS}"
	.if (. - gText_Rom_5CB6EC) > 0x5
	.error "gText_Rom_5CB6EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CB6EC) < 0x5
	.space 0x5 - (. - gText_Rom_5CB6EC)
	.endif
