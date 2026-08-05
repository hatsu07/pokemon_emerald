	@ src/strings.c:1088 gText_OtherTrainerHasNews
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C2A2E
gText_Rom_2C2A2E: @ 0x082C2A2E
	.string "  あいてが おなじ\nニュースを もっています!$"
	.if (. - gText_Rom_2C2A2E) != 0x19
	.error "gText_Rom_2C2A2E must retain its original byte length"
	.endif
