	@ src/data/script_menu.h:156 script_menu_line_156
	.globl gText_Rom_55D140
gText_Rom_55D140: @ 0x0855D140
	.string "やけどなおし$"
	.if (. - gText_Rom_55D140) > 0x7
	.error "gText_Rom_55D140 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55D140) < 0x7
	.space 0x7 - (. - gText_Rom_55D140)
	.endif
	.incbin "baserom.gba", 0x55d147, 0x1b1

	@ src/data/script_menu.h:983 sText_FreshWater
	.globl gText_Rom_55D2F8
gText_Rom_55D2F8: @ 0x0855D2F8
	.string "おいしいみず$"
	.if (. - gText_Rom_55D2F8) > 0x7
	.error "gText_Rom_55D2F8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55D2F8) < 0x7
	.space 0x7 - (. - gText_Rom_55D2F8)
	.endif
	.incbin "baserom.gba", 0x55d2ff, 0x21

	@ src/data/script_menu.h:984 sText_SodaPop
	.globl gText_Rom_55D320
gText_Rom_55D320: @ 0x0855D320
	.string "サイコソーダ$"
	.if (. - gText_Rom_55D320) > 0x7
	.error "gText_Rom_55D320 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55D320) < 0x7
	.space 0x7 - (. - gText_Rom_55D320)
	.endif
	.incbin "baserom.gba", 0x55d327, 0x21

	@ src/data/script_menu.h:985 sText_Lemonade
	.globl gText_Rom_55D348
gText_Rom_55D348: @ 0x0855D348
	.string "ミックスオレ$"
	.if (. - gText_Rom_55D348) > 0x7
	.error "gText_Rom_55D348 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55D348) < 0x7
	.space 0x7 - (. - gText_Rom_55D348)
	.endif
	.incbin "baserom.gba", 0x55d34f, 0x1b1

	@ src/data/script_menu.h:256 script_menu_line_256 (+1 aliases)
	.globl gText_Rom_55D500
gText_Rom_55D500: @ 0x0855D500
	.string "あおいビードロ$"
	.if (. - gText_Rom_55D500) > 0x8
	.error "gText_Rom_55D500 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55D500) < 0x8
	.space 0x8 - (. - gText_Rom_55D500)
	.endif
	.incbin "baserom.gba", 0x55d508, 0x20

	@ src/data/script_menu.h:257 script_menu_line_257 (+1 aliases)
	.globl gText_Rom_55D528
gText_Rom_55D528: @ 0x0855D528
	.string "きいろビードロ$"
	.if (. - gText_Rom_55D528) > 0x8
	.error "gText_Rom_55D528 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55D528) < 0x8
	.space 0x8 - (. - gText_Rom_55D528)
	.endif
	.incbin "baserom.gba", 0x55d530, 0x20

	@ src/data/script_menu.h:258 script_menu_line_258 (+1 aliases)
	.globl gText_Rom_55D550
gText_Rom_55D550: @ 0x0855D550
	.string "あかいビードロ$"
	.if (. - gText_Rom_55D550) > 0x8
	.error "gText_Rom_55D550 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55D550) < 0x8
	.space 0x8 - (. - gText_Rom_55D550)
	.endif
	.incbin "baserom.gba", 0x55d558, 0x20

	@ src/data/script_menu.h:260 script_menu_line_260 (+1 aliases)
	.globl gText_Rom_55D578
gText_Rom_55D578: @ 0x0855D578
	.string "くろいビードロ$"
	.if (. - gText_Rom_55D578) > 0x8
	.error "gText_Rom_55D578 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55D578) < 0x8
	.space 0x8 - (. - gText_Rom_55D578)
	.endif
	.incbin "baserom.gba", 0x55d580, 0x20

	@ src/data/script_menu.h:259 script_menu_line_259 (+1 aliases)
	.globl gText_Rom_55D5A0
