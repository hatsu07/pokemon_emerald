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
	.globl gText_Rom_5CA8B8
	.set gText_Rom_5CA8B8, sText_Mailbox + 0x3

	@ src/player_pc.c:172 sText_DepositItem
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl sText_DepositItem
sText_DepositItem: @ 0x085CA8BD
	.string "どうぐを あずける{EOS}"
	.if (. - sText_DepositItem) != 0xa
	.error "sText_DepositItem must retain its original byte length"
	.endif
	.globl gText_Rom_5CA8C2
	.set gText_Rom_5CA8C2, sText_DepositItem + 0x5

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
	.globl gText_Rom_5CA8D6
	.set gText_Rom_5CA8D6, sText_TossItem + 0x5

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
	.globl gText_Rom_5CA8FC
	.set gText_Rom_5CA8FC, gText_Rom_5CA8EC + 0x10

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
