	@ data/text/trainers.inc:1481 Route115_Text_NobPostRematch
	.globl gText_Rom_25D2DF
gText_Rom_25D2DF: @ 0x0825D2DF
	.string "おれの ポケモンは まだまだ つよくなる!\nがんばって きたえるぞ!$"
	.if (. - gText_Rom_25D2DF) > 0x23
	.error "gText_Rom_25D2DF may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_25D2DF) < 0x23
	.space 0x23 - (. - gText_Rom_25D2DF)
	.endif
