	@ src/strings.c:271 gText_BagFullCouldNotRemoveItem
	.globl gText_Rom_5C9D47
gText_Rom_5C9D47: @ 0x085C9D47
	.string "バッグが いっぱいで\nポケモンの どうぐを うけとれません!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9D47) > 0x21
	.error "gText_Rom_5C9D47 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9D47) < 0x21
	.space 0x21 - (. - gText_Rom_5C9D47)
	.endif
