	@ src/data/easy_chat/easy_chat_group_trainer.h:88 easy_chat_group_trainer_line_88 (+7 aliases)
	.globl gText_Rom_5C9393
gText_Rom_5C9393: @ 0x085C9393
	.string "ポケモン$"
	.if (. - gText_Rom_5C9393) > 0x5
	.error "gText_Rom_5C9393 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9393) < 0x5
	.space 0x5 - (. - gText_Rom_5C9393)
	.endif
	.globl gUnknown_85C9398
gUnknown_85C9398: @ 0x085C9398

	@ src/strings.c:129 gText_FlyToWhere
	.globl gText_Rom_5C9398
gText_Rom_5C9398: @ 0x085C9398
	.string "どこへ とびますか?$"
	.if (. - gText_Rom_5C9398) > 0xb
	.error "gText_Rom_5C9398 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9398) < 0xb
	.space 0xb - (. - gText_Rom_5C9398)
	.endif

	@ src/data/easy_chat/easy_chat_group_actions.h:256 easy_chat_group_actions_line_256 (+1 aliases)
	.globl gText_Rom_5C93A3
gText_Rom_5C93A3: @ 0x085C93A3
	.string "つかう$"
	.if (. - gText_Rom_5C93A3) > 0x4
	.error "gText_Rom_5C93A3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C93A3) < 0x4
	.space 0x4 - (. - gText_Rom_5C93A3)
	.endif

