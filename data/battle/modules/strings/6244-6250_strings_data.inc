	.globl gText_Rom_5CC779

	@ src/data/easy_chat/easy_chat_group_battle.h:172 easy_chat_group_battle_line_172 (+1 aliases)
	.globl gText_Rom_5CC779
gText_Rom_5CC779: @ 0x085CC779
	.string "たいせん{EOS}"
	.if (. - gText_Rom_5CC779) > 0x5
	.error "gText_Rom_5CC779 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC779) < 0x5
	.space 0x5 - (. - gText_Rom_5CC779)
	.endif
	.globl gText_Lets

	@ src/strings.c:747 gText_Lets
	.globl gText_Lets
gText_Lets: @ 0x085CC77E
	.string "しよう!{EOS}"
	.if (. - gText_Lets) > 0x5
	.error "gText_Lets may not grow beyond its original slot"
	.endif
	.if (. - gText_Lets) < 0x5
	.space 0x5 - (. - gText_Lets)
	.endif

	@ src/strings.c:748 gText_Ok
	.globl gText_Ok
gText_Ok: @ 0x085CC783
	.string "OK!{EOS}"
	.if (. - gText_Ok) > 0x4
	.error "gText_Ok may not grow beyond its original slot"
	.endif
	.if (. - gText_Ok) < 0x4
	.space 0x4 - (. - gText_Ok)
	.endif

	@ src/strings.c:749 gText_Sorry
	.globl gText_Sorry
gText_Sorry: @ 0x085CC787
	.string "ごめん…{EOS}"
	.if (. - gText_Sorry) > 0x5
	.error "gText_Sorry may not grow beyond its original slot"
	.endif
	.if (. - gText_Sorry) < 0x5
	.space 0x5 - (. - gText_Sorry)
	.endif

	@ src/strings.c:750 gText_YaySmileEmoji
	.globl gText_YaySmileEmoji
gText_YaySmileEmoji: @ 0x085CC78C
	.string "わーい{EMOJI_BIGSMILE}{EOS}"
	.if (. - gText_YaySmileEmoji) > 0x6
	.error "gText_YaySmileEmoji may not grow beyond its original slot"
	.endif
	.if (. - gText_YaySmileEmoji) < 0x6
	.space 0x6 - (. - gText_YaySmileEmoji)
	.endif
