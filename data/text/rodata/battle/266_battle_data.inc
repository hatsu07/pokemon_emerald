	@ asm/battle_interface.s:1227 UpdateLvlInHealthbox
	.globl gText_Rom_5CC4EE
gText_Rom_5CC4EE: @ 0x085CC4EE
	.string "　$"
	.if (. - gText_Rom_5CC4EE) > 0x2
	.error "gText_Rom_5CC4EE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC4EE) < 0x2
	.space 0x2 - (. - gText_Rom_5CC4EE)
	.endif
	.globl gUnknown_85CC4F0
gUnknown_85CC4F0: @ 0x085CC4F0

	@ src/strings.c:719 gText_HealthboxGender_Male
	.globl gText_Rom_5CC4F0
gText_Rom_5CC4F0: @ 0x085CC4F0
	.string "{COLOR DYNAMIC_COLOR2}♂$"
	.if (. - gText_Rom_5CC4F0) > 0x5
	.error "gText_Rom_5CC4F0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC4F0) < 0x5
	.space 0x5 - (. - gText_Rom_5CC4F0)
	.endif
	.globl gUnknown_85CC4F5
gUnknown_85CC4F5: @ 0x085CC4F5

	@ src/strings.c:720 gText_HealthboxGender_Female
	.globl gText_Rom_5CC4F5
gText_Rom_5CC4F5: @ 0x085CC4F5
	.string "{COLOR DYNAMIC_COLOR1}♀$"
	.if (. - gText_Rom_5CC4F5) > 0x5
	.error "gText_Rom_5CC4F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC4F5) < 0x5
	.space 0x5 - (. - gText_Rom_5CC4F5)
	.endif
	.globl gUnknown_85CC4FA
gUnknown_85CC4FA: @ 0x085CC4FA

	@ src/strings.c:721 gText_HealthboxGender_None
	.globl gText_Rom_5CC4FA
gText_Rom_5CC4FA: @ 0x085CC4FA
	.string "{COLOR DYNAMIC_COLOR2}$"
	.if (. - gText_Rom_5CC4FA) > 0x4
	.error "gText_Rom_5CC4FA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC4FA) < 0x4
	.space 0x4 - (. - gText_Rom_5CC4FA)
	.endif

	@ src/strings.c:83 gText_DexSearchAlphaABC
	.globl gText_Rom_5CC4FE
gText_Rom_5CC4FE: @ 0x085CC4FE
	.string "あいうえお$"
	.if (. - gText_Rom_5CC4FE) > 0x6
	.error "gText_Rom_5CC4FE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC4FE) < 0x6
	.space 0x6 - (. - gText_Rom_5CC4FE)
	.endif

	@ src/strings.c:84 gText_DexSearchAlphaDEF
	.globl gText_Rom_5CC504
gText_Rom_5CC504: @ 0x085CC504
	.string "かきくけこ$"
	.if (. - gText_Rom_5CC504) > 0x6
	.error "gText_Rom_5CC504 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC504) < 0x6
	.space 0x6 - (. - gText_Rom_5CC504)
	.endif

	@ src/strings.c:85 gText_DexSearchAlphaGHI
	.globl gText_Rom_5CC50A
gText_Rom_5CC50A: @ 0x085CC50A
	.string "さしすせそ$"
	.if (. - gText_Rom_5CC50A) > 0x6
	.error "gText_Rom_5CC50A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC50A) < 0x6
	.space 0x6 - (. - gText_Rom_5CC50A)
	.endif

	@ src/strings.c:86 gText_DexSearchAlphaJKL
	.globl gText_Rom_5CC510
gText_Rom_5CC510: @ 0x085CC510
	.string "たちつてと$"
	.if (. - gText_Rom_5CC510) > 0x6
	.error "gText_Rom_5CC510 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC510) < 0x6
	.space 0x6 - (. - gText_Rom_5CC510)
	.endif

	@ src/strings.c:87 gText_DexSearchAlphaMNO
	.globl gText_Rom_5CC516
