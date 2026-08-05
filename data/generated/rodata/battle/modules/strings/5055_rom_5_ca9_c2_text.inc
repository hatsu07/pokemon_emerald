	@ src/strings.c:457 gText_MailToBagMessageErased
	.globl gText_Rom_5CA9C2
gText_Rom_5CA9C2: @ 0x085CA9C2
	.string "ないようを けした メールを\nバッグに いれました{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5CA9C2) > 0x1c
	.error "gText_Rom_5CA9C2 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CA9C2) < 0x1c
	.space 0x1c - (. - gText_Rom_5CA9C2)
	.endif
