	@ src/strings.c:89 gText_DexSearchAlphaSTU
	.globl gText_Rom_5CBC50
gText_Rom_5CBC50: @ 0x085CBC50
	.string "まみむめも{EOS}"
	.if (. - gText_Rom_5CBC50) > 0x6
	.error "gText_Rom_5CBC50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CBC50) < 0x6
	.space 0x6 - (. - gText_Rom_5CBC50)
	.endif
	@ analyzed canonical ROM range 0x085CBC56-0x085CBC5B
	@ structured u8 payload; no safe higher-level semantic type was provable
	.byte 0x10, 0x11, 0x12, 0x13, 0x14, 0x00
