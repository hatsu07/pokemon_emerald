	@ src/player_pc.c:178 sText_NoRoomInBag
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA925
gText_Rom_5CA925: @ 0x085CA925
	.string "これいじょう\nバッグに はいりません$"
	.if (. - gText_Rom_5CA925) != 0x13
	.error "gText_Rom_5CA925 must retain its original byte length"
	.endif
	.globl gText_Rom_5CA932
	.set gText_Rom_5CA932, gText_Rom_5CA925 + 0xd
	.globl gText_Rom_5CA934
	.set gText_Rom_5CA934, gText_Rom_5CA925 + 0xf

	@ src/player_pc.c:176 sText_WithdrawHowManyItems
	.globl gText_Rom_5CA938
gText_Rom_5CA938: @ 0x085CA938
	.string "{STR_VAR_1}を\nいくつ ひきだしますか?$"
	.if (. - gText_Rom_5CA938) > 0x11
	.error "gText_Rom_5CA938 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA938) < 0x11
	.space 0x11 - (. - gText_Rom_5CA938)
	.endif

	@ src/player_pc.c:177 sText_WithdrawXItems
	.globl gText_Rom_5CA949
gText_Rom_5CA949: @ 0x085CA949
	.string "{STR_VAR_1}を\n{STR_VAR_2}コ ひきだしました$"
	.if (. - gText_Rom_5CA949) > 0x10
	.error "gText_Rom_5CA949 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA949) < 0x10
	.space 0x10 - (. - gText_Rom_5CA949)
	.endif

	@ src/player_pc.c:230 player_pc_line_230
	.globl gText_Rom_5CA959
gText_Rom_5CA959: @ 0x085CA959
	.string "ないようを よむ$"
	.if (. - gText_Rom_5CA959) > 0x9
	.error "gText_Rom_5CA959 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA959) < 0x9
	.space 0x9 - (. - gText_Rom_5CA959)
	.endif

	@ src/player_pc.c:231 player_pc_line_231
	.globl gText_Rom_5CA962
gText_Rom_5CA962: @ 0x085CA962
	.string "バッグに もどす$"
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
	.string "ポケモンに もたせる$"
	.if (. - gText_Rom_5CA96B) != 0xb
	.error "gText_Rom_5CA96B must retain its original byte length"
	.endif
