	@ data/maps/MtChimney/scripts.inc:799 MtChimney_Text_SheilaIntro (+1 aliases)
	.globl gText_Rom_215929
gText_Rom_215929: @ 0x08215929
	.string "せっかく えんとつやまに きたんだから\nここでも ポケモンを たたかわせたいの!$"
	.if (. - gText_Rom_215929) > 0x29
	.error "gText_Rom_215929 may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_215929) < 0x29
	.space 0x29 - (. - gText_Rom_215929)
	.endif
