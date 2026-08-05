	@ data/maps/Route112/scripts.inc:125 Route112_Text_NotEasyToGetBackToLavaridge
	.globl gText_Rom_1EB0B0
gText_Rom_1EB0B0: @ 0x081EB0B0
	.string "うーむ…… キンセツに いきたいのだが……\nこの だんさを おりてしまうと\lフエンに もどるのは たいへん だよな……$"
	.if (. - gText_Rom_1EB0B0) > 0x3c
	.error "gText_Rom_1EB0B0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1EB0B0) < 0x3c
	.space 0x3c - (. - gText_Rom_1EB0B0)
	.endif
