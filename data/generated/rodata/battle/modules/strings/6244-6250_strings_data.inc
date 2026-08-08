	@ src/strings.c:747 gText_Lets
	.globl gText_Rom_5CC77E
gText_Rom_5CC77E: @ 0x085CC77E
	.string "しよう!$"
	.if (. - gText_Rom_5CC77E) > 0x5
	.error "gText_Rom_5CC77E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC77E) < 0x5
	.space 0x5 - (. - gText_Rom_5CC77E)
	.endif
	.globl gUnknown_85CC783
gUnknown_85CC783: @ 0x085CC783

	@ src/strings.c:748 gText_Ok
	.globl gText_Rom_5CC783
gText_Rom_5CC783: @ 0x085CC783
	.string "OK!$"
	.if (. - gText_Rom_5CC783) > 0x4
	.error "gText_Rom_5CC783 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC783) < 0x4
	.space 0x4 - (. - gText_Rom_5CC783)
	.endif
	.globl gUnknown_85CC787
gUnknown_85CC787: @ 0x085CC787

	@ src/strings.c:749 gText_Sorry
	.globl gText_Rom_5CC787
gText_Rom_5CC787: @ 0x085CC787
	.string "ごめん…$"
	.if (. - gText_Rom_5CC787) > 0x5
	.error "gText_Rom_5CC787 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC787) < 0x5
	.space 0x5 - (. - gText_Rom_5CC787)
	.endif
	.globl gUnknown_85CC78C
gUnknown_85CC78C: @ 0x085CC78C

	@ src/strings.c:750 gText_YaySmileEmoji
	.globl gText_Rom_5CC78C
gText_Rom_5CC78C: @ 0x085CC78C
	.string "わーい{EMOJI_BIGSMILE}$"
	.if (. - gText_Rom_5CC78C) > 0x6
	.error "gText_Rom_5CC78C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC78C) < 0x6
	.space 0x6 - (. - gText_Rom_5CC78C)
	.endif
