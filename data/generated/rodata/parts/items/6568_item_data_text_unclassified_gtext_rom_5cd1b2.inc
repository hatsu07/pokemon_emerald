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
