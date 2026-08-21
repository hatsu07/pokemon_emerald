	@ src/text_input_strings.c:24 gText_UnionRoomChatKeyboard_ABCDE
	.globl gText_Rom_5CC576
gText_Rom_5CC576: @ 0x085CC576
	.string "ABCDE{EOS}"
	.if (. - gText_Rom_5CC576) > 0x6
	.error "gText_Rom_5CC576 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC576) < 0x6
	.space 0x6 - (. - gText_Rom_5CC576)
	.endif

	@ src/text_input_strings.c:25 gText_UnionRoomChatKeyboard_FGHIJ
	.globl gText_Rom_5CC57C
gText_Rom_5CC57C: @ 0x085CC57C
	.string "FGHIJ{EOS}"
	.if (. - gText_Rom_5CC57C) > 0x6
	.error "gText_Rom_5CC57C may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC57C) < 0x6
	.space 0x6 - (. - gText_Rom_5CC57C)
	.endif

	@ src/text_input_strings.c:26 gText_UnionRoomChatKeyboard_KLMNO
	.globl gText_Rom_5CC582
gText_Rom_5CC582: @ 0x085CC582
	.string "KLMNO{EOS}"
	.if (. - gText_Rom_5CC582) > 0x6
	.error "gText_Rom_5CC582 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC582) < 0x6
	.space 0x6 - (. - gText_Rom_5CC582)
	.endif

	@ src/text_input_strings.c:27 gText_UnionRoomChatKeyboard_PQRST
	.globl gText_Rom_5CC588
gText_Rom_5CC588: @ 0x085CC588
	.string "PQRST{EOS}"
	.if (. - gText_Rom_5CC588) > 0x6
	.error "gText_Rom_5CC588 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC588) < 0x6
	.space 0x6 - (. - gText_Rom_5CC588)
	.endif

	@ src/text_input_strings.c:28 gText_UnionRoomChatKeyboard_UVWXY
	.globl gText_Rom_5CC58E
gText_Rom_5CC58E: @ 0x085CC58E
	.string "UVWXY{EOS}"
	.if (. - gText_Rom_5CC58E) > 0x6
	.error "gText_Rom_5CC58E may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC58E) < 0x6
	.space 0x6 - (. - gText_Rom_5CC58E)
	.endif
	@ Decoded text from ROM range: offset=0x5CC594, size=0x6
	.string "Z・…　　{EOS}"

	@ src/text_input_strings.c:30 gText_UnionRoomChatKeyboard_01234Upper (+1 aliases)
	.globl gText_Rom_5CC59A
gText_Rom_5CC59A: @ 0x085CC59A
	.string "01234{EOS}"
	.if (. - gText_Rom_5CC59A) > 0x6
	.error "gText_Rom_5CC59A may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC59A) < 0x6
	.space 0x6 - (. - gText_Rom_5CC59A)
	.endif

	@ src/text_input_strings.c:31 gText_UnionRoomChatKeyboard_56789Upper (+1 aliases)
	.globl gText_Rom_5CC5A0
gText_Rom_5CC5A0: @ 0x085CC5A0
	.string "56789{EOS}"
	.if (. - gText_Rom_5CC5A0) > 0x6
	.error "gText_Rom_5CC5A0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC5A0) < 0x6
	.space 0x6 - (. - gText_Rom_5CC5A0)
	.endif

	@ src/text_input_strings.c:55 gText_UnionRoomChatKeyboard_Emoji1
	.globl gText_Rom_5CC5A6
gText_Rom_5CC5A6: @ 0x085CC5A6
	.string "{EMOJI_MISCHIEVOUS}{EMOJI_HAPPY}{EMOJI_ANGRY}{EMOJI_SURPRISED}{EMOJI_BIGANGER}{EOS}"
	.if (. - gText_Rom_5CC5A6) > 0xb
	.error "gText_Rom_5CC5A6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC5A6) < 0xb
	.space 0xb - (. - gText_Rom_5CC5A6)
	.endif

	@ src/text_input_strings.c:56 gText_UnionRoomChatKeyboard_Emoji2
	.globl gText_Rom_5CC5B1
gText_Rom_5CC5B1: @ 0x085CC5B1
	.string "{EMOJI_BIGSMILE}{EMOJI_EVIL}{EMOJI_NEUTRAL}{EMOJI_TIRED}{EMOJI_SHOCKED}{EOS}"
	.if (. - gText_Rom_5CC5B1) > 0xb
	.error "gText_Rom_5CC5B1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC5B1) < 0xb
	.space 0xb - (. - gText_Rom_5CC5B1)
	.endif

	@ src/text_input_strings.c:57 gText_UnionRoomChatKeyboard_Emoji3
	.globl gText_Rom_5CC5BC
