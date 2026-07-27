	@ src/data/easy_chat/easy_chat_group_endings.h:352 easy_chat_group_endings_line_352
	.globl gText_Rom_5CC693
gText_Rom_5CC693: @ 0x085CC693
	.string "ません$"
	.if (. - gText_Rom_5CC693) > 0x4
	.error "gText_Rom_5CC693 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC693) < 0x4
	.space 0x4 - (. - gText_Rom_5CC693)
	.endif

	@ src/strings.c:736 gText_ExitingChat
	.globl gText_Rom_5CC697
gText_Rom_5CC697: @ 0x085CC697
	.string "さんかしゃが いなくなったので\nしゅうりょうします!$"
	.if (. - gText_Rom_5CC697) > 0x1b
	.error "gText_Rom_5CC697 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC697) < 0x1b
	.space 0x1b - (. - gText_Rom_5CC697)
	.endif
	.incbin "baserom.gba", 0x5cc6b2, 0x1b

	@ src/strings.c:738 gText_RegisteredTextChangedOKToSave
	.globl gText_Rom_5CC6CD
gText_Rom_5CC6CD: @ 0x085CC6CD
	.string "とうろくが かわりました\nポケモンレポートに かきこみますか?$"
	.if (. - gText_Rom_5CC6CD) > 0x20
	.error "gText_Rom_5CC6CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC6CD) < 0x20
	.space 0x20 - (. - gText_Rom_5CC6CD)
	.endif

	@ data/text/save.inc:6 gText_AlreadySavedFile (+1 aliases)
	.globl gText_Rom_5CC6ED
gText_Rom_5CC6ED: @ 0x085CC6ED
	.string "まえに かかれた レポートに\nうえから かいても いいですか?$"
	.if (. - gText_Rom_5CC6ED) > 0x20
	.error "gText_Rom_5CC6ED may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC6ED) < 0x20
	.space 0x20 - (. - gText_Rom_5CC6ED)
	.endif

	@ data/text/save.inc:10 gText_SavingDontTurnOff (+2 aliases)
	.globl gText_Rom_5CC70D
gText_Rom_5CC70D: @ 0x085CC70D
	.string "ポケモンレポートに かきこんでいます\nでんげんを きらないで ください$"
	.if (. - gText_Rom_5CC70D) > 0x24
	.error "gText_Rom_5CC70D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC70D) < 0x24
	.space 0x24 - (. - gText_Rom_5CC70D)
	.endif

	@ src/strings.c:741 gText_PlayerSavedGame_Chat
	.globl gText_Rom_5CC731
gText_Rom_5CC731: @ 0x085CC731
	.string "{DYNAMIC 0} は\nレポートに しっかり かきのこした!$"
	.if (. - gText_Rom_5CC731) > 0x18
	.error "gText_Rom_5CC731 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC731) < 0x18
	.space 0x18 - (. - gText_Rom_5CC731)
	.endif

	@ src/strings.c:742 gText_IfLeaderLeavesChatEnds
	.globl gText_Rom_5CC749
gText_Rom_5CC749: @ 0x085CC749
	.string "リーダーが やめると かいさん\nになりますが よろしいですか?$"
	.if (. - gText_Rom_5CC749) > 0x20
	.error "gText_Rom_5CC749 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC749) < 0x20
	.space 0x20 - (. - gText_Rom_5CC749)
	.endif
	.globl gUnknown_85CC769
gUnknown_85CC769: @ 0x085CC769

	@ src/data/easy_chat/easy_chat_group_greetings.h:94 easy_chat_group_greetings_line_94 (+1 aliases)
	.globl gText_Rom_5CC769
gText_Rom_5CC769: @ 0x085CC769
	.string "こんにちは$"
	.if (. - gText_Rom_5CC769) > 0x6
	.error "gText_Rom_5CC769 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC769) < 0x6
	.space 0x6 - (. - gText_Rom_5CC769)
	.endif
	.globl gUnknown_85CC76F
gUnknown_85CC76F: @ 0x085CC76F

