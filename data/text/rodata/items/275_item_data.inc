	@ asm/berry_tag_screen.s:1746 GetEventLoadMessage
	.globl gText_Rom_5CD159
gText_Rom_5CD159: @ 0x085CD159
	.string "できごとの　よみこみが\nせいじょうに　しゅうりょう　しました$"
	.if (. - gText_Rom_5CD159) > 0x1f
	.error "gText_Rom_5CD159 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CD159) < 0x1f
	.space 0x1f - (. - gText_Rom_5CD159)
	.endif

	.globl gText_MysteryEventCannotConnect
gText_MysteryEventCannotConnect: @ 0x085CD178
	.string "せつぞく　できない　ききの　ようです\nただしい　ききと　やりなおしてください$"
	.if (. - gText_MysteryEventCannotConnect) != 0x27
	.error "gText_MysteryEventCannotConnect must retain its original byte length"
	.endif

	.globl gUnknown_85CD19F
gUnknown_85CD19F: @ 0x085CD19F

	@ asm/berry_tag_screen.s:1756 GetEventLoadMessage
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5CD19F
gText_Rom_5CD19F: @ 0x085CD19F
	.string "エラーがはっせいしました\nしゅうりょうします$"
	.if (. - gText_Rom_5CD19F) != 0x17
	.error "gText_Rom_5CD19F must retain its original byte length"
	.endif
	.globl gText_Rom_5CD1B2
	.set gText_Rom_5CD1B2, gText_Rom_5CD19F + 0x13

	.globl gText_MysteryEventPressAButton
gText_MysteryEventPressAButton: @ 0x085CD1B6
	.string "Aボタンを　おしてください$"
	.if (. - gText_MysteryEventPressAButton) != 0xE
	.error "gText_MysteryEventPressAButton must retain its original byte length"
	.endif

	.globl gText_MysteryEventConnected
gText_MysteryEventConnected: @ 0x085CD1C4
	.string "つながりました$"
	.if (. - gText_MysteryEventConnected) != 0x8
	.error "gText_MysteryEventConnected must retain its original byte length"
	.endif

	.globl gText_MysteryEventDataReceived
gText_MysteryEventDataReceived: @ 0x085CD1CC
	.string "データを　じゅしんしました$"
	.if (. - gText_MysteryEventDataReceived) != 0xE
	.error "gText_MysteryEventDataReceived must retain its original byte length"
	.endif

	@ The final "でした$" suffix is emitted at 0x085CD1E2 by the next include.
	.globl gText_MysteryEventSaveFailed
gText_MysteryEventSaveFailed: @ 0x085CD1DA
	.string "セーブできません"
	.if (. - gText_MysteryEventSaveFailed) != 0x8
	.error "gText_MysteryEventSaveFailed prefix must retain its original byte length"
	.endif
