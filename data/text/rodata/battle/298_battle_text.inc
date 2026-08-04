	@ src/battle_message.c:1465 gText_MoveInterfaceType (+2 aliases)
	.globl gText_Rom_5F7C5F
gText_Rom_5F7C5F: @ 0x085F7C5F
	.string "タイプ/$"
	.if (. - gText_Rom_5F7C5F) > 0x5
	.error "gText_Rom_5F7C5F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7C5F) < 0x5
	.space 0x5 - (. - gText_Rom_5F7C5F)
	.endif
	.globl gUnknown_85F7C64
gUnknown_85F7C64: @ 0x085F7C64

	@ src/strings.c:1135 gText_MoveRelearnerPP
	.globl gText_Rom_5F7C64
gText_Rom_5F7C64: @ 0x085F7C64
	.string "PP/$"
	.if (. - gText_Rom_5F7C64) > 0x4
	.error "gText_Rom_5F7C64 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7C64) < 0x4
	.space 0x4 - (. - gText_Rom_5F7C64)
	.endif
	.globl gUnknown_85F7C68
gUnknown_85F7C68: @ 0x085F7C68

	@ src/strings.c:1136 gText_MoveRelearnerPower
	.globl gText_Rom_5F7C68
gText_Rom_5F7C68: @ 0x085F7C68
	.string "いりょく/$"
	.if (. - gText_Rom_5F7C68) > 0x6
	.error "gText_Rom_5F7C68 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7C68) < 0x6
	.space 0x6 - (. - gText_Rom_5F7C68)
	.endif
	.globl gUnknown_85F7C6E
gUnknown_85F7C6E: @ 0x085F7C6E

	@ src/strings.c:1137 gText_MoveRelearnerAccuracy
	.globl gText_Rom_5F7C6E
gText_Rom_5F7C6E: @ 0x085F7C6E
	.string "めいちゅう/$"
	.if (. - gText_Rom_5F7C6E) > 0x7
	.error "gText_Rom_5F7C6E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7C6E) < 0x7
	.space 0x7 - (. - gText_Rom_5F7C6E)
	.endif
	.globl gUnknown_85F7C75
gUnknown_85F7C75: @ 0x085F7C75

	@ src/data/easy_chat/easy_chat_group_events.h:1 gEasyChatWord_Appeal (+3 aliases)
	.globl gText_Rom_5F7C75
gText_Rom_5F7C75: @ 0x085F7C75
	.string "アピール$"
	.if (. - gText_Rom_5F7C75) > 0x5
	.error "gText_Rom_5F7C75 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7C75) < 0x5
	.space 0x5 - (. - gText_Rom_5F7C75)
	.endif
	.globl gUnknown_85F7C7A
gUnknown_85F7C7A: @ 0x085F7C7A

	@ src/strings.c:381 gText_Jam (+1 aliases)
	.globl gText_Rom_5F7C7A
gText_Rom_5F7C7A: @ 0x085F7C7A
	.string "ぼうがい$"
	.if (. - gText_Rom_5F7C7A) > 0x5
	.error "gText_Rom_5F7C7A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5F7C7A) < 0x5
	.space 0x5 - (. - gText_Rom_5F7C7A)
	.endif
	.space 0x1, 0x00
	.globl gUnknown_85F7C80
gUnknown_85F7C80: @ 0x085F7C80
	.incbin "baserom.gba", 0x5f7c80, 0x2c18
	.globl gUnknown_85FA898
gUnknown_85FA898: @ 0x085FA898
	.incbin "baserom.gba", 0x5fa898, 0x8
	.globl gUnknown_85FA8A0
gUnknown_85FA8A0: @ 0x085FA8A0
	.incbin "baserom.gba", 0x5fa8a0, 0x18
	.globl gUnknown_85FA8B8
gUnknown_85FA8B8: @ 0x085FA8B8
	@ Resolved pointer table; original ROM range 0x5FA8B8..0x5FA8BF.
	.4byte 0
	.4byte OFFSET_REG_NR13
	.globl gUnknown_85FA8C0
gUnknown_85FA8C0: @ 0x085FA8C0
	.incbin "baserom.gba", 0x5fa8c0, 0x20
	.globl gUnknown_85FA8E0
gUnknown_85FA8E0: @ 0x085FA8E0
	.incbin "baserom.gba", 0x5fa8e0, 0x18
	.globl gUnknown_85FA8F8
gUnknown_85FA8F8: @ 0x085FA8F8
	.incbin "baserom.gba", 0x5fa8f8, 0x18
	.globl gUnknown_85FA910
gUnknown_85FA910: @ 0x085FA910
	.incbin "baserom.gba", 0x5fa910, 0x8
	.globl gUnknown_85FA918
gUnknown_85FA918: @ 0x085FA918
	.incbin "baserom.gba", 0x5fa918, 0x4c
	.globl gUnknown_85FA964
gUnknown_85FA964: @ 0x085FA964
	.incbin "baserom.gba", 0x5fa964, 0x18
	.globl gUnknown_85FA97C
gUnknown_85FA97C: @ 0x085FA97C
	.incbin "baserom.gba", 0x5fa97c, 0x28