gText_Rom_5CC516: @ 0x085CC516
	.string "なにぬねの$"
	.if (. - gText_Rom_5CC516) > 0x6
	.error "gText_Rom_5CC516 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC516) < 0x6
	.space 0x6 - (. - gText_Rom_5CC516)
	.endif

	@ src/strings.c:88 gText_DexSearchAlphaPQR
	.globl gText_Rom_5CC51C
gText_Rom_5CC51C: @ 0x085CC51C
	.string "はひふへほ$"
	.if (. - gText_Rom_5CC51C) > 0x6
	.error "gText_Rom_5CC51C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC51C) < 0x6
	.space 0x6 - (. - gText_Rom_5CC51C)
	.endif

	@ src/strings.c:89 gText_DexSearchAlphaSTU
	.globl gText_Rom_5CC522
gText_Rom_5CC522: @ 0x085CC522
	.string "まみむめも$"
	.if (. - gText_Rom_5CC522) > 0x6
	.error "gText_Rom_5CC522 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC522) < 0x6
	.space 0x6 - (. - gText_Rom_5CC522)
	.endif
	@ Replaced baserom.gba range: offset=0x5CC528, size=0x6
	.byte 0x24, 0x25, 0x26, 0xAB, 0xAC, 0xFF

	@ src/strings.c:90 gText_DexSearchAlphaVWX
	.globl gText_Rom_5CC52E
gText_Rom_5CC52E: @ 0x085CC52E
	.string "らりるれろ$"
	.if (. - gText_Rom_5CC52E) > 0x6
	.error "gText_Rom_5CC52E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC52E) < 0x6
	.space 0x6 - (. - gText_Rom_5CC52E)
	.endif
	@ Replaced baserom.gba range: offset=0x5CC534, size=0x42
	.byte 0x2C, 0x2D, 0x2E, 0xAE, 0x00, 0xFF, 0x51, 0x52, 0x53, 0x54, 0x55, 0xFF, 0x56, 0x57, 0x58, 0x59
	.byte 0x5A, 0xFF, 0x5B, 0x5C, 0x5D, 0x5E, 0x5F, 0xFF, 0x60, 0x61, 0x62, 0x63, 0x64, 0xFF, 0x65, 0x66
	.byte 0x67, 0x68, 0x69, 0xFF, 0x6A, 0x6B, 0x6C, 0x6D, 0x6E, 0xFF, 0x6F, 0x70, 0x71, 0x72, 0x73, 0xFF
	.byte 0x74, 0x75, 0x76, 0xAB, 0xAC, 0xFF, 0x77, 0x78, 0x79, 0x7A, 0x7B, 0xFF, 0x7C, 0x7D, 0x7E, 0xAE
	.byte 0x00, 0xFF

	@ src/text_input_strings.c:24 gText_UnionRoomChatKeyboard_ABCDE
	.globl gText_Rom_5CC576
gText_Rom_5CC576: @ 0x085CC576
	.string "ABCDE$"
	.if (. - gText_Rom_5CC576) > 0x6
	.error "gText_Rom_5CC576 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC576) < 0x6
	.space 0x6 - (. - gText_Rom_5CC576)
	.endif

	@ src/text_input_strings.c:25 gText_UnionRoomChatKeyboard_FGHIJ
	.globl gText_Rom_5CC57C
gText_Rom_5CC57C: @ 0x085CC57C
	.string "FGHIJ$"
	.if (. - gText_Rom_5CC57C) > 0x6
	.error "gText_Rom_5CC57C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC57C) < 0x6
	.space 0x6 - (. - gText_Rom_5CC57C)
	.endif

	@ src/text_input_strings.c:26 gText_UnionRoomChatKeyboard_KLMNO
	.globl gText_Rom_5CC582
gText_Rom_5CC582: @ 0x085CC582
	.string "KLMNO$"
	.if (. - gText_Rom_5CC582) > 0x6
	.error "gText_Rom_5CC582 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC582) < 0x6
	.space 0x6 - (. - gText_Rom_5CC582)
	.endif

	@ src/text_input_strings.c:27 gText_UnionRoomChatKeyboard_PQRST
	.globl gText_Rom_5CC588
