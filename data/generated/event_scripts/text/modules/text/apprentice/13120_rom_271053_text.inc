	@ data/text/apprentice.inc:598 gText_ApprenticeMonThanks3
	.globl gText_Rom_271053
gText_Rom_271053: @ 0x08271053
	.string "あたし なんかの いうこと\n{STR_VAR_1}が きいて くれるか……\pでも やって みます!\pそのまえに つかまえられるか……\nいえ! がんばって みます\pありがとう ございます!$"
	.if (. - gText_Rom_271053) > 0x55
	.error "gText_Rom_271053 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_271053) < 0x55
	.space 0x55 - (. - gText_Rom_271053)
	.endif