gText_Rom_5CC5BC: @ 0x085CC5BC
	.string "{EMOJI_LEAF}{EMOJI_FIRE}{EMOJI_WATER}{EMOJI_BOLT}{EMOJI_BALL}{EOS}"
	.if (. - gText_Rom_5CC5BC) > 0xb
	.error "gText_Rom_5CC5BC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC5BC) < 0xb
	.space 0xb - (. - gText_Rom_5CC5BC)
	.endif

	@ src/text_input_strings.c:58 gText_UnionRoomChatKeyboard_Emoji4
	.globl gText_Rom_5CC5C7
gText_Rom_5CC5C7: @ 0x085CC5C7
	.string "♂♀{EMOJI_LEFT_PAREN}{EMOJI_RIGHT_PAREN}{EMOJI_TILDE}{EOS}"
	.if (. - gText_Rom_5CC5C7) > 0x9
	.error "gText_Rom_5CC5C7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC5C7) < 0x9
	.space 0x9 - (. - gText_Rom_5CC5C7)
	.endif

	@ src/text_input_strings.c:59 gText_UnionRoomChatKeyboard_Emoji5
	.globl gText_Rom_5CC5D0
gText_Rom_5CC5D0: @ 0x085CC5D0
	.string "{EMOJI_LEFT_EYE}{EMOJI_RIGHT_EYE}{EMOJI_SMALLWHEEL}{EMOJI_SPHERE}{EMOJI_IRRITATED}{EOS}"
	.if (. - gText_Rom_5CC5D0) > 0xb
	.error "gText_Rom_5CC5D0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC5D0) < 0xb
	.space 0xb - (. - gText_Rom_5CC5D0)
	.endif
	@ analyzed canonical ROM range 0x085CC5DB-0x085CC5E5
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xF9, 0xDF, 0xF9, 0xF1, 0xF9, 0xE0, 0xF9, 0xE2, 0xF9, 0xE3, 0xFF
	.globl gText_Rom_5CC5E6
gText_Rom_5CC5E6: @ 0x085CC5E6
	.string "{EMOJI_RIGHT_FIST}{EMOJI_LEFT_FIST}{EMOJI_TRIANGLE_OUTLINE}{EMOJI_UNION}{EMOJI_GREATER_THAN}{EOS}"
	.if (. - gText_Rom_5CC5E6) > 0xb
	.error "gText_Rom_5CC5E6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC5E6) < 0xb
	.space 0xb - (. - gText_Rom_5CC5E6)
	.endif

	@ src/text_input_strings.c:62 gText_UnionRoomChatKeyboard_Emoji8
	.globl gText_Rom_5CC5F1
gText_Rom_5CC5F1: @ 0x085CC5F1
	.string "{EMOJI_CIRCLE}{EMOJI_TRIANGLE}{EMOJI_SQUARE}{EMOJI_HEART}{EMOJI_MOON}{EOS}"
	.if (. - gText_Rom_5CC5F1) > 0xb
	.error "gText_Rom_5CC5F1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC5F1) < 0xb
	.space 0xb - (. - gText_Rom_5CC5F1)
	.endif

	@ src/text_input_strings.c:63 gText_UnionRoomChatKeyboard_Emoji9
	.globl gText_Rom_5CC5FC
gText_Rom_5CC5FC: @ 0x085CC5FC
	.string "{EMOJI_NOTE}{EMOJI_PLUS}{EMOJI_MINUS}{EMOJI_EQUALS}{EMOJI_PIPE}{EOS}"
	.if (. - gText_Rom_5CC5FC) > 0xb
	.error "gText_Rom_5CC5FC may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC5FC) < 0xb
	.space 0xb - (. - gText_Rom_5CC5FC)
	.endif
	@ analyzed canonical ROM range 0x085CC607-0x085CC61D
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0xF9, 0xD2, 0xF9, 0x09, 0xF9, 0xDB, 0xF0, 0x00, 0xFF, 0x1B, 0x27, 0x37, 0x15, 0xFF, 0x56, 0x60
	.byte 0x56, 0x65, 0xFF, 0xBB, 0xBC, 0xBD, 0xFF
