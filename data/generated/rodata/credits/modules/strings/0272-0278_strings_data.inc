	@ src/strings.c:1096 gText_SaveCompletedPressA
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C2B06
gText_Rom_2C2B06: @ 0x082C2B06
	.string "  レポートを かきこみました!\nAボタンを おしてください$"
	.if (. - gText_Rom_2C2B06) != 0x1f
	.error "gText_Rom_2C2B06 must retain its original byte length"
	.endif
	.globl gUnknown_82C2B08
	.set gUnknown_82C2B08, gText_Rom_2C2B06 + 0x2

	@ src/strings.c:1097 gText_WonderCardThrownAway
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C2B25
gText_Rom_2C2B25: @ 0x082C2B25
	.string "   ふしぎなカードを すてました$"
	.if (. - gText_Rom_2C2B25) != 0x12
	.error "gText_Rom_2C2B25 must retain its original byte length"
	.endif
	.globl gUnknown_82C2B28
	.set gUnknown_82C2B28, gText_Rom_2C2B25 + 0x3

	@ src/strings.c:1098 gText_WonderNewsThrownAway
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C2B37
gText_Rom_2C2B37: @ 0x082C2B37
	.string " ニュースを すてました$"
	.if (. - gText_Rom_2C2B37) != 0xd
	.error "gText_Rom_2C2B37 must retain its original byte length"
	.endif
	.globl gUnknown_82C2B38
	.set gUnknown_82C2B38, gText_Rom_2C2B37 + 0x1
	.globl gUnknown_82C2B44
gUnknown_82C2B44: @ 0x082C2B44
	@ Replaced baserom.gba range: offset=0x2C2B44, size=0xC
	.byte 0x1C, 0x0C, 0x38, 0x15, 0x05, 0x08, 0x28, 0x23, 0x19, 0xFF, 0x00, 0x00
	.globl gUnknown_82C2B50
gUnknown_82C2B50: @ 0x082C2B50

	@ src/strings.c:1101 gText_PickOKCancel
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C2B50
gText_Rom_2C2B50: @ 0x082C2B50
	.string "{DPAD_UPDOWN}えらぶ {A_BUTTON}けってい {B_BUTTON}やめる$"
	.if (. - gText_Rom_2C2B50) != 0x13
	.error "gText_Rom_2C2B50 must retain its original byte length"
	.endif
