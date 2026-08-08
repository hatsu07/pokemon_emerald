	@ src/data/easy_chat/easy_chat_group_battle.h:130 easy_chat_group_battle_line_130
	.globl gText_Rom_5750AE
gText_Rom_5750AE: @ 0x085750AE
	.string "さいのう$"
	.if (. - gText_Rom_5750AE) > 0x5
	.error "gText_Rom_5750AE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750AE) < 0x5
	.space 0x5 - (. - gText_Rom_5750AE)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:136 easy_chat_group_battle_line_136 (+1 aliases)
	.globl gText_Rom_5750B3
gText_Rom_5750B3: @ 0x085750B3
	.string "さくせん$"
	.if (. - gText_Rom_5750B3) > 0x5
	.error "gText_Rom_5750B3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750B3) < 0x5
	.space 0x5 - (. - gText_Rom_5750B3)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:142 easy_chat_group_battle_line_142
	.globl gText_Rom_5750B8
gText_Rom_5750B8: @ 0x085750B8
	.string "さばき$"
	.if (. - gText_Rom_5750B8) > 0x4
	.error "gText_Rom_5750B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750B8) < 0x4
	.space 0x4 - (. - gText_Rom_5750B8)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:148 easy_chat_group_battle_line_148
	.globl gText_Rom_5750BC
gText_Rom_5750BC: @ 0x085750BC
	.string "しょうぶ$"
	.if (. - gText_Rom_5750BC) > 0x5
	.error "gText_Rom_5750BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750BC) < 0x5
	.space 0x5 - (. - gText_Rom_5750BC)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:154 easy_chat_group_battle_line_154 (+1 aliases)
	.globl gText_Rom_5750C1
gText_Rom_5750C1: @ 0x085750C1
	.string "しょうり$"
	.if (. - gText_Rom_5750C1) > 0x5
	.error "gText_Rom_5750C1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750C1) < 0x5
	.space 0x5 - (. - gText_Rom_5750C1)
	.endif
	@ Decoded text from ROM range: offset=0x5750C6, size=0x3
	.string "せめ$"

	@ src/data/easy_chat/easy_chat_group_battle.h:166 easy_chat_group_battle_line_166
	.globl gText_Rom_5750C9
gText_Rom_5750C9: @ 0x085750C9
	.string "センス$"
	.if (. - gText_Rom_5750C9) > 0x4
	.error "gText_Rom_5750C9 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750C9) < 0x4
	.space 0x4 - (. - gText_Rom_5750C9)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:172 easy_chat_group_battle_line_172 (+1 aliases)
	.globl gText_Rom_5750CD
gText_Rom_5750CD: @ 0x085750CD
	.string "たいせん$"
	.if (. - gText_Rom_5750CD) > 0x5
	.error "gText_Rom_5750CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750CD) < 0x5
	.space 0x5 - (. - gText_Rom_5750CD)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:178 easy_chat_group_battle_line_178
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5750D2
gText_Rom_5750D2: @ 0x085750D2
	.string "たたかい$"
	.if (. - gText_Rom_5750D2) != 0x5
	.error "gText_Rom_5750D2 must retain its original byte length"
	.endif
	.globl gText_Rom_5750D3
	.set gText_Rom_5750D3, gText_Rom_5750D2 + 0x1

	@ src/data/easy_chat/easy_chat_group_battle.h:184 easy_chat_group_battle_line_184
	.globl gText_Rom_5750D7
gText_Rom_5750D7: @ 0x085750D7
	.string "ちから$"
	.if (. - gText_Rom_5750D7) > 0x4
	.error "gText_Rom_5750D7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750D7) < 0x4
	.space 0x4 - (. - gText_Rom_5750D7)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:190 easy_chat_group_battle_line_190
	.globl gText_Rom_5750DB
gText_Rom_5750DB: @ 0x085750DB
	.string "チャレンジ$"
	.if (. - gText_Rom_5750DB) > 0x6
	.error "gText_Rom_5750DB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750DB) < 0x6
	.space 0x6 - (. - gText_Rom_5750DB)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:196 easy_chat_group_battle_line_196
	.globl gText_Rom_5750E1
gText_Rom_5750E1: @ 0x085750E1
	.string "つよい$"
	.if (. - gText_Rom_5750E1) > 0x4
	.error "gText_Rom_5750E1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750E1) < 0x4
	.space 0x4 - (. - gText_Rom_5750E1)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:202 easy_chat_group_battle_line_202
	.globl gText_Rom_5750E5
gText_Rom_5750E5: @ 0x085750E5
	.string "つよすぎ$"
	.if (. - gText_Rom_5750E5) > 0x5
	.error "gText_Rom_5750E5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750E5) < 0x5
	.space 0x5 - (. - gText_Rom_5750E5)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:208 easy_chat_group_battle_line_208 (+1 aliases)
	.globl gText_Rom_5750EA
gText_Rom_5750EA: @ 0x085750EA
	.string "てかげん$"
	.if (. - gText_Rom_5750EA) > 0x5
	.error "gText_Rom_5750EA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750EA) < 0x5
	.space 0x5 - (. - gText_Rom_5750EA)
	.endif
	@ Decoded text from ROM range: offset=0x5750EF, size=0x3
	.string "てき$"

	@ src/data/easy_chat/easy_chat_group_battle.h:220 easy_chat_group_battle_line_220
	.globl gText_Rom_5750F2
gText_Rom_5750F2: @ 0x085750F2
	.string "てんさい$"
	.if (. - gText_Rom_5750F2) > 0x5
	.error "gText_Rom_5750F2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750F2) < 0x5
	.space 0x5 - (. - gText_Rom_5750F2)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:226 easy_chat_group_battle_line_226 (+1 aliases)
	.globl gText_Rom_5750F7
gText_Rom_5750F7: @ 0x085750F7
	.string "でんせつ$"
	.if (. - gText_Rom_5750F7) > 0x5
	.error "gText_Rom_5750F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750F7) < 0x5
	.space 0x5 - (. - gText_Rom_5750F7)
	.endif

	@ src/data/easy_chat/easy_chat_group_battle.h:232 easy_chat_group_battle_line_232
	.globl gText_Rom_5750FC
gText_Rom_5750FC: @ 0x085750FC
	.string "にげ$"
	.if (. - gText_Rom_5750FC) > 0x3
	.error "gText_Rom_5750FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5750FC) < 0x3
	.space 0x3 - (. - gText_Rom_5750FC)
	.endif
