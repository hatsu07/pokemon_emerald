	@ data/maps/MtChimney/scripts.inc:784 MtChimney_Text_ShelbyPostRematch
	.globl gText_Rom_2158C0
gText_Rom_2158C0: @ 0x082158C0
	.string "おまえさんの こころと\nポケモンの こころは ひとつ なのかもな$"
	.if (. - gText_Rom_2158C0) > 0x21
	.error "gText_Rom_2158C0 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2158C0) < 0x21
	.space 0x21 - (. - gText_Rom_2158C0)
	.endif
