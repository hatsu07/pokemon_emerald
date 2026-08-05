	@ src/strings.c:741 gText_PlayerSavedGame_Chat
	.globl gText_Rom_5CC731
gText_Rom_5CC731: @ 0x085CC731
	.string "{DYNAMIC 0} は\nレポートに しっかり かきのこした!$"
	.if (. - gText_Rom_5CC731) > 0x18
	.error "gText_Rom_5CC731 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5CC731) < 0x18
	.space 0x18 - (. - gText_Rom_5CC731)
	.endif
