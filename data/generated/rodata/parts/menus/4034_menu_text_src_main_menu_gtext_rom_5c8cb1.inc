	@ src/main_menu.c:270 gText_WirelessNotConnected
	@ Preserve exact byte length: semantic suffix text pointer.
	.globl gText_Rom_5C8CB1
gText_Rom_5C8CB1: @ 0x085C8CB1
	.string "ワイヤレスアダプタ が\nつながっていません$"
	.if (. - gText_Rom_5C8CB1) != 0x16
	.error "gText_Rom_5C8CB1 must retain its original byte length"
	.endif
