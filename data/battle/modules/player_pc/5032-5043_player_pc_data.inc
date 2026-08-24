	.globl gText_NoItems

	@ src/strings.c:452 gText_NoItems
	.globl gText_NoItems
gText_NoItems: @ 0x085CA918
	.string "なにも ありません!{PAUSE_UNTIL_PRESS}{EOS}"
	.if (. - gText_NoItems) > 0xd
	.error "gText_NoItems may not grow beyond its original slot"
	.endif
	.if (. - gText_NoItems) < 0xd
	.space 0xd - (. - gText_NoItems)
	.endif
	.globl sText_NoRoomInBag

	@ src/player_pc.c:178 sText_NoRoomInBag
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sText_NoRoomInBag
sText_NoRoomInBag: @ 0x085CA925
	.string "これいじょう\nバッグに はいりません{EOS}"
	.if (. - sText_NoRoomInBag) != 0x13
	.error "sText_NoRoomInBag must retain its original byte length"
	.endif

	@ src/player_pc.c:176 sText_WithdrawHowManyItems
	.globl sText_WithdrawHowManyItems
sText_WithdrawHowManyItems: @ 0x085CA938
	.string "{STR_VAR_1}を\nいくつ ひきだしますか?{EOS}"
	.if (. - sText_WithdrawHowManyItems) > 0x11
	.error "sText_WithdrawHowManyItems may not grow beyond its original slot"
	.endif
	.if (. - sText_WithdrawHowManyItems) < 0x11
	.space 0x11 - (. - sText_WithdrawHowManyItems)
	.endif

	@ src/player_pc.c:177 sText_WithdrawXItems
	.globl sText_WithdrawXItems
sText_WithdrawXItems: @ 0x085CA949
	.string "{STR_VAR_1}を\n{STR_VAR_2}コ ひきだしました{EOS}"
	.if (. - sText_WithdrawXItems) > 0x10
	.error "sText_WithdrawXItems may not grow beyond its original slot"
	.endif
	.if (. - sText_WithdrawXItems) < 0x10
	.space 0x10 - (. - sText_WithdrawXItems)
	.endif

	@ src/player_pc.c:230 player_pc_line_230
	.globl gText_Rom_5CA959
gText_Rom_5CA959: @ 0x085CA959
	.string "ないようを よむ{EOS}"
	.if (. - gText_Rom_5CA959) > 0x9
	.error "gText_Rom_5CA959 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA959) < 0x9
	.space 0x9 - (. - gText_Rom_5CA959)
	.endif

	@ src/player_pc.c:231 player_pc_line_231
	.globl gText_Rom_5CA962
gText_Rom_5CA962: @ 0x085CA962
	.string "バッグに もどす{EOS}"
	.if (. - gText_Rom_5CA962) > 0x9
	.error "gText_Rom_5CA962 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA962) < 0x9
	.space 0x9 - (. - gText_Rom_5CA962)
	.endif

	@ src/player_pc.c:232 player_pc_line_232
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA96B
gText_Rom_5CA96B: @ 0x085CA96B
	.string "ポケモンに もたせる{EOS}"
	.if (. - gText_Rom_5CA96B) != 0xb
	.error "gText_Rom_5CA96B must retain its original byte length"
	.endif