gText_Rom_5CC588: @ 0x085CC588
	.string "PQRST$"
	.if (. - gText_Rom_5CC588) > 0x6
	.error "gText_Rom_5CC588 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC588) < 0x6
	.space 0x6 - (. - gText_Rom_5CC588)
	.endif

	@ src/text_input_strings.c:28 gText_UnionRoomChatKeyboard_UVWXY
	.globl gText_Rom_5CC58E
gText_Rom_5CC58E: @ 0x085CC58E
	.string "UVWXY$"
	.if (. - gText_Rom_5CC58E) > 0x6
	.error "gText_Rom_5CC58E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC58E) < 0x6
	.space 0x6 - (. - gText_Rom_5CC58E)
	.endif
	@ Replaced baserom.gba range: offset=0x5CC594, size=0x6
	.byte 0xD4, 0xAF, 0xB0, 0x00, 0x00, 0xFF

	@ src/text_input_strings.c:30 gText_UnionRoomChatKeyboard_01234Upper (+1 aliases)
	.globl gText_Rom_5CC59A
gText_Rom_5CC59A: @ 0x085CC59A
	.string "01234$"
	.if (. - gText_Rom_5CC59A) > 0x6
	.error "gText_Rom_5CC59A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC59A) < 0x6
	.space 0x6 - (. - gText_Rom_5CC59A)
	.endif

	@ src/text_input_strings.c:31 gText_UnionRoomChatKeyboard_56789Upper (+1 aliases)
	.globl gText_Rom_5CC5A0
gText_Rom_5CC5A0: @ 0x085CC5A0
	.string "56789$"
	.if (. - gText_Rom_5CC5A0) > 0x6
	.error "gText_Rom_5CC5A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC5A0) < 0x6
	.space 0x6 - (. - gText_Rom_5CC5A0)
	.endif

	@ src/text_input_strings.c:55 gText_UnionRoomChatKeyboard_Emoji1
	.globl gText_Rom_5CC5A6
gText_Rom_5CC5A6: @ 0x085CC5A6
	.string "{EMOJI_MISCHIEVOUS}{EMOJI_HAPPY}{EMOJI_ANGRY}{EMOJI_SURPRISED}{EMOJI_BIGANGER}$"
	.if (. - gText_Rom_5CC5A6) > 0xb
	.error "gText_Rom_5CC5A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC5A6) < 0xb
	.space 0xb - (. - gText_Rom_5CC5A6)
	.endif

	@ src/text_input_strings.c:56 gText_UnionRoomChatKeyboard_Emoji2
	.globl gText_Rom_5CC5B1
gText_Rom_5CC5B1: @ 0x085CC5B1
	.string "{EMOJI_BIGSMILE}{EMOJI_EVIL}{EMOJI_NEUTRAL}{EMOJI_TIRED}{EMOJI_SHOCKED}$"
	.if (. - gText_Rom_5CC5B1) > 0xb
	.error "gText_Rom_5CC5B1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC5B1) < 0xb
	.space 0xb - (. - gText_Rom_5CC5B1)
	.endif

	@ src/text_input_strings.c:57 gText_UnionRoomChatKeyboard_Emoji3
	.globl gText_Rom_5CC5BC
gText_Rom_5CC5BC: @ 0x085CC5BC
	.string "{EMOJI_LEAF}{EMOJI_FIRE}{EMOJI_WATER}{EMOJI_BOLT}{EMOJI_BALL}$"
	.if (. - gText_Rom_5CC5BC) > 0xb
	.error "gText_Rom_5CC5BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC5BC) < 0xb
	.space 0xb - (. - gText_Rom_5CC5BC)
	.endif

	@ src/text_input_strings.c:58 gText_UnionRoomChatKeyboard_Emoji4
	.globl gText_Rom_5CC5C7
