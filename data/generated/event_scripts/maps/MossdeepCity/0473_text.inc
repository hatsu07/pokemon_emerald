	@ data/maps/MossdeepCity/scripts.inc:333 MossdeepCity_Text_NiceIfWorldCoveredByFlowers
	.globl gText_Rom_1E19FB
gText_Rom_1E19FB: @ 0x081E19FB
	.string "せかいじゅうの すべてが!\pこのしま みたいに くさばなで\nいっぱいに なれば いいのにね!$"
	.if (. - gText_Rom_1E19FB) > 0x2f
	.error "gText_Rom_1E19FB may not grow beyond its original slot"
	.endif
	.if (. - gText_Rom_1E19FB) < 0x2f
	.space 0x2f - (. - gText_Rom_1E19FB)
	.endif
