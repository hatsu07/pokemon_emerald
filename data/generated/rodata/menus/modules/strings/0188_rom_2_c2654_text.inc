	@ src/strings.c:1050 gText_VarietyOfEventsImportedWireless
	.globl gText_Rom_2C2654
gText_Rom_2C2654: @ 0x082C2654
	.string "ワイヤレスで いろいろな できごとを\nよみこみます$"
	.if (. - gText_Rom_2C2654) > 0x1a
	.error "gText_Rom_2C2654 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2C2654) < 0x1a
	.space 0x1a - (. - gText_Rom_2C2654)
	.endif