gText_Rom_5CC5C7: @ 0x085CC5C7
	.string "♂♀{EMOJI_LEFT_PAREN}{EMOJI_RIGHT_PAREN}{EMOJI_TILDE}$"
	.if (. - gText_Rom_5CC5C7) > 0x9
	.error "gText_Rom_5CC5C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC5C7) < 0x9
	.space 0x9 - (. - gText_Rom_5CC5C7)
	.endif

	@ src/text_input_strings.c:59 gText_UnionRoomChatKeyboard_Emoji5
	.globl gText_Rom_5CC5D0
gText_Rom_5CC5D0: @ 0x085CC5D0
	.string "{EMOJI_LEFT_EYE}{EMOJI_RIGHT_EYE}{EMOJI_SMALLWHEEL}{EMOJI_SPHERE}{EMOJI_IRRITATED}$"
	.if (. - gText_Rom_5CC5D0) > 0xb
	.error "gText_Rom_5CC5D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC5D0) < 0xb
	.space 0xb - (. - gText_Rom_5CC5D0)
	.endif
	@ Replaced baserom.gba range: offset=0x5CC5DB, size=0xB
	.byte 0xF9, 0xDF, 0xF9, 0xF1, 0xF9, 0xE0, 0xF9, 0xE2, 0xF9, 0xE3, 0xFF

	@ src/text_input_strings.c:61 gText_UnionRoomChatKeyboard_Emoji7
	.globl gText_Rom_5CC5E6
gText_Rom_5CC5E6: @ 0x085CC5E6
	.string "{EMOJI_RIGHT_FIST}{EMOJI_LEFT_FIST}{EMOJI_TRIANGLE_OUTLINE}{EMOJI_UNION}{EMOJI_GREATER_THAN}$"
	.if (. - gText_Rom_5CC5E6) > 0xb
	.error "gText_Rom_5CC5E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC5E6) < 0xb
	.space 0xb - (. - gText_Rom_5CC5E6)
	.endif

	@ src/text_input_strings.c:62 gText_UnionRoomChatKeyboard_Emoji8
	.globl gText_Rom_5CC5F1
gText_Rom_5CC5F1: @ 0x085CC5F1
	.string "{EMOJI_CIRCLE}{EMOJI_TRIANGLE}{EMOJI_SQUARE}{EMOJI_HEART}{EMOJI_MOON}$"
	.if (. - gText_Rom_5CC5F1) > 0xb
	.error "gText_Rom_5CC5F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC5F1) < 0xb
	.space 0xb - (. - gText_Rom_5CC5F1)
	.endif

	@ src/text_input_strings.c:63 gText_UnionRoomChatKeyboard_Emoji9
	.globl gText_Rom_5CC5FC
gText_Rom_5CC5FC: @ 0x085CC5FC
	.string "{EMOJI_NOTE}{EMOJI_PLUS}{EMOJI_MINUS}{EMOJI_EQUALS}{EMOJI_PIPE}$"
	.if (. - gText_Rom_5CC5FC) > 0xb
	.error "gText_Rom_5CC5FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC5FC) < 0xb
	.space 0xb - (. - gText_Rom_5CC5FC)
	.endif
	@ Replaced baserom.gba range: offset=0x5CC607, size=0x17
	.byte 0xF9, 0xD2, 0xF9, 0x09, 0xF9, 0xDB, 0xF0, 0x00, 0xFF, 0x1B, 0x27, 0x37, 0x15, 0xFF, 0x56, 0x60
	.byte 0x56, 0x65, 0xFF, 0xBB, 0xBC, 0xBD, 0xFF

	@ src/naming_screen.c:1428 sText_PageSwapSymbols (+1 aliases)
	.globl gText_Rom_5CC61E
gText_Rom_5CC61E: @ 0x085CC61E
	.string "きごう$"
	.if (. - gText_Rom_5CC61E) > 0x4
	.error "gText_Rom_5CC61E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC61E) < 0x4
	.space 0x4 - (. - gText_Rom_5CC61E)
	.endif