gText_Rom_55D5A0: @ 0x0855D5A0
	.string "しろいビードロ$"
	.if (. - gText_Rom_55D5A0) > 0x8
	.error "gText_Rom_55D5A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55D5A0) < 0x8
	.space 0x8 - (. - gText_Rom_55D5A0)
	.endif
	.incbin "baserom.gba", 0x55d5a8, 0xc0

	@ src/data/script_menu.h:335 gText_RedShard
	.globl gText_Rom_55D668
gText_Rom_55D668: @ 0x0855D668
	.string "あかいかけら$"
	.if (. - gText_Rom_55D668) > 0x7
	.error "gText_Rom_55D668 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55D668) < 0x7
	.space 0x7 - (. - gText_Rom_55D668)
	.endif
	.incbin "baserom.gba", 0x55d66f, 0x21

	@ src/data/script_menu.h:337 gText_BlueShard
	.globl gText_Rom_55D690
gText_Rom_55D690: @ 0x0855D690
	.string "あおいかけら$"
	.if (. - gText_Rom_55D690) > 0x7
	.error "gText_Rom_55D690 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55D690) < 0x7
	.space 0x7 - (. - gText_Rom_55D690)
	.endif
	.incbin "baserom.gba", 0x55d697, 0x21

	@ src/data/script_menu.h:336 gText_YellowShard
	.globl gText_Rom_55D6B8
gText_Rom_55D6B8: @ 0x0855D6B8
	.string "きいろいかけら$"
	.if (. - gText_Rom_55D6B8) > 0x8
	.error "gText_Rom_55D6B8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55D6B8) < 0x8
	.space 0x8 - (. - gText_Rom_55D6B8)
	.endif
	.incbin "baserom.gba", 0x55d6c0, 0x20

	@ src/data/script_menu.h:338 gText_GreenShard
	.globl gText_Rom_55D6E0
gText_Rom_55D6E0: @ 0x0855D6E0
	.string "みどりのかけら$"
	.if (. - gText_Rom_55D6E0) > 0x8
	.error "gText_Rom_55D6E0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55D6E0) < 0x8
	.space 0x8 - (. - gText_Rom_55D6E0)
	.endif
	.incbin "baserom.gba", 0x55d6e8, 0xaec

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:220 easy_chat_group_lifestyle_line_220 (+1 aliases)
	.globl gText_Rom_55E1D4
gText_Rom_55E1D4: @ 0x0855E1D4
	.string "メール$"
	.if (. - gText_Rom_55E1D4) > 0x4
	.error "gText_Rom_55E1D4 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55E1D4) < 0x4
	.space 0x4 - (. - gText_Rom_55E1D4)
	.endif
	.incbin "baserom.gba", 0x55e1d8, 0x20

	@ src/data/script_menu.h:157 script_menu_line_157
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_55E1F8
gText_Rom_55E1F8: @ 0x0855E1F8
	.string "ハーバーメール$"
	.if (. - gText_Rom_55E1F8) != 0x8
	.error "gText_Rom_55E1F8 must retain its original byte length"
	.endif
	.globl gText_Rom_55E1FC
	.set gText_Rom_55E1FC, gText_Rom_55E1F8 + 0x4
	.incbin "baserom.gba", 0x55e200, 0x24

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:220 easy_chat_group_lifestyle_line_220 (+1 aliases)
	.globl gText_Rom_55E224
gText_Rom_55E224: @ 0x0855E224
	.string "メール$"
	.if (. - gText_Rom_55E224) > 0x4
	.error "gText_Rom_55E224 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55E224) < 0x4
	.space 0x4 - (. - gText_Rom_55E224)
	.endif
	.incbin "baserom.gba", 0x55e228, 0x25

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:220 easy_chat_group_lifestyle_line_220 (+1 aliases)
	.globl gText_Rom_55E24D
