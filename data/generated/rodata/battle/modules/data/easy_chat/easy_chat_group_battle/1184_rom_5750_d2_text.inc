	@ src/data/easy_chat/easy_chat_group_battle.h:178 easy_chat_group_battle_line_178
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5750D2
gText_Rom_5750D2: @ 0x085750D2
	.string "たたかい$"
	.if (. - gText_Rom_5750D2) != 0x5
	.error "gText_Rom_5750D2 must retain its original byte length"
	.endif
