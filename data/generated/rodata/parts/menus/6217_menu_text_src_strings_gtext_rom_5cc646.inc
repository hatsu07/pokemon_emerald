	@ src/strings.c:730 gText_RegisterTextHere
	.globl gText_Rom_5CC646
gText_Rom_5CC646: @ 0x085CC646
	.string "ここに とうろくしますか?$"
	.if (. - gText_Rom_5CC646) > 0xe
	.error "gText_Rom_5CC646 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC646) < 0xe
	.space 0xe - (. - gText_Rom_5CC646)
	.endif
