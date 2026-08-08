	@ src/data/easy_chat/easy_chat_group_endings.h:196 easy_chat_group_endings_line_196
	.globl gText_Rom_5CD1E2
gText_Rom_5CD1E2: @ 0x085CD1E2
	.string "でした$"
	.if (. - gText_Rom_5CD1E2) > 0x4
	.error "gText_Rom_5CD1E2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CD1E2) < 0x4
	.space 0x4 - (. - gText_Rom_5CD1E2)
	.endif

	.globl gText_MysteryEventSaveSucceeded
gText_MysteryEventSaveSucceeded: @ 0x085CD1E6
	.string "セーブできました$"
	.if (. - gText_MysteryEventSaveSucceeded) != 0x9
	.error "gText_MysteryEventSaveSucceeded must retain its original byte length"
	.endif

	@ The final "でした$" suffix is emitted at 0x085CD1F7 below.
	.globl gText_MysteryEventLoadFailed
gText_MysteryEventLoadFailed: @ 0x085CD1EF
	.string "ロードできません"
	.if (. - gText_MysteryEventLoadFailed) != 0x8
	.error "gText_MysteryEventLoadFailed prefix must retain its original byte length"
	.endif

	@ src/data/easy_chat/easy_chat_group_endings.h:196 easy_chat_group_endings_line_196
	.globl gText_Rom_5CD1F7
gText_Rom_5CD1F7: @ 0x085CD1F7
	.string "でした$"
	.if (. - gText_Rom_5CD1F7) > 0x4
	.error "gText_Rom_5CD1F7 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CD1F7) < 0x4
	.space 0x4 - (. - gText_Rom_5CD1F7)
	.endif
