	@ src/data/easy_chat/easy_chat_group_endings.h:352 easy_chat_group_endings_line_352
	.globl gText_Rom_5CC693
gText_Rom_5CC693: @ 0x085CC693
	.string "ません{EOS}"
	.if (. - gText_Rom_5CC693) > 0x4
	.error "gText_Rom_5CC693 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC693) < 0x4
	.space 0x4 - (. - gText_Rom_5CC693)
	.endif
	@ src/strings.c:736 gText_ExitingChat
	.globl gText_ExitingChat
gText_ExitingChat: @ 0x085CC697
	.string "さんかしゃが いなくなったので\nしゅうりょうします!{EOS}"
	.if (. - gText_ExitingChat) > 0x1b
	.error "gText_ExitingChat may not grow beyond its original slot"
	.endif
	.if (. - gText_ExitingChat) < 0x1b
	.space 0x1b - (. - gText_ExitingChat)
	.endif
	@ analyzed canonical ROM range 0x085CC6B2-0x085CC6CC
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x78, 0xAE, 0x91, 0xAE, 0x19, 0x00, 0xF7, 0x00, 0x0B, 0x2E, 0x37, 0xFE, 0x17, 0x09, 0x10, 0x19
	.byte 0x44, 0x00, 0x06, 0x02, 0x0B, 0x2E, 0x0C, 0x1F, 0x0D, 0xAB, 0xFF
	.globl gText_Rom_5CC6CD
gText_Rom_5CC6CD: @ 0x085CC6CD
	.string "とうろくが かわりました\nポケモンレポートに かきこみますか?{EOS}"
	.if (. - gText_Rom_5CC6CD) > 0x20
	.error "gText_Rom_5CC6CD may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC6CD) < 0x20
	.space 0x20 - (. - gText_Rom_5CC6CD)
	.endif
