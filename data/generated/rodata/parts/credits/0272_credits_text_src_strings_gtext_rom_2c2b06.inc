	@ src/strings.c:1096 gText_SaveCompletedPressA
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C2B06
gText_Rom_2C2B06: @ 0x082C2B06
	.string "  レポートを かきこみました!\nAボタンを おしてください$"
	.if (. - gText_Rom_2C2B06) != 0x1f
	.error "gText_Rom_2C2B06 must retain its original byte length"
	.endif
