	@ src/strings.c:354 gText_EscapeFromHere
	.globl gText_Rom_5CA246
gText_Rom_5CA246: @ 0x085CA246
	.string "ここを だっしゅつ して\n{STR_VAR_1}に もどる?$"
	.if (. - gText_Rom_5CA246) > 0x16
	.error "gText_Rom_5CA246 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA246) < 0x16
	.space 0x16 - (. - gText_Rom_5CA246)
	.endif
