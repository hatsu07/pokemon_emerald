	@ src/strings.c:1089 gText_OtherTrainerHasStamp
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C2A47
gText_Rom_2C2A47: @ 0x082C2A47
	.string " あいてが おなじ\nスタンプを もっています!$"
	.if (. - gText_Rom_2C2A47) != 0x18
	.error "gText_Rom_2C2A47 must retain its original byte length"
	.endif
