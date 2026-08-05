	@ data/maps/MagmaHideout_4F/scripts.inc:134 MagmaHideout_4F_Text_Grunt11Defeat (+1 aliases)
	.globl gText_Rom_21CA50
gText_Rom_21CA50: @ 0x0821CA50
	.string "やっぱり れいせいな きもちを\nうしなって いたら かてないな……"
	.byte EOS
	.if (. - gText_Rom_21CA50) > 0x22
	.error "gText_Rom_21CA50 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_21CA50) < 0x22
	.space 0x22 - (. - gText_Rom_21CA50)
	.endif
