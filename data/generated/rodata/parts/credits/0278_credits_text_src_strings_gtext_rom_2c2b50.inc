	@ src/strings.c:1101 gText_PickOKCancel
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_2C2B50
gText_Rom_2C2B50: @ 0x082C2B50
	.string "{DPAD_UPDOWN}えらぶ {A_BUTTON}けってい {B_BUTTON}やめる$"
	.if (. - gText_Rom_2C2B50) != 0x13
	.error "gText_Rom_2C2B50 must retain its original byte length"
	.endif
