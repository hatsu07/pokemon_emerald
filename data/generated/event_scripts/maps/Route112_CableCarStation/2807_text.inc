	@ data/maps/Route112_CableCarStation/scripts.inc:86 Route112_CableCarStation_Text_CableCarReadyGetOn
	.globl gText_Rom_211FD1
gText_Rom_211FD1: @ 0x08211FD1
	.string "のぼり ロープウェイ\nまもなく しゅっぱつ です\lごりように なられますか?$"
	.if (. - gText_Rom_211FD1) > 0x27
	.error "gText_Rom_211FD1 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_211FD1) < 0x27
	.space 0x27 - (. - gText_Rom_211FD1)
	.endif
