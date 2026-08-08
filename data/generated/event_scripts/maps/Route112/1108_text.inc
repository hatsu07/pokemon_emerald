	@ data/maps/Route112/scripts.inc:113 Route112_Text_YeahWeNeedMeteorite
	.globl gText_Rom_1EB047
gText_Rom_1EB047: @ 0x081EB047
	.string "そうらしいな…… だが そのためには\nいんせきが ひつよう なんだってよ$"
	.if (. - gText_Rom_1EB047) > 0x25
	.error "gText_Rom_1EB047 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EB047) < 0x25
	.space 0x25 - (. - gText_Rom_1EB047)
	.endif
