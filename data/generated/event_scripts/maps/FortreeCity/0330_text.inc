	@ data/maps/FortreeCity/scripts.inc:115 FortreeCity_Text_EveryoneHealthyAndLively
	.globl gText_Rom_1DFFEA
gText_Rom_1DFFEA: @ 0x081DFFEA
	.string "このまちは きのうえに\nいえを たてて くらしている……\pそのせいか みんな げんきで\nイキイキと している のですよ\pわしも このまちに きてから\n30ねんほど わかがえった きぶんです{EOS}"
	.if (. - gText_Rom_1DFFEA) > 0x5f
	.error "gText_Rom_1DFFEA may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1DFFEA) < 0x5f
	.space 0x5f - (. - gText_Rom_1DFFEA)
	.endif
