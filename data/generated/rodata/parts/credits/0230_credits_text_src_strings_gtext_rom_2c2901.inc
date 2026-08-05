	@ src/strings.c:1075 gText_RecordUploadedViaWireless
	@ Preserve exact byte length: internal label.
	.globl gText_Rom_2C2901
gText_Rom_2C2901: @ 0x082C2901
	.string "   じぶんの きろくを\nジョイスポットに よみこませ ました!$"
	.if (. - gText_Rom_2C2901) != 0x21
	.error "gText_Rom_2C2901 must retain its original byte length"
	.endif
