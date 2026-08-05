	@ src/strings.c:296 gText_PkmnFriendlyBaseVar2Fell
	.globl gText_Rom_5C9F78
gText_Rom_5C9F78: @ 0x085C9F78
	.string "{STR_VAR_1}が ちょっと なついた!\n{STR_VAR_2}の きそポイントが さがった!{PAUSE_UNTIL_PRESS}$"
	.if (. - gText_Rom_5C9F78) > 0x23
	.error "gText_Rom_5C9F78 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_5C9F78) < 0x23
	.space 0x23 - (. - gText_Rom_5C9F78)
	.endif
