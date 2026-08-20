	@ data/maps/MtChimney/scripts.inc:847 MtChimney_Text_SawyerRematchDefeat (+1 aliases)
	.globl gText_Rom_215AB6
gText_Rom_215AB6: @ 0x08215AB6
	.string "おおっ やっぱり\nあんたの ほうが あついねぇ!{EOS}"
	.if (. - gText_Rom_215AB6) > 0x19
	.error "gText_Rom_215AB6 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215AB6) < 0x19
	.space 0x19 - (. - gText_Rom_215AB6)
	.endif