gText_Rom_55E24D: @ 0x0855E24D
	.string "メール$"
	.if (. - gText_Rom_55E24D) > 0x4
	.error "gText_Rom_55E24D may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55E24D) < 0x4
	.space 0x4 - (. - gText_Rom_55E24D)
	.endif
	.incbin "baserom.gba", 0x55e251, 0x23

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:220 easy_chat_group_lifestyle_line_220 (+1 aliases)
	.globl gText_Rom_55E274
gText_Rom_55E274: @ 0x0855E274
	.string "メール$"
	.if (. - gText_Rom_55E274) > 0x4
	.error "gText_Rom_55E274 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55E274) < 0x4
	.space 0x4 - (. - gText_Rom_55E274)
	.endif
	.incbin "baserom.gba", 0x55e278, 0x23

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:220 easy_chat_group_lifestyle_line_220 (+1 aliases)
	.globl gText_Rom_55E29B
gText_Rom_55E29B: @ 0x0855E29B
	.string "メール$"
	.if (. - gText_Rom_55E29B) > 0x4
	.error "gText_Rom_55E29B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55E29B) < 0x4
	.space 0x4 - (. - gText_Rom_55E29B)
	.endif
	.incbin "baserom.gba", 0x55e29f, 0x26

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:220 easy_chat_group_lifestyle_line_220 (+1 aliases)
	.globl gText_Rom_55E2C5
gText_Rom_55E2C5: @ 0x0855E2C5
	.string "メール$"
	.if (. - gText_Rom_55E2C5) > 0x4
	.error "gText_Rom_55E2C5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55E2C5) < 0x4
	.space 0x4 - (. - gText_Rom_55E2C5)
	.endif
	.incbin "baserom.gba", 0x55e2c9, 0x23

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:220 easy_chat_group_lifestyle_line_220 (+1 aliases)
	.globl gText_Rom_55E2EC
gText_Rom_55E2EC: @ 0x0855E2EC
	.string "メール$"
	.if (. - gText_Rom_55E2EC) > 0x4
	.error "gText_Rom_55E2EC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55E2EC) < 0x4
	.space 0x4 - (. - gText_Rom_55E2EC)
	.endif
	.incbin "baserom.gba", 0x55e2f0, 0x25

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:220 easy_chat_group_lifestyle_line_220 (+1 aliases)
	.globl gText_Rom_55E315
gText_Rom_55E315: @ 0x0855E315
	.string "メール$"
	.if (. - gText_Rom_55E315) > 0x4
	.error "gText_Rom_55E315 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55E315) < 0x4
	.space 0x4 - (. - gText_Rom_55E315)
	.endif
	.incbin "baserom.gba", 0x55e319, 0x23

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:220 easy_chat_group_lifestyle_line_220 (+1 aliases)
	.globl gText_Rom_55E33C
gText_Rom_55E33C: @ 0x0855E33C
	.string "メール$"
	.if (. - gText_Rom_55E33C) > 0x4
	.error "gText_Rom_55E33C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55E33C) < 0x4
	.space 0x4 - (. - gText_Rom_55E33C)
	.endif
	.incbin "baserom.gba", 0x55e340, 0x24

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:220 easy_chat_group_lifestyle_line_220 (+1 aliases)
	.globl gText_Rom_55E364
gText_Rom_55E364: @ 0x0855E364
	.string "メール$"
	.if (. - gText_Rom_55E364) > 0x4
	.error "gText_Rom_55E364 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55E364) < 0x4
	.space 0x4 - (. - gText_Rom_55E364)
	.endif
	.incbin "baserom.gba", 0x55e368, 0x23

	@ src/data/easy_chat/easy_chat_group_lifestyle.h:220 easy_chat_group_lifestyle_line_220 (+1 aliases)
	.globl gText_Rom_55E38B
gText_Rom_55E38B: @ 0x0855E38B
	.string "メール$"
	.if (. - gText_Rom_55E38B) > 0x4
	.error "gText_Rom_55E38B may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_55E38B) < 0x4
	.space 0x4 - (. - gText_Rom_55E38B)
	.endif
	.incbin "baserom.gba", 0x55e38f, 0x6b1

