	@ src/battle_message.c:197 battle_message_line_197
	.globl gText_Rom_5A966F
gText_Rom_5A966F: @ 0x085A966F
	.string "{B_BUFF1}は あたらしく\n{B_BUFF2}を　おぼえたい………!\p$"
	.if (. - gText_Rom_5A966F) > 0x19
	.error "gText_Rom_5A966F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A966F) < 0x19
	.space 0x19 - (. - gText_Rom_5A966F)
	.endif

	@ src/battle_message.c:198 battle_message_line_198
	.globl gText_Rom_5A9688
gText_Rom_5A9688: @ 0x085A9688
	.string "しかし {B_BUFF1}は わざを 4つ\nおぼえるので せいいっぱいだ!\p$"
	.if (. - gText_Rom_5A9688) > 0x20
	.error "gText_Rom_5A9688 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9688) < 0x20
	.space 0x20 - (. - gText_Rom_5A9688)
	.endif

	@ src/battle_message.c:199 battle_message_line_199
	.globl gText_Rom_5A96A8
gText_Rom_5A96A8: @ 0x085A96A8
	.string "{B_BUFF2}の かわりに\nほかの わざを わすれさせますか?$"
	.if (. - gText_Rom_5A96A8) > 0x1b
	.error "gText_Rom_5A96A8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A96A8) < 0x1b
	.space 0x1b - (. - gText_Rom_5A96A8)
	.endif

	@ src/battle_message.c:200 battle_message_line_200
	.globl gText_Rom_5A96C3
gText_Rom_5A96C3: @ 0x085A96C3
	.string "{B_BUFF1}は {B_BUFF2}の\nつかいかたを きれいに わすれた!\p$"
	.if (. - gText_Rom_5A96C3) > 0x1b
	.error "gText_Rom_5A96C3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A96C3) < 0x1b
	.space 0x1b - (. - gText_Rom_5A96C3)
	.endif
	.incbin "baserom.gba", 0x5a96de, 0x15

	@ src/strings.c:618 gText_ChallengeQuestionMark
	.globl gText_Rom_5A96F3
gText_Rom_5A96F3: @ 0x085A96F3
	.string "あきらめますか?$"
	.if (. - gText_Rom_5A96F3) > 0x9
	.error "gText_Rom_5A96F3 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A96F3) < 0x9
	.space 0x9 - (. - gText_Rom_5A96F3)
	.endif

	@ src/battle_message.c:202 battle_message_line_202
	.globl gText_Rom_5A96FC
gText_Rom_5A96FC: @ 0x085A96FC
	.string "{B_BUFF1}は {B_BUFF2}を\nおぼえずに おわった!\p$"
	.if (. - gText_Rom_5A96FC) > 0x15
	.error "gText_Rom_5A96FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A96FC) < 0x15
	.space 0x15 - (. - gText_Rom_5A96FC)
	.endif

	@ src/battle_message.c:491 battle_message_line_491
	.globl gText_Rom_5A9711
gText_Rom_5A9711: @ 0x085A9711
	.string "つぎの ポケモンを つかいますか?$"
	.if (. - gText_Rom_5A9711) > 0x12
	.error "gText_Rom_5A9711 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9711) < 0x12
	.space 0x12 - (. - gText_Rom_5A9711)
	.endif
	.incbin "baserom.gba", 0x5a9723, 0x60

