	@ data/maps/MtChimney_CableCarStation/scripts.inc:85 MtChimney_CableCarStation_Text_CableCarReadyGetOn
	.globl gText_Rom_2120DE
gText_Rom_2120DE: @ 0x082120DE
	.string "くだり ロープウェイ\nまもなく しゅっぱつ です\lごりように なられますか?{EOS}"
	.if (. - gText_Rom_2120DE) > 0x27
	.error "gText_Rom_2120DE may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_2120DE) < 0x27
	.space 0x27 - (. - gText_Rom_2120DE)
	.endif
