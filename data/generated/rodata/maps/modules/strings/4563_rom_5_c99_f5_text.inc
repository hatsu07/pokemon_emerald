	@ src/strings.c:235 gText_AnythingElseICanHelp
	.globl gText_Rom_5C99F5
gText_Rom_5C99F5: @ 0x085C99F5
	.string "その ほかに わたしどもで\nなにか おちからに なれることは?$"
	.if (. - gText_Rom_5C99F5) > 0x20
	.error "gText_Rom_5C99F5 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C99F5) < 0x20
	.space 0x20 - (. - gText_Rom_5C99F5)
	.endif
