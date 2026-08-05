	@ src/battle_message.c:208 battle_message_line_208
	.globl gText_Rom_5A97B2
gText_Rom_5A97B2: @ 0x085A97B2
	.string "{B_PLAYER_NAME}は しょうきんとして\n{B_BUFF1}円 てにいれた！\p$"
	.if (. - gText_Rom_5A97B2) > 0x19
	.error "gText_Rom_5A97B2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A97B2) < 0x19
	.space 0x19 - (. - gText_Rom_5A97B2)
	.endif

	@ src/battle_message.c:209 battle_message_line_209
	.globl gText_Rom_5A97CB
gText_Rom_5A97CB: @ 0x085A97CB
	.string "{B_PLAYER_NAME}の てもとには\nたたかえる ポケモンが いない!\p$"
	.if (. - gText_Rom_5A97CB) > 0x1c
	.error "gText_Rom_5A97CB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A97CB) < 0x1c
	.space 0x1c - (. - gText_Rom_5A97CB)
	.endif
	@ Replaced baserom.gba range: offset=0x5A97E7, size=0x1F
	.byte 0xFD, 0x23, 0x1A, 0xFE, 0x22, 0x19, 0x1F, 0x04, 0x37, 0x00, 0x1F, 0x50, 0x08, 0x27, 0x16, 0x00
	.byte 0x15, 0x50, 0x10, 0xAB, 0xFC, 0x09, 0xFF, 0xFD, 0x13, 0x19, 0x00, 0xFD, 0x1A, 0x44, 0xFE

	@ src/battle_message.c:432 battle_message_line_432
	.globl gText_Rom_5A9806
gText_Rom_5A9806: @ 0x085A9806
	.string "にげられない！\p$"
	.if (. - gText_Rom_5A9806) > 0x9
	.error "gText_Rom_5A9806 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9806) < 0x9
	.space 0x9 - (. - gText_Rom_5A9806)
	.endif

	@ src/battle_message.c:432 battle_message_line_432
	.globl gText_Rom_5A980F
gText_Rom_5A980F: @ 0x085A980F
	.string "にげられない！\p$"
	.if (. - gText_Rom_5A980F) > 0x9
	.error "gText_Rom_5A980F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A980F) < 0x9
	.space 0x9 - (. - gText_Rom_5A980F)
	.endif
	@ Replaced baserom.gba range: offset=0x5A9818, size=0xC
	.byte 0xFD, 0x0F, 0x1A, 0x00, 0x16, 0x3A, 0x27, 0x2A, 0x15, 0x02, 0xAB, 0xFF

	@ src/battle_message.c:214 battle_message_line_214
	.globl gText_Rom_5A9824
gText_Rom_5A9824: @ 0x085A9824
	.string "{B_BUFF1}かい あたった！$"
	.if (. - gText_Rom_5A9824) > 0xb
	.error "gText_Rom_5A9824 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A9824) < 0xb
	.space 0xb - (. - gText_Rom_5A9824)
	.endif

	@ src/battle_message.c:215 battle_message_line_215
	.globl gText_Rom_5A982F
gText_Rom_5A982F: @ 0x085A982F
	.string "{B_EFF_NAME_WITH_PREFIX}は\nねむってしまった！$"
	.if (. - gText_Rom_5A982F) > 0xe
	.error "gText_Rom_5A982F may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5A982F) < 0xe
	.space 0xe - (. - gText_Rom_5A982F)
	.endif
	@ Replaced baserom.gba range: offset=0x5A983D, size=0x21
	.byte 0xFD, 0x13, 0x19, 0x00, 0xFD, 0x1A, 0x44, 0xFE, 0xFD, 0x11, 0x1A, 0x00, 0x18, 0x21, 0x50, 0x13
	.byte 0x0C, 0x1F, 0x50, 0x10, 0xAB, 0xFF, 0xFD, 0x10, 0x1A, 0x00, 0x0D, 0x44, 0x16, 0xFE, 0x18, 0x21
	.byte 0x50

