	@ src/player_pc.c:194 player_pc_line_194
	.globl gText_Rom_5CA89D
gText_Rom_5CA89D: @ 0x085CA89D
	.string "せつぞくを きる{EOS}"
	.if (. - gText_Rom_5CA89D) > 0x9
	.error "gText_Rom_5CA89D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA89D) < 0x9
	.space 0x9 - (. - gText_Rom_5CA89D)
	.endif

	@ src/player_pc.c:193 player_pc_line_193
	.globl gText_Rom_5CA8A6
gText_Rom_5CA8A6: @ 0x085CA8A6
	.string "もようがえ{EOS}"
	.if (. - gText_Rom_5CA8A6) > 0x6
	.error "gText_Rom_5CA8A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA8A6) < 0x6
	.space 0x6 - (. - gText_Rom_5CA8A6)
	.endif

	@ src/player_pc.c:191 player_pc_line_191
	.globl gText_Rom_5CA8AC
gText_Rom_5CA8AC: @ 0x085CA8AC
	.string "どうぐ あずかり{EOS}"
	.if (. - gText_Rom_5CA8AC) > 0x9
	.error "gText_Rom_5CA8AC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA8AC) < 0x9
	.space 0x9 - (. - gText_Rom_5CA8AC)
	.endif

	@ src/player_pc.c:174 sText_Mailbox
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sText_Mailbox
sText_Mailbox: @ 0x085CA8B5
	.string "メールボックス{EOS}"
	.if (. - sText_Mailbox) != 0x8
	.error "sText_Mailbox must retain its original byte length"
	.endif

	@ src/player_pc.c:172 sText_DepositItem
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sText_DepositItem
sText_DepositItem: @ 0x085CA8BD
	.string "どうぐを あずける{EOS}"
	.if (. - sText_DepositItem) != 0xa
	.error "sText_DepositItem must retain its original byte length"
	.endif

	@ src/player_pc.c:171 sText_WithdrawItem
	.globl sText_WithdrawItem
sText_WithdrawItem: @ 0x085CA8C7
	.string "どうぐを ひきだす{EOS}"
	.if (. - sText_WithdrawItem) > 0xa
	.error "sText_WithdrawItem may not grow beyond its original slot"
	.endif
	.if (. - sText_WithdrawItem) < 0xa
	.space 0xa - (. - sText_WithdrawItem)
	.endif

	@ src/player_pc.c:173 sText_TossItem
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sText_TossItem
sText_TossItem: @ 0x085CA8D1
	.string "どうぐを すてる{EOS}"
	.if (. - sText_TossItem) != 0x9
	.error "sText_TossItem must retain its original byte length"
	.endif

	@ src/player_pc.c:184 player_pc_line_184
	.globl gText_Rom_5CA8DA
gText_Rom_5CA8DA: @ 0x085CA8DA
	.string "パソコン に\nどうぐを あずけます{EOS}"
	.if (. - gText_Rom_5CA8DA) > 0x12
	.error "gText_Rom_5CA8DA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA8DA) < 0x12
	.space 0x12 - (. - gText_Rom_5CA8DA)
	.endif

	@ src/player_pc.c:183 player_pc_line_183
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CA8EC
gText_Rom_5CA8EC: @ 0x085CA8EC
	.string "パソコン から\nどうぐを ひきだします{EOS}"
	.if (. - gText_Rom_5CA8EC) != 0x14
	.error "gText_Rom_5CA8EC must retain its original byte length"
	.endif

	@ src/player_pc.c:185 player_pc_line_185
	.globl gText_Rom_5CA900
gText_Rom_5CA900: @ 0x085CA900
	.string "パソコン に あずけている\nどうぐを すてます{EOS}"
	.if (. - gText_Rom_5CA900) > 0x18
	.error "gText_Rom_5CA900 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA900) < 0x18
	.space 0x18 - (. - gText_Rom_5CA900)
	.endif

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
