	@ data/maps/Route104/scripts.inc:997 Route104_Text_BrineyLivesInSeasideCottage
	.globl gText_Rom_1E7AE8
gText_Rom_1E7AE8: @ 0x081E7AE8
	.string "その はまべの こやには\nハギろうじん という ひとが すんでるの!\pむかしは どんな あらなみも おそれない\nすごうでの ふなのり だった らしいわ!$"
	.if (. - gText_Rom_1E7AE8) > 0x4d
	.error "gText_Rom_1E7AE8 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E7AE8) < 0x4d
	.space 0x4d - (. - gText_Rom_1E7AE8)
	.endif
